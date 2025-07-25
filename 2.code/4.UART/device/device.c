//#############################################################################
//
// FILE:   device.c
//
// TITLE:  Device setup for examples.
//
//#############################################################################
//
//
// 
// C2000Ware v5.05.00.00
//
// Copyright (C) 2024 Texas Instruments Incorporated - http://www.ti.com
//
// Redistribution and use in source and binary forms, with or without 
// modification, are permitted provided that the following conditions 
// are met:
// 
//   Redistributions of source code must retain the above copyright 
//   notice, this list of conditions and the following disclaimer.
// 
//   Redistributions in binary form must reproduce the above copyright
//   notice, this list of conditions and the following disclaimer in the 
//   documentation and/or other materials provided with the   
//   distribution.
// 
//   Neither the name of Texas Instruments Incorporated nor the names of
//   its contributors may be used to endorse or promote products derived
//   from this software without specific prior written permission.
// 
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS 
// "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT 
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT 
// OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, 
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT 
// LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT 
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE 
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
// $
//#############################################################################

//
// Included Files
//
#include "device.h"
#include "driverlib.h"
#ifdef __cplusplus
using std::memcpy;
#endif
#ifdef CMDTOOL
#include "device_cmd.h"
#endif

//*****************************************************************************
//
// Function to initialize the device. Primarily initializes system control to a
// known state by disabling the watchdog, setting up the SYSCLKOUT frequency,
// and enabling the clocks to the peripherals.
// To configure the pins as analog pins, use the function GPIO_setAnalogMode
//
// Note : In case XTAL is used as the PLL source, it is recommended to invoke
// the Device_verifyXTAL() before configuring PLL
//
//*****************************************************************************
void Device_init(void)
{
    //
    // Disable the watchdog
    //
    SysCtl_disableWatchdog();
#ifdef CMDTOOL
    CMD_init();
#endif

#ifdef _FLASH
#ifndef CMDTOOL
    //
    // Copy time critical code and flash setup code to RAM. This includes the
    // following functions: InitFlash();
    //
    // The RamfuncsLoadStart, RamfuncsLoadSize, and RamfuncsRunStart symbols
    // are created by the linker. Refer to the device .cmd file.
    //
    memcpy(&RamfuncsRunStart, &RamfuncsLoadStart, (size_t)&RamfuncsLoadSize);
#endif
    //
    // Call Flash Initialization to setup flash waitstates. This function must
    // reside in RAM.
    //

    Flash_initModule(FLASH0CTRL_BASE, FLASH0ECC_BASE, DEVICE_FLASH_WAITSTATES);
#endif


    //
    // Set up PLL control and clock dividers
    //
    SysCtl_setClock(DEVICE_SETCLOCK_CFG);

    //
    // Make sure the LSPCLK divider is set to the default (divide by 4)
    //
    SysCtl_setLowSpeedClock(SYSCTL_LSPCLK_PRESCALE_4);

    //
    // These asserts will check that the #defines for the clock rates in
    // device.h match the actual rates that have been configured. If they do
    // not match, check that the calculations of DEVICE_SYSCLK_FREQ and
    // DEVICE_LSPCLK_FREQ are accurate. Some examples will not perform as
    // expected if these are not correct.
    //
    ASSERT(SysCtl_getClock(DEVICE_OSCSRC_FREQ) == DEVICE_SYSCLK_FREQ);
    ASSERT(SysCtl_getLowSpeedClock(DEVICE_OSCSRC_FREQ) == DEVICE_LSPCLK_FREQ);

#ifndef _FLASH
    //
    // Call Device_cal function when run using debugger
    // This function is called as part of the Boot code. The function is called
    // in the Device_init function since during debug time resets, the boot code
    // will not be executed and the gel script will reinitialize all the
    // registers and the calibrated values will be lost.
	// Sysctl_deviceCal is a wrapper function for Device_Cal
    //
    SysCtl_deviceCal();
#endif

    //
    // Turn on all peripherals
    //
    Device_enableAllPeripherals();

    //
    // Update the offset trim for PGA2
    //
    if(HWREG(DEVCFG_BASE + SYSCTL_O_REVID) == 1U)
    {
        PGA_setOffsetTrimNMOS(PGA2_BASE);
        PGA_setOffsetTrimPMOS(PGA2_BASE);
        
        //
        //Set bits in ADCCONFIG2 and make ADC OFFTRIM even for all ADCs
        //
        EALLOW;
        HWREG(ADCA_BASE + 0x66U)|=0x00000C00U;
        HWREG(ADCB_BASE + 0x66U)|=0x00000C00U;
        HWREG(ADCC_BASE + 0x66U)|=0x00000C00U;
        HWREG(ADCD_BASE + 0x66U)|=0x00000C00U;
        HWREG(ADCE_BASE + 0x66U)|=0x00000C00U;

        if(HWREGH(ADCA_BASE + ADC_O_OFFTRIM) % 2U)
        {
            HWREGH(ADCA_BASE + ADC_O_OFFTRIM) += 1U;
        }
        if (HWREGH(ADCB_BASE + ADC_O_OFFTRIM) % 2U)
        {
            HWREGH(ADCB_BASE + ADC_O_OFFTRIM) += 1U;
        }
        if (HWREGH(ADCC_BASE + ADC_O_OFFTRIM) % 2U)
        {
            HWREGH(ADCC_BASE + ADC_O_OFFTRIM) += 1U;
        }
        if (HWREGH(ADCD_BASE + ADC_O_OFFTRIM) % 2U)
        {
            HWREGH(ADCD_BASE + ADC_O_OFFTRIM) += 1U;
        }
        if (HWREGH(ADCE_BASE + ADC_O_OFFTRIM) % 2U)
        {
            HWREGH(ADCE_BASE + ADC_O_OFFTRIM) += 1U;
        }
        EDIS;
    }

    //
    // Lock VREGCTL Register
    // The register VREGCTL is not supported in this device. It is locked to
    // prevent any writes to this register
    //
    ASysCtl_lockVREG();

    //
    // Configure GPIO 11, 12, 13, 16, 17, 20, 21, 24, and 28 as digital pins
    //
    GPIO_setAnalogMode(11U, GPIO_ANALOG_DISABLED);
    GPIO_setAnalogMode(12U, GPIO_ANALOG_DISABLED);
    GPIO_setAnalogMode(13U, GPIO_ANALOG_DISABLED);
    GPIO_setAnalogMode(16U, GPIO_ANALOG_DISABLED);
    GPIO_setAnalogMode(17U, GPIO_ANALOG_DISABLED);
    GPIO_setAnalogMode(20U, GPIO_ANALOG_DISABLED);
    GPIO_setAnalogMode(21U, GPIO_ANALOG_DISABLED);
    GPIO_setAnalogMode(24U, GPIO_ANALOG_DISABLED);
    GPIO_setAnalogMode(28U, GPIO_ANALOG_DISABLED);

}

//*****************************************************************************
//
// Function to turn on all peripherals, enabling reads and writes to the
// peripherals' registers.
//
// Note that to reduce power, unused peripherals should be disabled.
//
//*****************************************************************************
void Device_enableAllPeripherals(void)
{
    SysCtl_enablePeripheral(SYSCTL_PERIPH_CLK_CLA1);
    SysCtl_enablePeripheral(SYSCTL_PERIPH_CLK_DMA);
    SysCtl_enablePeripheral(SYSCTL_PERIPH_CLK_TIMER0);
    SysCtl_enablePeripheral(SYSCTL_PERIPH_CLK_TIMER1);
    SysCtl_enablePeripheral(SYSCTL_PERIPH_CLK_TIMER2);
    SysCtl_enablePeripheral(SYSCTL_PERIPH_CLK_HRCAL);
    SysCtl_enablePeripheral(SYSCTL_PERIPH_CLK_TBCLKSYNC);
    SysCtl_enablePeripheral(SYSCTL_PERIPH_CLK_ERAD);

    SysCtl_enablePeripheral(SYSCTL_PERIPH_CLK_EPWM1);
    SysCtl_enablePeripheral(SYSCTL_PERIPH_CLK_EPWM2);
    SysCtl_enablePeripheral(SYSCTL_PERIPH_CLK_EPWM3);
    SysCtl_enablePeripheral(SYSCTL_PERIPH_CLK_EPWM4);
    SysCtl_enablePeripheral(SYSCTL_PERIPH_CLK_EPWM5);
    SysCtl_enablePeripheral(SYSCTL_PERIPH_CLK_EPWM6);
    SysCtl_enablePeripheral(SYSCTL_PERIPH_CLK_EPWM7);
    SysCtl_enablePeripheral(SYSCTL_PERIPH_CLK_EPWM8);
    SysCtl_enablePeripheral(SYSCTL_PERIPH_CLK_EPWM9);
    SysCtl_enablePeripheral(SYSCTL_PERIPH_CLK_EPWM10);
    SysCtl_enablePeripheral(SYSCTL_PERIPH_CLK_EPWM11);
    SysCtl_enablePeripheral(SYSCTL_PERIPH_CLK_EPWM12);
    SysCtl_enablePeripheral(SYSCTL_PERIPH_CLK_ECAP1);
    SysCtl_enablePeripheral(SYSCTL_PERIPH_CLK_ECAP2);

    SysCtl_enablePeripheral(SYSCTL_PERIPH_CLK_EQEP1);
    SysCtl_enablePeripheral(SYSCTL_PERIPH_CLK_EQEP2);
    SysCtl_enablePeripheral(SYSCTL_PERIPH_CLK_EQEP3);

    SysCtl_enablePeripheral(SYSCTL_PERIPH_CLK_SCIA);
    SysCtl_enablePeripheral(SYSCTL_PERIPH_CLK_SCIB);
    SysCtl_enablePeripheral(SYSCTL_PERIPH_CLK_SCIC);
    SysCtl_enablePeripheral(SYSCTL_PERIPH_CLK_SPIA);
    SysCtl_enablePeripheral(SYSCTL_PERIPH_CLK_SPIB);

    SysCtl_enablePeripheral(SYSCTL_PERIPH_CLK_I2CA);
    SysCtl_enablePeripheral(SYSCTL_PERIPH_CLK_I2CB);

    SysCtl_enablePeripheral(SYSCTL_PERIPH_CLK_MCANA);
    SysCtl_enablePeripheral(SYSCTL_PERIPH_CLK_MCANB);
    SysCtl_enablePeripheral(SYSCTL_PERIPH_CLK_USBA);

    SysCtl_enablePeripheral(SYSCTL_PERIPH_CLK_ADCA);
    SysCtl_enablePeripheral(SYSCTL_PERIPH_CLK_ADCB);
    SysCtl_enablePeripheral(SYSCTL_PERIPH_CLK_ADCC);
    SysCtl_enablePeripheral(SYSCTL_PERIPH_CLK_ADCD);
    SysCtl_enablePeripheral(SYSCTL_PERIPH_CLK_ADCE);

    SysCtl_enablePeripheral(SYSCTL_PERIPH_CLK_CMPSS1);
    SysCtl_enablePeripheral(SYSCTL_PERIPH_CLK_CMPSS2);
    SysCtl_enablePeripheral(SYSCTL_PERIPH_CLK_CMPSS3);
    SysCtl_enablePeripheral(SYSCTL_PERIPH_CLK_CMPSS4);
    SysCtl_enablePeripheral(SYSCTL_PERIPH_CLK_PGA1);
    SysCtl_enablePeripheral(SYSCTL_PERIPH_CLK_PGA2);
    SysCtl_enablePeripheral(SYSCTL_PERIPH_CLK_PGA3);

    SysCtl_enablePeripheral(SYSCTL_PERIPH_CLK_DACA);

    SysCtl_enablePeripheral(SYSCTL_PERIPH_CLK_CLB1);
    SysCtl_enablePeripheral(SYSCTL_PERIPH_CLK_CLB2);

    SysCtl_enablePeripheral(SYSCTL_PERIPH_CLK_FSITXA);
    SysCtl_enablePeripheral(SYSCTL_PERIPH_CLK_FSIRXA);

    SysCtl_enablePeripheral(SYSCTL_PERIPH_CLK_LINA);

    SysCtl_enablePeripheral(SYSCTL_PERIPH_CLK_PMBUSA);

    SysCtl_enablePeripheral(SYSCTL_PERIPH_CLK_DCC0);
    SysCtl_enablePeripheral(SYSCTL_PERIPH_CLK_DCC1);
    SysCtl_enablePeripheral(SYSCTL_PERIPH_CLK_AESA);
    SysCtl_enablePeripheral(SYSCTL_PERIPH_CLK_EPG1);
}

//*****************************************************************************
//
// Function to disable pin locks and enable pullups on GPIOs.
//
//*****************************************************************************
void Device_initGPIO(void)
{
    //
    // Disable pin locks.
    //
    GPIO_unlockPortConfig(GPIO_PORT_A, 0xFFFFFFFF);
    GPIO_unlockPortConfig(GPIO_PORT_B, 0xFFFFFFFF);
    GPIO_unlockPortConfig(GPIO_PORT_C, 0xFFFFFFFF);
    GPIO_unlockPortConfig(GPIO_PORT_G, 0xFFFFFFFF);
    GPIO_unlockPortConfig(GPIO_PORT_H, 0xFFFFFFFF);
}

//*****************************************************************************
//
// Function to verify the XTAL frequency
// freq is the XTAL frequency in MHz
// The function return true if the the actual XTAL frequency matches with the
// input value
//
// Note that this function assumes that the PLL is not already configured and
// hence uses SysClk freq = 10MHz for DCC calculation
//
//*****************************************************************************
bool Device_verifyXTAL(float freq)
{
    //
    // Use DCC to verify the XTAL frequency using INTOSC2 as reference clock
    //

    //
    // Turn on XTAL and wait for it to power up using X1CNT
    //
    SysCtl_turnOnOsc(SYSCTL_OSCSRC_XTAL);
    SysCtl_clearExternalOscCounterValue();
    while(SysCtl_getExternalOscCounterValue() != SYSCTL_X1CNT_X1CNT_M);

    //
    // Enable DCC0 clock
    //
    SysCtl_enablePeripheral(SYSCTL_PERIPH_CLK_DCC0);

    //
    // Insert atleast 5 cycles delay after enabling the peripheral clock
    //
    asm(" RPT #5 || NOP");

    //
    // Configures XTAL as CLKSRC0 and INTOSC2 as CLKSRC1
    // Fclk0 = XTAL frequency (input parameter)
    // Fclk1 = INTOSC2 frequency = 10MHz
    //
    // Configuring DCC error tolerance of +/-1%
    // INTOSC2 can have a variance in frequency of +/-10%
    //
    // Assuming PLL is not already configured, SysClk freq = 10MHz
    //
    // Note : Update the tolerance and INTOSC2 frequency variance as necessary.
    //
    return (DCC_verifyClockFrequency(DCC0_BASE,
                                     DCC_COUNT1SRC_INTOSC2, 10.0F,
                                     DCC_COUNT0SRC_XTAL, freq,
                                     1.0F, 10.0F, 10.0F));

}

//*****************************************************************************
//
// Error handling function to be called when an ASSERT is violated
//
//*****************************************************************************
void __error__(const char *filename, uint32_t line)
{
    //
    // An ASSERT condition was evaluated as false. You can use the filename and
    // line parameters to determine what went wrong.
    //
    ESTOP0;
}
