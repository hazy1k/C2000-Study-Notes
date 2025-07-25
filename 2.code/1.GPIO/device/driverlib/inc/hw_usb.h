//###########################################################################
//
// FILE:    hw_usb.h
//
// TITLE:   Definitions for the USB registers.
//
//###########################################################################
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
//###########################################################################

#ifndef HW_USB_H
#define HW_USB_H

//*****************************************************************************
//
// The following are defines for the Univeral Serial Bus register offsets.
//
//*****************************************************************************
#define USB_O_FADDR             0x00000000U  // USB Device Functional Address
#define USB_O_POWER             0x00000001U  // USB Power
#define USB_O_TXIS              0x00000002U  // USB Transmit Interrupt Status
#define USB_O_RXIS              0x00000004U  // USB Receive Interrupt Status
#define USB_O_TXIE              0x00000006U  // USB Transmit Interrupt Enable
#define USB_O_RXIE              0x00000008U  // USB Receive Interrupt Enable
#define USB_O_IS                0x0000000AU  // USB General Interrupt Status
#define USB_O_IE                0x0000000BU  // USB Interrupt Enable
#define USB_O_FRAME             0x0000000CU  // USB Frame Value
#define USB_O_EPIDX             0x0000000EU  // USB Endpoint Index
#define USB_O_TEST              0x0000000FU  // USB Test Mode
#define USB_O_FIFO0             0x00000020U  // USB FIFO Endpoint 0
#define USB_O_FIFO1             0x00000024U  // USB FIFO Endpoint 1
#define USB_O_FIFO2             0x00000028U  // USB FIFO Endpoint 2
#define USB_O_FIFO3             0x0000002CU  // USB FIFO Endpoint 3
#define USB_O_FIFO4             0x00000030U  // USB FIFO Endpoint 4
#define USB_O_FIFO5             0x00000034U  // USB FIFO Endpoint 5
#define USB_O_FIFO6             0x00000038U  // USB FIFO Endpoint 6
#define USB_O_FIFO7             0x0000003CU  // USB FIFO Endpoint 7
#define USB_O_FIFO8             0x00000040U  // USB FIFO Endpoint 8
#define USB_O_FIFO9             0x00000044U  // USB FIFO Endpoint 9
#define USB_O_FIFO10            0x00000048U  // USB FIFO Endpoint 10
#define USB_O_FIFO11            0x0000004CU  // USB FIFO Endpoint 11
#define USB_O_FIFO12            0x00000050U  // USB FIFO Endpoint 12
#define USB_O_FIFO13            0x00000054U  // USB FIFO Endpoint 13
#define USB_O_FIFO14            0x00000058U  // USB FIFO Endpoint 14
#define USB_O_FIFO15            0x0000005CU  // USB FIFO Endpoint 15
#define USB_O_DEVCTL            0x00000060U  // USB Device Control
#define USB_O_TXFIFOSZ          0x00000062U  // USB Transmit Dynamic FIFO Sizing
#define USB_O_RXFIFOSZ          0x00000063U  // USB Receive Dynamic FIFO Sizing
#define USB_O_TXFIFOADD         0x00000064U  // USB Transmit FIFO Start Address
#define USB_O_RXFIFOADD         0x00000066U  // USB Receive FIFO Start Address
#define USB_O_CONTIM            0x0000007AU  // USB Connect Timing
#define USB_O_VPLEN             0x0000007BU  // USB OTG VBUS Pulse Timing
#define USB_O_FSEOF             0x0000007DU  // USB Full-Speed Last Transaction
                                             // to End of Frame Timing
#define USB_O_LSEOF             0x0000007EU  // USB Low-Speed Last Transaction
                                             // to End of Frame Timing
#define USB_O_TXFUNCADDR0       0x00000080U  // USB Transmit Functional Address
                                             // Endpoint 0
#define USB_O_TXHUBADDR0        0x00000082U  // USB Transmit Hub Address
                                             // Endpoint 0
#define USB_O_TXHUBPORT0        0x00000083U  // USB Transmit Hub Port Endpoint 0
#define USB_O_TXFUNCADDR1       0x00000088U  // USB Transmit Functional Address
                                             // Endpoint 1
#define USB_O_TXHUBADDR1        0x0000008AU  // USB Transmit Hub Address
                                             // Endpoint 1
#define USB_O_TXHUBPORT1        0x0000008BU  // USB Transmit Hub Port Endpoint 1
#define USB_O_RXFUNCADDR1       0x0000008CU  // USB Receive Functional Address
                                             // Endpoint 1
#define USB_O_RXHUBADDR1        0x0000008EU  // USB Receive Hub Address Endpoint
                                             // 1
#define USB_O_RXHUBPORT1        0x0000008FU  // USB Receive Hub Port Endpoint 1
#define USB_O_TXFUNCADDR2       0x00000090U  // USB Transmit Functional Address
                                             // Endpoint 2
#define USB_O_TXHUBADDR2        0x00000092U  // USB Transmit Hub Address
                                             // Endpoint 2
#define USB_O_TXHUBPORT2        0x00000093U  // USB Transmit Hub Port Endpoint 2
#define USB_O_RXFUNCADDR2       0x00000094U  // USB Receive Functional Address
                                             // Endpoint 2
#define USB_O_RXHUBADDR2        0x00000096U  // USB Receive Hub Address Endpoint
                                             // 2
#define USB_O_RXHUBPORT2        0x00000097U  // USB Receive Hub Port Endpoint 2
#define USB_O_TXFUNCADDR3       0x00000098U  // USB Transmit Functional Address
                                             // Endpoint 3
#define USB_O_TXHUBADDR3        0x0000009AU  // USB Transmit Hub Address
                                             // Endpoint 3
#define USB_O_TXHUBPORT3        0x0000009BU  // USB Transmit Hub Port Endpoint 3
#define USB_O_RXFUNCADDR3       0x0000009CU  // USB Receive Functional Address
                                             // Endpoint 3
#define USB_O_RXHUBADDR3        0x0000009EU  // USB Receive Hub Address Endpoint
                                             // 3
#define USB_O_RXHUBPORT3        0x0000009FU  // USB Receive Hub Port Endpoint 3
#define USB_O_TXFUNCADDR4       0x000000A0U  // USB Transmit Functional Address
                                             // Endpoint 4
#define USB_O_TXHUBADDR4        0x000000A2U  // USB Transmit Hub Address
                                             // Endpoint 4
#define USB_O_TXHUBPORT4        0x000000A3U  // USB Transmit Hub Port Endpoint 4
#define USB_O_RXFUNCADDR4       0x000000A4U  // USB Receive Functional Address
                                             // Endpoint 4
#define USB_O_RXHUBADDR4        0x000000A6U  // USB Receive Hub Address Endpoint
                                             // 4
#define USB_O_RXHUBPORT4        0x000000A7U  // USB Receive Hub Port Endpoint 4
#define USB_O_TXFUNCADDR5       0x000000A8U  // USB Transmit Functional Address
                                             // Endpoint 5
#define USB_O_TXHUBADDR5        0x000000AAU  // USB Transmit Hub Address
                                             // Endpoint 5
#define USB_O_TXHUBPORT5        0x000000ABU  // USB Transmit Hub Port Endpoint 5
#define USB_O_RXFUNCADDR5       0x000000ACU  // USB Receive Functional Address
                                             // Endpoint 5
#define USB_O_RXHUBADDR5        0x000000AEU  // USB Receive Hub Address Endpoint
                                             // 5
#define USB_O_RXHUBPORT5        0x000000AFU  // USB Receive Hub Port Endpoint 5
#define USB_O_TXFUNCADDR6       0x000000B0U  // USB Transmit Functional Address
                                             // Endpoint 6
#define USB_O_TXHUBADDR6        0x000000B2U  // USB Transmit Hub Address
                                             // Endpoint 6
#define USB_O_TXHUBPORT6        0x000000B3U  // USB Transmit Hub Port Endpoint 6
#define USB_O_RXFUNCADDR6       0x000000B4U  // USB Receive Functional Address
                                             // Endpoint 6
#define USB_O_RXHUBADDR6        0x000000B6U  // USB Receive Hub Address Endpoint
                                             // 6
#define USB_O_RXHUBPORT6        0x000000B7U  // USB Receive Hub Port Endpoint 6
#define USB_O_TXFUNCADDR7       0x000000B8U  // USB Transmit Functional Address
                                             // Endpoint 7
#define USB_O_TXHUBADDR7        0x000000BAU  // USB Transmit Hub Address
                                             // Endpoint 7
#define USB_O_TXHUBPORT7        0x000000BBU  // USB Transmit Hub Port Endpoint 7
#define USB_O_RXFUNCADDR7       0x000000BCU  // USB Receive Functional Address
                                             // Endpoint 7
#define USB_O_RXHUBADDR7        0x000000BEU  // USB Receive Hub Address Endpoint
                                             // 7
#define USB_O_RXHUBPORT7        0x000000BFU  // USB Receive Hub Port Endpoint 7
#define USB_O_TXFUNCADDR8       0x000000C0U  // USB Transmit Functional Address
                                             // Endpoint 8
#define USB_O_TXHUBADDR8        0x000000C2U  // USB Transmit Hub Address
                                             // Endpoint 8
#define USB_O_TXHUBPORT8        0x000000C3U  // USB Transmit Hub Port Endpoint 8
#define USB_O_RXFUNCADDR8       0x000000C4U  // USB Receive Functional Address
                                             // Endpoint 8
#define USB_O_RXHUBADDR8        0x000000C6U  // USB Receive Hub Address Endpoint
                                             // 8
#define USB_O_RXHUBPORT8        0x000000C7U  // USB Receive Hub Port Endpoint 8
#define USB_O_TXFUNCADDR9       0x000000C8U  // USB Transmit Functional Address
                                             // Endpoint 9
#define USB_O_TXHUBADDR9        0x000000CAU  // USB Transmit Hub Address
                                             // Endpoint 9
#define USB_O_TXHUBPORT9        0x000000CBU  // USB Transmit Hub Port Endpoint 9
#define USB_O_RXFUNCADDR9       0x000000CCU  // USB Receive Functional Address
                                             // Endpoint 9
#define USB_O_RXHUBADDR9        0x000000CEU  // USB Receive Hub Address Endpoint
                                             // 9
#define USB_O_RXHUBPORT9        0x000000CFU  // USB Receive Hub Port Endpoint 9
#define USB_O_TXFUNCADDR10      0x000000D0U  // USB Transmit Functional Address
                                             // Endpoint 10
#define USB_O_TXHUBADDR10       0x000000D2U  // USB Transmit Hub Address
                                             // Endpoint 10
#define USB_O_TXHUBPORT10       0x000000D3U  // USB Transmit Hub Port Endpoint
                                             // 10
#define USB_O_RXFUNCADDR10      0x000000D4U  // USB Receive Functional Address
                                             // Endpoint 10
#define USB_O_RXHUBADDR10       0x000000D6U  // USB Receive Hub Address Endpoint
                                             // 10
#define USB_O_RXHUBPORT10       0x000000D7U  // USB Receive Hub Port Endpoint 10
#define USB_O_TXFUNCADDR11      0x000000D8U  // USB Transmit Functional Address
                                             // Endpoint 11
#define USB_O_TXHUBADDR11       0x000000DAU  // USB Transmit Hub Address
                                             // Endpoint 11
#define USB_O_TXHUBPORT11       0x000000DBU  // USB Transmit Hub Port Endpoint
                                             // 11
#define USB_O_RXFUNCADDR11      0x000000DCU  // USB Receive Functional Address
                                             // Endpoint 11
#define USB_O_RXHUBADDR11       0x000000DEU  // USB Receive Hub Address Endpoint
                                             // 11
#define USB_O_RXHUBPORT11       0x000000DFU  // USB Receive Hub Port Endpoint 11
#define USB_O_TXFUNCADDR12      0x000000E0U  // USB Transmit Functional Address
                                             // Endpoint 12
#define USB_O_TXHUBADDR12       0x000000E2U  // USB Transmit Hub Address
                                             // Endpoint 12
#define USB_O_TXHUBPORT12       0x000000E3U  // USB Transmit Hub Port Endpoint
                                             // 12
#define USB_O_RXFUNCADDR12      0x000000E4U  // USB Receive Functional Address
                                             // Endpoint 12
#define USB_O_RXHUBADDR12       0x000000E6U  // USB Receive Hub Address Endpoint
                                             // 12
#define USB_O_RXHUBPORT12       0x000000E7U  // USB Receive Hub Port Endpoint 12
#define USB_O_TXFUNCADDR13      0x000000E8U  // USB Transmit Functional Address
                                             // Endpoint 13
#define USB_O_TXHUBADDR13       0x000000EAU  // USB Transmit Hub Address
                                             // Endpoint 13
#define USB_O_TXHUBPORT13       0x000000EBU  // USB Transmit Hub Port Endpoint
                                             // 13
#define USB_O_RXFUNCADDR13      0x000000ECU  // USB Receive Functional Address
                                             // Endpoint 13
#define USB_O_RXHUBADDR13       0x000000EEU  // USB Receive Hub Address Endpoint
                                             // 13
#define USB_O_RXHUBPORT13       0x000000EFU  // USB Receive Hub Port Endpoint 13
#define USB_O_TXFUNCADDR14      0x000000F0U  // USB Transmit Functional Address
                                             // Endpoint 14
#define USB_O_TXHUBADDR14       0x000000F2U  // USB Transmit Hub Address
                                             // Endpoint 14
#define USB_O_TXHUBPORT14       0x000000F3U  // USB Transmit Hub Port Endpoint
                                             // 14
#define USB_O_RXFUNCADDR14      0x000000F4U  // USB Receive Functional Address
                                             // Endpoint 14
#define USB_O_RXHUBADDR14       0x000000F6U  // USB Receive Hub Address Endpoint
                                             // 14
#define USB_O_RXHUBPORT14       0x000000F7U  // USB Receive Hub Port Endpoint 14
#define USB_O_TXFUNCADDR15      0x000000F8U  // USB Transmit Functional Address
                                             // Endpoint 15
#define USB_O_TXHUBADDR15       0x000000FAU  // USB Transmit Hub Address
                                             // Endpoint 15
#define USB_O_TXHUBPORT15       0x000000FBU  // USB Transmit Hub Port Endpoint
                                             // 15
#define USB_O_RXFUNCADDR15      0x000000FCU  // USB Receive Functional Address
                                             // Endpoint 15
#define USB_O_RXHUBADDR15       0x000000FEU  // USB Receive Hub Address Endpoint
                                             // 15
#define USB_O_RXHUBPORT15       0x000000FFU  // USB Receive Hub Port Endpoint 15
#define USB_O_CSRL0             0x00000102U  // USB Control and Status Endpoint
                                             // 0 Low
#define USB_O_CSRH0             0x00000103U  // USB Control and Status Endpoint
                                             // 0 High
#define USB_O_COUNT0            0x00000108U  // USB Receive Byte Count Endpoint
                                             // 0
#define USB_O_TYPE0             0x0000010AU  // USB Type Endpoint 0
#define USB_O_NAKLMT            0x0000010BU  // USB NAK Limit
#define USB_O_TXMAXP1           0x00000110U  // USB Maximum Transmit Data
                                             // Endpoint 1
#define USB_O_TXCSRL1           0x00000112U  // USB Transmit Control and Status
                                             // Endpoint 1 Low
#define USB_O_TXCSRH1           0x00000113U  // USB Transmit Control and Status
                                             // Endpoint 1 High
#define USB_O_RXMAXP1           0x00000114U  // USB Maximum Receive Data
                                             // Endpoint 1
#define USB_O_RXCSRL1           0x00000116U  // USB Receive Control and Status
                                             // Endpoint 1 Low
#define USB_O_RXCSRH1           0x00000117U  // USB Receive Control and Status
                                             // Endpoint 1 High
#define USB_O_RXCOUNT1          0x00000118U  // USB Receive Byte Count Endpoint
                                             // 1
#define USB_O_TXTYPE1           0x0000011AU  // USB Host Transmit Configure Type
                                             // Endpoint 1
#define USB_O_TXINTERVAL1       0x0000011BU  // USB Host Transmit Interval
                                             // Endpoint 1
#define USB_O_RXTYPE1           0x0000011CU  // USB Host Configure Receive Type
                                             // Endpoint 1
#define USB_O_RXINTERVAL1       0x0000011DU  // USB Host Receive Polling
                                             // Interval Endpoint 1
#define USB_O_TXMAXP2           0x00000120U  // USB Maximum Transmit Data
                                             // Endpoint 2
#define USB_O_TXCSRL2           0x00000122U  // USB Transmit Control and Status
                                             // Endpoint 2 Low
#define USB_O_TXCSRH2           0x00000123U  // USB Transmit Control and Status
                                             // Endpoint 2 High
#define USB_O_RXMAXP2           0x00000124U  // USB Maximum Receive Data
                                             // Endpoint 2
#define USB_O_RXCSRL2           0x00000126U  // USB Receive Control and Status
                                             // Endpoint 2 Low
#define USB_O_RXCSRH2           0x00000127U  // USB Receive Control and Status
                                             // Endpoint 2 High
#define USB_O_RXCOUNT2          0x00000128U  // USB Receive Byte Count Endpoint
                                             // 2
#define USB_O_TXTYPE2           0x0000012AU  // USB Host Transmit Configure Type
                                             // Endpoint 2
#define USB_O_TXINTERVAL2       0x0000012BU  // USB Host Transmit Interval
                                             // Endpoint 2
#define USB_O_RXTYPE2           0x0000012CU  // USB Host Configure Receive Type
                                             // Endpoint 2
#define USB_O_RXINTERVAL2       0x0000012DU  // USB Host Receive Polling
                                             // Interval Endpoint 2
#define USB_O_TXMAXP3           0x00000130U  // USB Maximum Transmit Data
                                             // Endpoint 3
#define USB_O_TXCSRL3           0x00000132U  // USB Transmit Control and Status
                                             // Endpoint 3 Low
#define USB_O_TXCSRH3           0x00000133U  // USB Transmit Control and Status
                                             // Endpoint 3 High
#define USB_O_RXMAXP3           0x00000134U  // USB Maximum Receive Data
                                             // Endpoint 3
#define USB_O_RXCSRL3           0x00000136U  // USB Receive Control and Status
                                             // Endpoint 3 Low
#define USB_O_RXCSRH3           0x00000137U  // USB Receive Control and Status
                                             // Endpoint 3 High
#define USB_O_RXCOUNT3          0x00000138U  // USB Receive Byte Count Endpoint
                                             // 3
#define USB_O_TXTYPE3           0x0000013AU  // USB Host Transmit Configure Type
                                             // Endpoint 3
#define USB_O_TXINTERVAL3       0x0000013BU  // USB Host Transmit Interval
                                             // Endpoint 3
#define USB_O_RXTYPE3           0x0000013CU  // USB Host Configure Receive Type
                                             // Endpoint 3
#define USB_O_RXINTERVAL3       0x0000013DU  // USB Host Receive Polling
                                             // Interval Endpoint 3
#define USB_O_TXMAXP4           0x00000140U  // USB Maximum Transmit Data
                                             // Endpoint 4
#define USB_O_TXCSRL4           0x00000142U  // USB Transmit Control and Status
                                             // Endpoint 4 Low
#define USB_O_TXCSRH4           0x00000143U  // USB Transmit Control and Status
                                             // Endpoint 4 High
#define USB_O_RXMAXP4           0x00000144U  // USB Maximum Receive Data
                                             // Endpoint 4
#define USB_O_RXCSRL4           0x00000146U  // USB Receive Control and Status
                                             // Endpoint 4 Low
#define USB_O_RXCSRH4           0x00000147U  // USB Receive Control and Status
                                             // Endpoint 4 High
#define USB_O_RXCOUNT4          0x00000148U  // USB Receive Byte Count Endpoint
                                             // 4
#define USB_O_TXTYPE4           0x0000014AU  // USB Host Transmit Configure Type
                                             // Endpoint 4
#define USB_O_TXINTERVAL4       0x0000014BU  // USB Host Transmit Interval
                                             // Endpoint 4
#define USB_O_RXTYPE4           0x0000014CU  // USB Host Configure Receive Type
                                             // Endpoint 4
#define USB_O_RXINTERVAL4       0x0000014DU  // USB Host Receive Polling
                                             // Interval Endpoint 4
#define USB_O_TXMAXP5           0x00000150U  // USB Maximum Transmit Data
                                             // Endpoint 5
#define USB_O_TXCSRL5           0x00000152U  // USB Transmit Control and Status
                                             // Endpoint 5 Low
#define USB_O_TXCSRH5           0x00000153U  // USB Transmit Control and Status
                                             // Endpoint 5 High
#define USB_O_RXMAXP5           0x00000154U  // USB Maximum Receive Data
                                             // Endpoint 5
#define USB_O_RXCSRL5           0x00000156U  // USB Receive Control and Status
                                             // Endpoint 5 Low
#define USB_O_RXCSRH5           0x00000157U  // USB Receive Control and Status
                                             // Endpoint 5 High
#define USB_O_RXCOUNT5          0x00000158U  // USB Receive Byte Count Endpoint
                                             // 5
#define USB_O_TXTYPE5           0x0000015AU  // USB Host Transmit Configure Type
                                             // Endpoint 5
#define USB_O_TXINTERVAL5       0x0000015BU  // USB Host Transmit Interval
                                             // Endpoint 5
#define USB_O_RXTYPE5           0x0000015CU  // USB Host Configure Receive Type
                                             // Endpoint 5
#define USB_O_RXINTERVAL5       0x0000015DU  // USB Host Receive Polling
                                             // Interval Endpoint 5
#define USB_O_TXMAXP6           0x00000160U  // USB Maximum Transmit Data
                                             // Endpoint 6
#define USB_O_TXCSRL6           0x00000162U  // USB Transmit Control and Status
                                             // Endpoint 6 Low
#define USB_O_TXCSRH6           0x00000163U  // USB Transmit Control and Status
                                             // Endpoint 6 High
#define USB_O_RXMAXP6           0x00000164U  // USB Maximum Receive Data
                                             // Endpoint 6
#define USB_O_RXCSRL6           0x00000166U  // USB Receive Control and Status
                                             // Endpoint 6 Low
#define USB_O_RXCSRH6           0x00000167U  // USB Receive Control and Status
                                             // Endpoint 6 High
#define USB_O_RXCOUNT6          0x00000168U  // USB Receive Byte Count Endpoint
                                             // 6
#define USB_O_TXTYPE6           0x0000016AU  // USB Host Transmit Configure Type
                                             // Endpoint 6
#define USB_O_TXINTERVAL6       0x0000016BU  // USB Host Transmit Interval
                                             // Endpoint 6
#define USB_O_RXTYPE6           0x0000016CU  // USB Host Configure Receive Type
                                             // Endpoint 6
#define USB_O_RXINTERVAL6       0x0000016DU  // USB Host Receive Polling
                                             // Interval Endpoint 6
#define USB_O_TXMAXP7           0x00000170U  // USB Maximum Transmit Data
                                             // Endpoint 7
#define USB_O_TXCSRL7           0x00000172U  // USB Transmit Control and Status
                                             // Endpoint 7 Low
#define USB_O_TXCSRH7           0x00000173U  // USB Transmit Control and Status
                                             // Endpoint 7 High
#define USB_O_RXMAXP7           0x00000174U  // USB Maximum Receive Data
                                             // Endpoint 7
#define USB_O_RXCSRL7           0x00000176U  // USB Receive Control and Status
                                             // Endpoint 7 Low
#define USB_O_RXCSRH7           0x00000177U  // USB Receive Control and Status
                                             // Endpoint 7 High
#define USB_O_RXCOUNT7          0x00000178U  // USB Receive Byte Count Endpoint
                                             // 7
#define USB_O_TXTYPE7           0x0000017AU  // USB Host Transmit Configure Type
                                             // Endpoint 7
#define USB_O_TXINTERVAL7       0x0000017BU  // USB Host Transmit Interval
                                             // Endpoint 7
#define USB_O_RXTYPE7           0x0000017CU  // USB Host Configure Receive Type
                                             // Endpoint 7
#define USB_O_RXINTERVAL7       0x0000017DU  // USB Host Receive Polling
                                             // Interval Endpoint 7
#define USB_O_TXMAXP8           0x00000180U  // USB Maximum Transmit Data
                                             // Endpoint 8
#define USB_O_TXCSRL8           0x00000182U  // USB Transmit Control and Status
                                             // Endpoint 8 Low
#define USB_O_TXCSRH8           0x00000183U  // USB Transmit Control and Status
                                             // Endpoint 8 High
#define USB_O_RXMAXP8           0x00000184U  // USB Maximum Receive Data
                                             // Endpoint 8
#define USB_O_RXCSRL8           0x00000186U  // USB Receive Control and Status
                                             // Endpoint 8 Low
#define USB_O_RXCSRH8           0x00000187U  // USB Receive Control and Status
                                             // Endpoint 8 High
#define USB_O_RXCOUNT8          0x00000188U  // USB Receive Byte Count Endpoint
                                             // 8
#define USB_O_TXTYPE8           0x0000018AU  // USB Host Transmit Configure Type
                                             // Endpoint 8
#define USB_O_TXINTERVAL8       0x0000018BU  // USB Host Transmit Interval
                                             // Endpoint 8
#define USB_O_RXTYPE8           0x0000018CU  // USB Host Configure Receive Type
                                             // Endpoint 8
#define USB_O_RXINTERVAL8       0x0000018DU  // USB Host Receive Polling
                                             // Interval Endpoint 8
#define USB_O_TXMAXP9           0x00000190U  // USB Maximum Transmit Data
                                             // Endpoint 9
#define USB_O_TXCSRL9           0x00000192U  // USB Transmit Control and Status
                                             // Endpoint 9 Low
#define USB_O_TXCSRH9           0x00000193U  // USB Transmit Control and Status
                                             // Endpoint 9 High
#define USB_O_RXMAXP9           0x00000194U  // USB Maximum Receive Data
                                             // Endpoint 9
#define USB_O_RXCSRL9           0x00000196U  // USB Receive Control and Status
                                             // Endpoint 9 Low
#define USB_O_RXCSRH9           0x00000197U  // USB Receive Control and Status
                                             // Endpoint 9 High
#define USB_O_RXCOUNT9          0x00000198U  // USB Receive Byte Count Endpoint
                                             // 9
#define USB_O_TXTYPE9           0x0000019AU  // USB Host Transmit Configure Type
                                             // Endpoint 9
#define USB_O_TXINTERVAL9       0x0000019BU  // USB Host Transmit Interval
                                             // Endpoint 9
#define USB_O_RXTYPE9           0x0000019CU  // USB Host Configure Receive Type
                                             // Endpoint 9
#define USB_O_RXINTERVAL9       0x0000019DU  // USB Host Receive Polling
                                             // Interval Endpoint 9
#define USB_O_TXMAXP10          0x000001A0U  // USB Maximum Transmit Data
                                             // Endpoint 10
#define USB_O_TXCSRL10          0x000001A2U  // USB Transmit Control and Status
                                             // Endpoint 10 Low
#define USB_O_TXCSRH10          0x000001A3U  // USB Transmit Control and Status
                                             // Endpoint 10 High
#define USB_O_RXMAXP10          0x000001A4U  // USB Maximum Receive Data
                                             // Endpoint 10
#define USB_O_RXCSRL10          0x000001A6U  // USB Receive Control and Status
                                             // Endpoint 10 Low
#define USB_O_RXCSRH10          0x000001A7U  // USB Receive Control and Status
                                             // Endpoint 10 High
#define USB_O_RXCOUNT10         0x000001A8U  // USB Receive Byte Count Endpoint
                                             // 10
#define USB_O_TXTYPE10          0x000001AAU  // USB Host Transmit Configure Type
                                             // Endpoint 10
#define USB_O_TXINTERVAL10      0x000001ABU  // USB Host Transmit Interval
                                             // Endpoint 10
#define USB_O_RXTYPE10          0x000001ACU  // USB Host Configure Receive Type
                                             // Endpoint 10
#define USB_O_RXINTERVAL10      0x000001ADU  // USB Host Receive Polling
                                             // Interval Endpoint 10
#define USB_O_TXMAXP11          0x000001B0U  // USB Maximum Transmit Data
                                             // Endpoint 11
#define USB_O_TXCSRL11          0x000001B2U  // USB Transmit Control and Status
                                             // Endpoint 11 Low
#define USB_O_TXCSRH11          0x000001B3U  // USB Transmit Control and Status
                                             // Endpoint 11 High
#define USB_O_RXMAXP11          0x000001B4U  // USB Maximum Receive Data
                                             // Endpoint 11
#define USB_O_RXCSRL11          0x000001B6U  // USB Receive Control and Status
                                             // Endpoint 11 Low
#define USB_O_RXCSRH11          0x000001B7U  // USB Receive Control and Status
                                             // Endpoint 11 High
#define USB_O_RXCOUNT11         0x000001B8U  // USB Receive Byte Count Endpoint
                                             // 11
#define USB_O_TXTYPE11          0x000001BAU  // USB Host Transmit Configure Type
                                             // Endpoint 11
#define USB_O_TXINTERVAL11      0x000001BBU  // USB Host Transmit Interval
                                             // Endpoint 11
#define USB_O_RXTYPE11          0x000001BCU  // USB Host Configure Receive Type
                                             // Endpoint 11
#define USB_O_RXINTERVAL11      0x000001BDU  // USB Host Receive Polling
                                             // Interval Endpoint 11
#define USB_O_TXMAXP12          0x000001C0U  // USB Maximum Transmit Data
                                             // Endpoint 12
#define USB_O_TXCSRL12          0x000001C2U  // USB Transmit Control and Status
                                             // Endpoint 12 Low
#define USB_O_TXCSRH12          0x000001C3U  // USB Transmit Control and Status
                                             // Endpoint 12 High
#define USB_O_RXMAXP12          0x000001C4U  // USB Maximum Receive Data
                                             // Endpoint 12
#define USB_O_RXCSRL12          0x000001C6U  // USB Receive Control and Status
                                             // Endpoint 12 Low
#define USB_O_RXCSRH12          0x000001C7U  // USB Receive Control and Status
                                             // Endpoint 12 High
#define USB_O_RXCOUNT12         0x000001C8U  // USB Receive Byte Count Endpoint
                                             // 12
#define USB_O_TXTYPE12          0x000001CAU  // USB Host Transmit Configure Type
                                             // Endpoint 12
#define USB_O_TXINTERVAL12      0x000001CBU  // USB Host Transmit Interval
                                             // Endpoint 12
#define USB_O_RXTYPE12          0x000001CCU  // USB Host Configure Receive Type
                                             // Endpoint 12
#define USB_O_RXINTERVAL12      0x000001CDU  // USB Host Receive Polling
                                             // Interval Endpoint 12
#define USB_O_TXMAXP13          0x000001D0U  // USB Maximum Transmit Data
                                             // Endpoint 13
#define USB_O_TXCSRL13          0x000001D2U  // USB Transmit Control and Status
                                             // Endpoint 13 Low
#define USB_O_TXCSRH13          0x000001D3U  // USB Transmit Control and Status
                                             // Endpoint 13 High
#define USB_O_RXMAXP13          0x000001D4U  // USB Maximum Receive Data
                                             // Endpoint 13
#define USB_O_RXCSRL13          0x000001D6U  // USB Receive Control and Status
                                             // Endpoint 13 Low
#define USB_O_RXCSRH13          0x000001D7U  // USB Receive Control and Status
                                             // Endpoint 13 High
#define USB_O_RXCOUNT13         0x000001D8U  // USB Receive Byte Count Endpoint
                                             // 13
#define USB_O_TXTYPE13          0x000001DAU  // USB Host Transmit Configure Type
                                             // Endpoint 13
#define USB_O_TXINTERVAL13      0x000001DBU  // USB Host Transmit Interval
                                             // Endpoint 13
#define USB_O_RXTYPE13          0x000001DCU  // USB Host Configure Receive Type
                                             // Endpoint 13
#define USB_O_RXINTERVAL13      0x000001DDU  // USB Host Receive Polling
                                             // Interval Endpoint 13
#define USB_O_TXMAXP14          0x000001E0U  // USB Maximum Transmit Data
                                             // Endpoint 14
#define USB_O_TXCSRL14          0x000001E2U  // USB Transmit Control and Status
                                             // Endpoint 14 Low
#define USB_O_TXCSRH14          0x000001E3U  // USB Transmit Control and Status
                                             // Endpoint 14 High
#define USB_O_RXMAXP14          0x000001E4U  // USB Maximum Receive Data
                                             // Endpoint 14
#define USB_O_RXCSRL14          0x000001E6U  // USB Receive Control and Status
                                             // Endpoint 14 Low
#define USB_O_RXCSRH14          0x000001E7U  // USB Receive Control and Status
                                             // Endpoint 14 High
#define USB_O_RXCOUNT14         0x000001E8U  // USB Receive Byte Count Endpoint
                                             // 14
#define USB_O_TXTYPE14          0x000001EAU  // USB Host Transmit Configure Type
                                             // Endpoint 14
#define USB_O_TXINTERVAL14      0x000001EBU  // USB Host Transmit Interval
                                             // Endpoint 14
#define USB_O_RXTYPE14          0x000001ECU  // USB Host Configure Receive Type
                                             // Endpoint 14
#define USB_O_RXINTERVAL14      0x000001EDU  // USB Host Receive Polling
                                             // Interval Endpoint 14
#define USB_O_TXMAXP15          0x000001F0U  // USB Maximum Transmit Data
                                             // Endpoint 15
#define USB_O_TXCSRL15          0x000001F2U  // USB Transmit Control and Status
                                             // Endpoint 15 Low
#define USB_O_TXCSRH15          0x000001F3U  // USB Transmit Control and Status
                                             // Endpoint 15 High
#define USB_O_RXMAXP15          0x000001F4U  // USB Maximum Receive Data
                                             // Endpoint 15
#define USB_O_RXCSRL15          0x000001F6U  // USB Receive Control and Status
                                             // Endpoint 15 Low
#define USB_O_RXCSRH15          0x000001F7U  // USB Receive Control and Status
                                             // Endpoint 15 High
#define USB_O_RXCOUNT15         0x000001F8U  // USB Receive Byte Count Endpoint
                                             // 15
#define USB_O_TXTYPE15          0x000001FAU  // USB Host Transmit Configure Type
                                             // Endpoint 15
#define USB_O_TXINTERVAL15      0x000001FBU  // USB Host Transmit Interval
                                             // Endpoint 15
#define USB_O_RXTYPE15          0x000001FCU  // USB Host Configure Receive Type
                                             // Endpoint 15
#define USB_O_RXINTERVAL15      0x000001FDU  // USB Host Receive Polling
                                             // Interval Endpoint 15
#define USB_O_RQPKTCOUNT1       0x00000304U  // USB Request Packet Count in
                                             // Block Transfer Endpoint 1
#define USB_O_RQPKTCOUNT2       0x00000308U  // USB Request Packet Count in
                                             // Block Transfer Endpoint 2
#define USB_O_RQPKTCOUNT3       0x0000030CU  // USB Request Packet Count in
                                             // Block Transfer Endpoint 3
#define USB_O_RQPKTCOUNT4       0x00000310U  // USB Request Packet Count in
                                             // Block Transfer Endpoint 4
#define USB_O_RQPKTCOUNT5       0x00000314U  // USB Request Packet Count in
                                             // Block Transfer Endpoint 5
#define USB_O_RQPKTCOUNT6       0x00000318U  // USB Request Packet Count in
                                             // Block Transfer Endpoint 6
#define USB_O_RQPKTCOUNT7       0x0000031CU  // USB Request Packet Count in
                                             // Block Transfer Endpoint 7
#define USB_O_RQPKTCOUNT8       0x00000320U  // USB Request Packet Count in
                                             // Block Transfer Endpoint 8
#define USB_O_RQPKTCOUNT9       0x00000324U  // USB Request Packet Count in
                                             // Block Transfer Endpoint 9
#define USB_O_RQPKTCOUNT10      0x00000328U  // USB Request Packet Count in
                                             // Block Transfer Endpoint 10
#define USB_O_RQPKTCOUNT11      0x0000032CU  // USB Request Packet Count in
                                             // Block Transfer Endpoint 11
#define USB_O_RQPKTCOUNT12      0x00000330U  // USB Request Packet Count in
                                             // Block Transfer Endpoint 12
#define USB_O_RQPKTCOUNT13      0x00000334U  // USB Request Packet Count in
                                             // Block Transfer Endpoint 13
#define USB_O_RQPKTCOUNT14      0x00000338U  // USB Request Packet Count in
                                             // Block Transfer Endpoint 14
#define USB_O_RQPKTCOUNT15      0x0000033CU  // USB Request Packet Count in
                                             // Block Transfer Endpoint 15
#define USB_O_RXDPKTBUFDIS      0x00000340U  // USB Receive Double Packet Buffer
                                             // Disable
#define USB_O_TXDPKTBUFDIS      0x00000342U  // USB Transmit Double Packet
                                             // Buffer Disable
#define USB_O_EPC               0x00000400U  // USB External Power Control
#define USB_O_EPCRIS            0x00000404U  // USB External Power Control Raw
                                             // Interrupt Status
#define USB_O_EPCIM             0x00000408U  // USB External Power Control
                                             // Interrupt Mask
#define USB_O_EPCISC            0x0000040CU  // USB External Power Control
                                             // Interrupt Status and Clear
#define USB_O_DRRIS             0x00000410U  // USB Device RESUME Raw Interrupt
                                             // Status
#define USB_O_DRIM              0x00000414U  // USB Device RESUME Interrupt Mask
#define USB_O_DRISC             0x00000418U  // USB Device RESUME Interrupt
                                             // Status and Clear
#define USB_O_GPCS              0x0000041CU  // USB General-Purpose Control and
                                             // Status
#define USB_O_VDC               0x00000430U  // USB VBUS Droop Control
#define USB_O_VDCRIS            0x00000434U  // USB VBUS Droop Control Raw
                                             // Interrupt Status
#define USB_O_VDCIM             0x00000438U  // USB VBUS Droop Control Interrupt
                                             // Mask
#define USB_O_VDCISC            0x0000043CU  // USB VBUS Droop Control Interrupt
                                             // Status and Clear
#define USB_O_IDVRIS            0x00000444U  // USB ID Valid Detect Raw
                                             // Interrupt Status
#define USB_O_IDVIM             0x00000448U  // USB ID Valid Detect Interrupt
                                             // Mask
#define USB_O_IDVISC            0x0000044CU  // USB ID Valid Detect Interrupt
                                             // Status and Clear
#define USB_O_DMASEL            0x00000450U  // USB DMA Select
#define USB_O_GLBINTEN          0x00000480U   // USB Global Interrupt Enable
                                             // Register
#define USB_O_GLBINTFLG         0x00000484U  // USB Global Interrupt Flag
                                             // Register
#define USB_O_GLBINTFLGCL       0x00000488U  // USB Global Interrupt Flag
                                             // Clear Register
#define USB_O_PP                0x00000FC0U  // USB Peripheral Properties

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_FADDR register.
//
//*****************************************************************************
#define USB_FADDR_M             0x0000007FU  // Function Address
#define USB_FADDR_S             0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_POWER register.
//
//*****************************************************************************
#define USB_POWER_ISOUP         0x00000080U  // Isochronous Update
#define USB_POWER_SOFTCONN      0x00000040U  // Soft Connect/Disconnect
#define USB_POWER_RESET         0x00000008U  // RESET Signaling
#define USB_POWER_RESUME        0x00000004U  // RESUME Signaling
#define USB_POWER_SUSPEND       0x00000002U  // SUSPEND Mode
#define USB_POWER_PWRDNPHY      0x00000001U  // Power Down PHY

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXIS register.
//
//*****************************************************************************
#define USB_TXIS_EP15           0x00008000U  // TX Endpoint 15 Interrupt
#define USB_TXIS_EP14           0x00004000U  // TX Endpoint 14 Interrupt
#define USB_TXIS_EP13           0x00002000U  // TX Endpoint 13 Interrupt
#define USB_TXIS_EP12           0x00001000U  // TX Endpoint 12 Interrupt
#define USB_TXIS_EP11           0x00000800U  // TX Endpoint 11 Interrupt
#define USB_TXIS_EP10           0x00000400U  // TX Endpoint 10 Interrupt
#define USB_TXIS_EP9            0x00000200U  // TX Endpoint 9 Interrupt
#define USB_TXIS_EP8            0x00000100U  // TX Endpoint 8 Interrupt
#define USB_TXIS_EP7            0x00000080U  // TX Endpoint 7 Interrupt
#define USB_TXIS_EP6            0x00000040U  // TX Endpoint 6 Interrupt
#define USB_TXIS_EP5            0x00000020U  // TX Endpoint 5 Interrupt
#define USB_TXIS_EP4            0x00000010U  // TX Endpoint 4 Interrupt
#define USB_TXIS_EP3            0x00000008U  // TX Endpoint 3 Interrupt
#define USB_TXIS_EP2            0x00000004U  // TX Endpoint 2 Interrupt
#define USB_TXIS_EP1            0x00000002U  // TX Endpoint 1 Interrupt
#define USB_TXIS_EP0            0x00000001U  // TX and RX Endpoint 0 Interrupt

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXIS register.
//
//*****************************************************************************
#define USB_RXIS_EP15           0x00008000U  // RX Endpoint 15 Interrupt
#define USB_RXIS_EP14           0x00004000U  // RX Endpoint 14 Interrupt
#define USB_RXIS_EP13           0x00002000U  // RX Endpoint 13 Interrupt
#define USB_RXIS_EP12           0x00001000U  // RX Endpoint 12 Interrupt
#define USB_RXIS_EP11           0x00000800U  // RX Endpoint 11 Interrupt
#define USB_RXIS_EP10           0x00000400U  // RX Endpoint 10 Interrupt
#define USB_RXIS_EP9            0x00000200U  // RX Endpoint 9 Interrupt
#define USB_RXIS_EP8            0x00000100U  // RX Endpoint 8 Interrupt
#define USB_RXIS_EP7            0x00000080U  // RX Endpoint 7 Interrupt
#define USB_RXIS_EP6            0x00000040U  // RX Endpoint 6 Interrupt
#define USB_RXIS_EP5            0x00000020U  // RX Endpoint 5 Interrupt
#define USB_RXIS_EP4            0x00000010U  // RX Endpoint 4 Interrupt
#define USB_RXIS_EP3            0x00000008U  // RX Endpoint 3 Interrupt
#define USB_RXIS_EP2            0x00000004U  // RX Endpoint 2 Interrupt
#define USB_RXIS_EP1            0x00000002U  // RX Endpoint 1 Interrupt

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXIE register.
//
//*****************************************************************************
#define USB_TXIE_EP15           0x00008000U  // TX Endpoint 15 Interrupt Enable
#define USB_TXIE_EP14           0x00004000U  // TX Endpoint 14 Interrupt Enable
#define USB_TXIE_EP13           0x00002000U  // TX Endpoint 13 Interrupt Enable
#define USB_TXIE_EP12           0x00001000U  // TX Endpoint 12 Interrupt Enable
#define USB_TXIE_EP11           0x00000800U  // TX Endpoint 11 Interrupt Enable
#define USB_TXIE_EP10           0x00000400U  // TX Endpoint 10 Interrupt Enable
#define USB_TXIE_EP9            0x00000200U  // TX Endpoint 9 Interrupt Enable
#define USB_TXIE_EP8            0x00000100U  // TX Endpoint 8 Interrupt Enable
#define USB_TXIE_EP7            0x00000080U  // TX Endpoint 7 Interrupt Enable
#define USB_TXIE_EP6            0x00000040U  // TX Endpoint 6 Interrupt Enable
#define USB_TXIE_EP5            0x00000020U  // TX Endpoint 5 Interrupt Enable
#define USB_TXIE_EP4            0x00000010U  // TX Endpoint 4 Interrupt Enable
#define USB_TXIE_EP3            0x00000008U  // TX Endpoint 3 Interrupt Enable
#define USB_TXIE_EP2            0x00000004U  // TX Endpoint 2 Interrupt Enable
#define USB_TXIE_EP1            0x00000002U  // TX Endpoint 1 Interrupt Enable
#define USB_TXIE_EP0            0x00000001U  // TX and RX Endpoint 0 Interrupt
                                            // Enable

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXIE register.
//
//*****************************************************************************
#define USB_RXIE_EP15           0x00008000U  // RX Endpoint 15 Interrupt Enable
#define USB_RXIE_EP14           0x00004000U  // RX Endpoint 14 Interrupt Enable
#define USB_RXIE_EP13           0x00002000U  // RX Endpoint 13 Interrupt Enable
#define USB_RXIE_EP12           0x00001000U  // RX Endpoint 12 Interrupt Enable
#define USB_RXIE_EP11           0x00000800U  // RX Endpoint 11 Interrupt Enable
#define USB_RXIE_EP10           0x00000400U  // RX Endpoint 10 Interrupt Enable
#define USB_RXIE_EP9            0x00000200U  // RX Endpoint 9 Interrupt Enable
#define USB_RXIE_EP8            0x00000100U  // RX Endpoint 8 Interrupt Enable
#define USB_RXIE_EP7            0x00000080U  // RX Endpoint 7 Interrupt Enable
#define USB_RXIE_EP6            0x00000040U  // RX Endpoint 6 Interrupt Enable
#define USB_RXIE_EP5            0x00000020U  // RX Endpoint 5 Interrupt Enable
#define USB_RXIE_EP4            0x00000010U  // RX Endpoint 4 Interrupt Enable
#define USB_RXIE_EP3            0x00000008U  // RX Endpoint 3 Interrupt Enable
#define USB_RXIE_EP2            0x00000004U  // RX Endpoint 2 Interrupt Enable
#define USB_RXIE_EP1            0x00000002U  // RX Endpoint 1 Interrupt Enable

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_IS register.
//
//*****************************************************************************
#define USB_IS_VBUSERR          0x00000080U  // VBUS Error
#define USB_IS_SESREQ           0x00000040U  // SESSION REQUEST
#define USB_IS_DISCON           0x00000020U  // Session Disconnect
#define USB_IS_CONN             0x00000010U  // Session Connect
#define USB_IS_SOF              0x00000008U  // Start of Frame
#define USB_IS_BABBLE           0x00000004U  // Babble Detected
#define USB_IS_RESET            0x00000004U  // RESET Signaling Detected
#define USB_IS_RESUME           0x00000002U  // RESUME Signaling Detected
#define USB_IS_SUSPEND          0x00000001U  // SUSPEND Signaling Detected

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_IE register.
//
//*****************************************************************************
#define USB_IE_VBUSERR          0x00000080U  // Enable VBUS Error Interrupt
#define USB_IE_SESREQ           0x00000040U  // Enable Session Request
#define USB_IE_DISCON           0x00000020U  // Enable Disconnect Interrupt
#define USB_IE_CONN             0x00000010U  // Enable Connect Interrupt
#define USB_IE_SOF              0x00000008U  // Enable Start-of-Frame Interrupt
#define USB_IE_BABBLE           0x00000004U  // Enable Babble Interrupt
#define USB_IE_RESET            0x00000004U  // Enable RESET Interrupt
#define USB_IE_RESUME           0x00000002U  // Enable RESUME Interrupt
#define USB_IE_SUSPND           0x00000001U  // Enable SUSPEND Interrupt

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_FRAME register.
//
//*****************************************************************************
#define USB_FRAME_M             0x000007FFU  // Frame Number
#define USB_FRAME_S             0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_EPIDX register.
//
//*****************************************************************************
#define USB_EPIDX_EPIDX_M       0x0000000FU  // Endpoint Index
#define USB_EPIDX_EPIDX_S       0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TEST register.
//
//*****************************************************************************
#define USB_TEST_FORCEH         0x00000080U  // Force Host Mode
#define USB_TEST_FIFOACC        0x00000040U  // FIFO Access
#define USB_TEST_FORCEFS        0x00000020U  // Force Full-Speed Mode

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_FIFO0 register.
//
//*****************************************************************************
#define USB_FIFO0_EPDATA_M      0xFFFFFFFFUL  // Endpoint Data
#define USB_FIFO0_EPDATA_S      0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_FIFO1 register.
//
//*****************************************************************************
#define USB_FIFO1_EPDATA_M      0xFFFFFFFFUL  // Endpoint Data
#define USB_FIFO1_EPDATA_S      0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_FIFO2 register.
//
//*****************************************************************************
#define USB_FIFO2_EPDATA_M      0xFFFFFFFFUL  // Endpoint Data
#define USB_FIFO2_EPDATA_S      0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_FIFO3 register.
//
//*****************************************************************************
#define USB_FIFO3_EPDATA_M      0xFFFFFFFFUL  // Endpoint Data
#define USB_FIFO3_EPDATA_S      0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_FIFO4 register.
//
//*****************************************************************************
#define USB_FIFO4_EPDATA_M      0xFFFFFFFFUL  // Endpoint Data
#define USB_FIFO4_EPDATA_S      0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_FIFO5 register.
//
//*****************************************************************************
#define USB_FIFO5_EPDATA_M      0xFFFFFFFFUL  // Endpoint Data
#define USB_FIFO5_EPDATA_S      0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_FIFO6 register.
//
//*****************************************************************************
#define USB_FIFO6_EPDATA_M      0xFFFFFFFFUL  // Endpoint Data
#define USB_FIFO6_EPDATA_S      0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_FIFO7 register.
//
//*****************************************************************************
#define USB_FIFO7_EPDATA_M      0xFFFFFFFFUL  // Endpoint Data
#define USB_FIFO7_EPDATA_S      0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_FIFO8 register.
//
//*****************************************************************************
#define USB_FIFO8_EPDATA_M      0xFFFFFFFFUL  // Endpoint Data
#define USB_FIFO8_EPDATA_S      0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_FIFO9 register.
//
//*****************************************************************************
#define USB_FIFO9_EPDATA_M      0xFFFFFFFFUL  // Endpoint Data
#define USB_FIFO9_EPDATA_S      0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_FIFO10 register.
//
//*****************************************************************************
#define USB_FIFO10_EPDATA_M     0xFFFFFFFFUL  // Endpoint Data
#define USB_FIFO10_EPDATA_S     0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_FIFO11 register.
//
//*****************************************************************************
#define USB_FIFO11_EPDATA_M     0xFFFFFFFFUL  // Endpoint Data
#define USB_FIFO11_EPDATA_S     0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_FIFO12 register.
//
//*****************************************************************************
#define USB_FIFO12_EPDATA_M     0xFFFFFFFFUL  // Endpoint Data
#define USB_FIFO12_EPDATA_S     0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_FIFO13 register.
//
//*****************************************************************************
#define USB_FIFO13_EPDATA_M     0xFFFFFFFFUL  // Endpoint Data
#define USB_FIFO13_EPDATA_S     0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_FIFO14 register.
//
//*****************************************************************************
#define USB_FIFO14_EPDATA_M     0xFFFFFFFFUL  // Endpoint Data
#define USB_FIFO14_EPDATA_S     0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_FIFO15 register.
//
//*****************************************************************************
#define USB_FIFO15_EPDATA_M     0xFFFFFFFFUL  // Endpoint Data
#define USB_FIFO15_EPDATA_S     0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_DEVCTL register.
//
//*****************************************************************************
#define USB_DEVCTL_DEV          0x00000080U  // Device Mode
#define USB_DEVCTL_FSDEV        0x00000040U  // Full-Speed Device Detected
#define USB_DEVCTL_LSDEV        0x00000020U  // Low-Speed Device Detected
#define USB_DEVCTL_VBUS_M       0x00000018U  // VBUS Level
#define USB_DEVCTL_VBUS_NONE    0x00000000U  // Below SessionEnd
#define USB_DEVCTL_VBUS_SEND    0x00000008U  // Above SessionEnd, below AValid
#define USB_DEVCTL_VBUS_AVALID  0x00000010U  // Above AValid, below VBUSValid
#define USB_DEVCTL_VBUS_VALID   0x00000018U  // Above VBUSValid
#define USB_DEVCTL_HOST         0x00000004U  // Host Mode
#define USB_DEVCTL_HOSTREQ      0x00000002U  // Host Request
#define USB_DEVCTL_SESSION      0x00000001U  // Session Start/End

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXFIFOSZ register.
//
//*****************************************************************************
#define USB_TXFIFOSZ_DPB        0x00000010U  // Double Packet Buffer Support
#define USB_TXFIFOSZ_SIZE_M     0x0000000FU  // Max Packet Size
#define USB_TXFIFOSZ_SIZE_8     0x00000000U  // 8
#define USB_TXFIFOSZ_SIZE_16    0x00000001U  // 16
#define USB_TXFIFOSZ_SIZE_32    0x00000002U  // 32
#define USB_TXFIFOSZ_SIZE_64    0x00000003U  // 64
#define USB_TXFIFOSZ_SIZE_128   0x00000004U  // 128
#define USB_TXFIFOSZ_SIZE_256   0x00000005U  // 256
#define USB_TXFIFOSZ_SIZE_512   0x00000006U  // 512
#define USB_TXFIFOSZ_SIZE_1024  0x00000007U  // 1024
#define USB_TXFIFOSZ_SIZE_2048  0x00000008U  // 2048

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXFIFOSZ register.
//
//*****************************************************************************
#define USB_RXFIFOSZ_DPB        0x00000010U  // Double Packet Buffer Support
#define USB_RXFIFOSZ_SIZE_M     0x0000000FU  // Max Packet Size
#define USB_RXFIFOSZ_SIZE_8     0x00000000U  // 8
#define USB_RXFIFOSZ_SIZE_16    0x00000001U  // 16
#define USB_RXFIFOSZ_SIZE_32    0x00000002U  // 32
#define USB_RXFIFOSZ_SIZE_64    0x00000003U  // 64
#define USB_RXFIFOSZ_SIZE_128   0x00000004U  // 128
#define USB_RXFIFOSZ_SIZE_256   0x00000005U  // 256
#define USB_RXFIFOSZ_SIZE_512   0x00000006U  // 512
#define USB_RXFIFOSZ_SIZE_1024  0x00000007U  // 1024
#define USB_RXFIFOSZ_SIZE_2048  0x00000008U  // 2048

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXFIFOADD
// register.
//
//*****************************************************************************
#define USB_TXFIFOADD_ADDR_M    0x000001FFU  // Transmit/Receive Start Address
#define USB_TXFIFOADD_ADDR_S    0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXFIFOADD
// register.
//
//*****************************************************************************
#define USB_RXFIFOADD_ADDR_M    0x000001FFU  // Transmit/Receive Start Address
#define USB_RXFIFOADD_ADDR_S    0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_CONTIM register.
//
//*****************************************************************************
#define USB_CONTIM_WTCON_M      0x000000F0U  // Connect Wait
#define USB_CONTIM_WTID_M       0x0000000FU  // Wait ID
#define USB_CONTIM_WTCON_S      4U
#define USB_CONTIM_WTID_S       0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_VPLEN register.
//
//*****************************************************************************
#define USB_VPLEN_VPLEN_M       0x000000FFU  // VBUS Pulse Length
#define USB_VPLEN_VPLEN_S       0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_FSEOF register.
//
//*****************************************************************************
#define USB_FSEOF_FSEOFG_M      0x000000FFU  // Full-Speed End-of-Frame Gap
#define USB_FSEOF_FSEOFG_S      0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_LSEOF register.
//
//*****************************************************************************
#define USB_LSEOF_LSEOFG_M      0x000000FFU  // Low-Speed End-of-Frame Gap
#define USB_LSEOF_LSEOFG_S      0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXFUNCADDR0
// register.
//
//*****************************************************************************
#define USB_TXFUNCADDR0_ADDR_M  0x0000007FU  // Device Address
#define USB_TXFUNCADDR0_ADDR_S  0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXHUBADDR0
// register.
//
//*****************************************************************************
#define USB_TXHUBADDR0_ADDR_M   0x0000007FU  // Hub Address
#define USB_TXHUBADDR0_ADDR_S   0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXHUBPORT0
// register.
//
//*****************************************************************************
#define USB_TXHUBPORT0_PORT_M   0x0000007FU  // Hub Port
#define USB_TXHUBPORT0_PORT_S   0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXFUNCADDR1
// register.
//
//*****************************************************************************
#define USB_TXFUNCADDR1_ADDR_M  0x0000007FU  // Device Address
#define USB_TXFUNCADDR1_ADDR_S  0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXHUBADDR1
// register.
//
//*****************************************************************************
#define USB_TXHUBADDR1_ADDR_M   0x0000007FU  // Hub Address
#define USB_TXHUBADDR1_ADDR_S   0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXHUBPORT1
// register.
//
//*****************************************************************************
#define USB_TXHUBPORT1_PORT_M   0x0000007FU  // Hub Port
#define USB_TXHUBPORT1_PORT_S   0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXFUNCADDR1
// register.
//
//*****************************************************************************
#define USB_RXFUNCADDR1_ADDR_M  0x0000007FU  // Device Address
#define USB_RXFUNCADDR1_ADDR_S  0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXHUBADDR1
// register.
//
//*****************************************************************************
#define USB_RXHUBADDR1_ADDR_M   0x0000007FU  // Hub Address
#define USB_RXHUBADDR1_ADDR_S   0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXHUBPORT1
// register.
//
//*****************************************************************************
#define USB_RXHUBPORT1_PORT_M   0x0000007FU  // Hub Port
#define USB_RXHUBPORT1_PORT_S   0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXFUNCADDR2
// register.
//
//*****************************************************************************
#define USB_TXFUNCADDR2_ADDR_M  0x0000007FU  // Device Address
#define USB_TXFUNCADDR2_ADDR_S  0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXHUBADDR2
// register.
//
//*****************************************************************************
#define USB_TXHUBADDR2_ADDR_M   0x0000007FU  // Hub Address
#define USB_TXHUBADDR2_ADDR_S   0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXHUBPORT2
// register.
//
//*****************************************************************************
#define USB_TXHUBPORT2_PORT_M   0x0000007FU  // Hub Port
#define USB_TXHUBPORT2_PORT_S   0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXFUNCADDR2
// register.
//
//*****************************************************************************
#define USB_RXFUNCADDR2_ADDR_M  0x0000007FU  // Device Address
#define USB_RXFUNCADDR2_ADDR_S  0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXHUBADDR2
// register.
//
//*****************************************************************************
#define USB_RXHUBADDR2_ADDR_M   0x0000007FU  // Hub Address
#define USB_RXHUBADDR2_ADDR_S   0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXHUBPORT2
// register.
//
//*****************************************************************************
#define USB_RXHUBPORT2_PORT_M   0x0000007FU  // Hub Port
#define USB_RXHUBPORT2_PORT_S   0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXFUNCADDR3
// register.
//
//*****************************************************************************
#define USB_TXFUNCADDR3_ADDR_M  0x0000007FU  // Device Address
#define USB_TXFUNCADDR3_ADDR_S  0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXHUBADDR3
// register.
//
//*****************************************************************************
#define USB_TXHUBADDR3_ADDR_M   0x0000007FU  // Hub Address
#define USB_TXHUBADDR3_ADDR_S   0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXHUBPORT3
// register.
//
//*****************************************************************************
#define USB_TXHUBPORT3_PORT_M   0x0000007FU  // Hub Port
#define USB_TXHUBPORT3_PORT_S   0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXFUNCADDR3
// register.
//
//*****************************************************************************
#define USB_RXFUNCADDR3_ADDR_M  0x0000007FU  // Device Address
#define USB_RXFUNCADDR3_ADDR_S  0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXHUBADDR3
// register.
//
//*****************************************************************************
#define USB_RXHUBADDR3_ADDR_M   0x0000007FU  // Hub Address
#define USB_RXHUBADDR3_ADDR_S   0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXHUBPORT3
// register.
//
//*****************************************************************************
#define USB_RXHUBPORT3_PORT_M   0x0000007FU  // Hub Port
#define USB_RXHUBPORT3_PORT_S   0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXFUNCADDR4
// register.
//
//*****************************************************************************
#define USB_TXFUNCADDR4_ADDR_M  0x0000007FU  // Device Address
#define USB_TXFUNCADDR4_ADDR_S  0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXHUBADDR4
// register.
//
//*****************************************************************************
#define USB_TXHUBADDR4_ADDR_M   0x0000007FU  // Hub Address
#define USB_TXHUBADDR4_ADDR_S   0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXHUBPORT4
// register.
//
//*****************************************************************************
#define USB_TXHUBPORT4_PORT_M   0x0000007FU  // Hub Port
#define USB_TXHUBPORT4_PORT_S   0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXFUNCADDR4
// register.
//
//*****************************************************************************
#define USB_RXFUNCADDR4_ADDR_M  0x0000007FU  // Device Address
#define USB_RXFUNCADDR4_ADDR_S  0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXHUBADDR4
// register.
//
//*****************************************************************************
#define USB_RXHUBADDR4_ADDR_M   0x0000007FU  // Hub Address
#define USB_RXHUBADDR4_ADDR_S   0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXHUBPORT4
// register.
//
//*****************************************************************************
#define USB_RXHUBPORT4_PORT_M   0x0000007FU  // Hub Port
#define USB_RXHUBPORT4_PORT_S   0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXFUNCADDR5
// register.
//
//*****************************************************************************
#define USB_TXFUNCADDR5_ADDR_M  0x0000007FU  // Device Address
#define USB_TXFUNCADDR5_ADDR_S  0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXHUBADDR5
// register.
//
//*****************************************************************************
#define USB_TXHUBADDR5_ADDR_M   0x0000007FU  // Hub Address
#define USB_TXHUBADDR5_ADDR_S   0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXHUBPORT5
// register.
//
//*****************************************************************************
#define USB_TXHUBPORT5_PORT_M   0x0000007FU  // Hub Port
#define USB_TXHUBPORT5_PORT_S   0U
//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXFUNCADDR5
// register.
//
//*****************************************************************************
#define USB_RXFUNCADDR5_ADDR_M  0x0000007FU  // Device Address
#define USB_RXFUNCADDR5_ADDR_S  0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXHUBADDR5
// register.
//
//*****************************************************************************
#define USB_RXHUBADDR5_ADDR_M   0x0000007FU  // Hub Address
#define USB_RXHUBADDR5_ADDR_S   0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXHUBPORT5
// register.
//
//*****************************************************************************
#define USB_RXHUBPORT5_PORT_M   0x0000007FU  // Hub Port
#define USB_RXHUBPORT5_PORT_S   0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXFUNCADDR6
// register.
//
//*****************************************************************************
#define USB_TXFUNCADDR6_ADDR_M  0x0000007FU  // Device Address
#define USB_TXFUNCADDR6_ADDR_S  0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXHUBADDR6
// register.
//
//*****************************************************************************
#define USB_TXHUBADDR6_ADDR_M   0x0000007FU  // Hub Address
#define USB_TXHUBADDR6_ADDR_S   0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXHUBPORT6
// register.
//
//*****************************************************************************
#define USB_TXHUBPORT6_PORT_M   0x0000007FU  // Hub Port
#define USB_TXHUBPORT6_PORT_S   0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXFUNCADDR6
// register.
//
//*****************************************************************************
#define USB_RXFUNCADDR6_ADDR_M  0x0000007FU  // Device Address
#define USB_RXFUNCADDR6_ADDR_S  0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXHUBADDR6
// register.
//
//*****************************************************************************
#define USB_RXHUBADDR6_ADDR_M   0x0000007FU  // Hub Address
#define USB_RXHUBADDR6_ADDR_S   0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXHUBPORT6
// register.
//
//*****************************************************************************
#define USB_RXHUBPORT6_PORT_M   0x0000007FU  // Hub Port
#define USB_RXHUBPORT6_PORT_S   0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXFUNCADDR7
// register.
//
//*****************************************************************************
#define USB_TXFUNCADDR7_ADDR_M  0x0000007FU  // Device Address
#define USB_TXFUNCADDR7_ADDR_S  0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXHUBADDR7
// register.
//
//*****************************************************************************
#define USB_TXHUBADDR7_ADDR_M   0x0000007FU  // Hub Address
#define USB_TXHUBADDR7_ADDR_S   0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXHUBPORT7
// register.
//
//*****************************************************************************
#define USB_TXHUBPORT7_PORT_M   0x0000007FU  // Hub Port
#define USB_TXHUBPORT7_PORT_S   0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXFUNCADDR7
// register.
//
//*****************************************************************************
#define USB_RXFUNCADDR7_ADDR_M  0x0000007FU  // Device Address
#define USB_RXFUNCADDR7_ADDR_S  0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXHUBADDR7
// register.
//
//*****************************************************************************
#define USB_RXHUBADDR7_ADDR_M   0x0000007FU  // Hub Address
#define USB_RXHUBADDR7_ADDR_S   0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXHUBPORT7
// register.
//
//*****************************************************************************
#define USB_RXHUBPORT7_PORT_M   0x0000007FU  // Hub Port
#define USB_RXHUBPORT7_PORT_S   0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXFUNCADDR8
// register.
//
//*****************************************************************************
#define USB_TXFUNCADDR8_ADDR_M  0x0000007FU  // Device Address
#define USB_TXFUNCADDR8_ADDR_S  0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXHUBADDR8
// register.
//
//*****************************************************************************
#define USB_TXHUBADDR8_ADDR_M   0x0000007FU  // Hub Address
#define USB_TXHUBADDR8_ADDR_S   0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXHUBPORT8
// register.
//
//*****************************************************************************
#define USB_TXHUBPORT8_PORT_M   0x0000007FU  // Hub Port
#define USB_TXHUBPORT8_PORT_S   0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXFUNCADDR8
// register.
//
//*****************************************************************************
#define USB_RXFUNCADDR8_ADDR_M  0x0000007FU  // Device Address
#define USB_RXFUNCADDR8_ADDR_S  0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXHUBADDR8
// register.
//
//*****************************************************************************
#define USB_RXHUBADDR8_ADDR_M   0x0000007FU  // Hub Address
#define USB_RXHUBADDR8_ADDR_S   0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXHUBPORT8
// register.
//
//*****************************************************************************
#define USB_RXHUBPORT8_PORT_M   0x0000007FU  // Hub Port
#define USB_RXHUBPORT8_PORT_S   0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXFUNCADDR9
// register.
//
//*****************************************************************************
#define USB_TXFUNCADDR9_ADDR_M  0x0000007FU  // Device Address
#define USB_TXFUNCADDR9_ADDR_S  0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXHUBADDR9
// register.
//
//*****************************************************************************
#define USB_TXHUBADDR9_ADDR_M   0x0000007FU  // Hub Address
#define USB_TXHUBADDR9_ADDR_S   0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXHUBPORT9
// register.
//
//*****************************************************************************
#define USB_TXHUBPORT9_PORT_M   0x0000007FU  // Hub Port
#define USB_TXHUBPORT9_PORT_S   0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXFUNCADDR9
// register.
//
//*****************************************************************************
#define USB_RXFUNCADDR9_ADDR_M  0x0000007FU  // Device Address
#define USB_RXFUNCADDR9_ADDR_S  0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXHUBADDR9
// register.
//
//*****************************************************************************
#define USB_RXHUBADDR9_ADDR_M   0x0000007FU  // Hub Address
#define USB_RXHUBADDR9_ADDR_S   0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXHUBPORT9
// register.
//
//*****************************************************************************
#define USB_RXHUBPORT9_PORT_M   0x0000007FU  // Hub Port
#define USB_RXHUBPORT9_PORT_S   0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXFUNCADDR10
// register.
//
//*****************************************************************************
#define USB_TXFUNCADDR10_ADDR_M 0x0000007FU  // Device Address
#define USB_TXFUNCADDR10_ADDR_S 0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXHUBADDR10
// register.
//
//*****************************************************************************
#define USB_TXHUBADDR10_ADDR_M  0x0000007FU  // Hub Address
#define USB_TXHUBADDR10_ADDR_S  0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXHUBPORT10
// register.
//
//*****************************************************************************
#define USB_TXHUBPORT10_PORT_M  0x0000007FU  // Hub Port
#define USB_TXHUBPORT10_PORT_S  0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXFUNCADDR10
// register.
//
//*****************************************************************************
#define USB_RXFUNCADDR10_ADDR_M 0x0000007FU  // Device Address
#define USB_RXFUNCADDR10_ADDR_S 0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXHUBADDR10
// register.
//
//*****************************************************************************
#define USB_RXHUBADDR10_ADDR_M  0x0000007FU  // Hub Address
#define USB_RXHUBADDR10_ADDR_S  0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXHUBPORT10
// register.
//
//*****************************************************************************
#define USB_RXHUBPORT10_PORT_M  0x0000007FU  // Hub Port
#define USB_RXHUBPORT10_PORT_S  0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXFUNCADDR11
// register.
//
//*****************************************************************************
#define USB_TXFUNCADDR11_ADDR_M 0x0000007FU  // Device Address
#define USB_TXFUNCADDR11_ADDR_S 0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXHUBADDR11
// register.
//
//*****************************************************************************
#define USB_TXHUBADDR11_ADDR_M  0x0000007FU  // Hub Address
#define USB_TXHUBADDR11_ADDR_S  0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXHUBPORT11
// register.
//
//*****************************************************************************
#define USB_TXHUBPORT11_PORT_M  0x0000007FU  // Hub Port
#define USB_TXHUBPORT11_PORT_S  0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXFUNCADDR11
// register.
//
//*****************************************************************************
#define USB_RXFUNCADDR11_ADDR_M 0x0000007FU  // Device Address
#define USB_RXFUNCADDR11_ADDR_S 0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXHUBADDR11
// register.
//
//*****************************************************************************
#define USB_RXHUBADDR11_ADDR_M  0x0000007FU  // Hub Address
#define USB_RXHUBADDR11_ADDR_S  0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXHUBPORT11
// register.
//
//*****************************************************************************
#define USB_RXHUBPORT11_PORT_M  0x0000007FU  // Hub Port
#define USB_RXHUBPORT11_PORT_S  0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXFUNCADDR12
// register.
//
//*****************************************************************************
#define USB_TXFUNCADDR12_ADDR_M 0x0000007FU  // Device Address
#define USB_TXFUNCADDR12_ADDR_S 0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXHUBADDR12
// register.
//
//*****************************************************************************
#define USB_TXHUBADDR12_ADDR_M  0x0000007FU  // Hub Address
#define USB_TXHUBADDR12_ADDR_S  0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXHUBPORT12
// register.
//
//*****************************************************************************
#define USB_TXHUBPORT12_PORT_M  0x0000007FU  // Hub Port
#define USB_TXHUBPORT12_PORT_S  0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXFUNCADDR12
// register.
//
//*****************************************************************************
#define USB_RXFUNCADDR12_ADDR_M 0x0000007FU  // Device Address
#define USB_RXFUNCADDR12_ADDR_S 0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXHUBADDR12
// register.
//
//*****************************************************************************
#define USB_RXHUBADDR12_ADDR_M  0x0000007FU  // Hub Address
#define USB_RXHUBADDR12_ADDR_S  0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXHUBPORT12
// register.
//
//*****************************************************************************
#define USB_RXHUBPORT12_PORT_M  0x0000007FU  // Hub Port
#define USB_RXHUBPORT12_PORT_S  0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXFUNCADDR13
// register.
//
//*****************************************************************************
#define USB_TXFUNCADDR13_ADDR_M 0x0000007FU  // Device Address
#define USB_TXFUNCADDR13_ADDR_S 0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXHUBADDR13
// register.
//
//*****************************************************************************
#define USB_TXHUBADDR13_ADDR_M  0x0000007FU  // Hub Address
#define USB_TXHUBADDR13_ADDR_S  0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXHUBPORT13
// register.
//
//*****************************************************************************
#define USB_TXHUBPORT13_PORT_M  0x0000007FU  // Hub Port
#define USB_TXHUBPORT13_PORT_S  0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXFUNCADDR13
// register.
//
//*****************************************************************************
#define USB_RXFUNCADDR13_ADDR_M 0x0000007FU  // Device Address
#define USB_RXFUNCADDR13_ADDR_S 0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXHUBADDR13
// register.
//
//*****************************************************************************
#define USB_RXHUBADDR13_ADDR_M  0x0000007FU  // Hub Address
#define USB_RXHUBADDR13_ADDR_S  0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXHUBPORT13
// register.
//
//*****************************************************************************
#define USB_RXHUBPORT13_PORT_M  0x0000007FU  // Hub Port
#define USB_RXHUBPORT13_PORT_S  0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXFUNCADDR14
// register.
//
//*****************************************************************************
#define USB_TXFUNCADDR14_ADDR_M 0x0000007FU  // Device Address
#define USB_TXFUNCADDR14_ADDR_S 0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXHUBADDR14
// register.
//
//*****************************************************************************
#define USB_TXHUBADDR14_ADDR_M  0x0000007FU  // Hub Address
#define USB_TXHUBADDR14_ADDR_S  0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXHUBPORT14
// register.
//
//*****************************************************************************
#define USB_TXHUBPORT14_PORT_M  0x0000007FU  // Hub Port
#define USB_TXHUBPORT14_PORT_S  0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXFUNCADDR14
// register.
//
//*****************************************************************************
#define USB_RXFUNCADDR14_ADDR_M 0x0000007FU  // Device Address
#define USB_RXFUNCADDR14_ADDR_S 0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXHUBADDR14
// register.
//
//*****************************************************************************
#define USB_RXHUBADDR14_ADDR_M  0x0000007FU  // Hub Address
#define USB_RXHUBADDR14_ADDR_S  0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXHUBPORT14
// register.
//
//*****************************************************************************
#define USB_RXHUBPORT14_PORT_M  0x0000007FU  // Hub Port
#define USB_RXHUBPORT14_PORT_S  0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXFUNCADDR15
// register.
//
//*****************************************************************************
#define USB_TXFUNCADDR15_ADDR_M 0x0000007FU  // Device Address
#define USB_TXFUNCADDR15_ADDR_S 0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXHUBADDR15
// register.
//
//*****************************************************************************
#define USB_TXHUBADDR15_ADDR_M  0x0000007FU  // Hub Address
#define USB_TXHUBADDR15_ADDR_S  0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXHUBPORT15
// register.
//
//*****************************************************************************
#define USB_TXHUBPORT15_PORT_M  0x0000007FU  // Hub Port
#define USB_TXHUBPORT15_PORT_S  0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXFUNCADDR15
// register.
//
//*****************************************************************************
#define USB_RXFUNCADDR15_ADDR_M 0x0000007FU  // Device Address
#define USB_RXFUNCADDR15_ADDR_S 0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXHUBADDR15
// register.
//
//*****************************************************************************
#define USB_RXHUBADDR15_ADDR_M  0x0000007FU  // Hub Address
#define USB_RXHUBADDR15_ADDR_S  0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXHUBPORT15
// register.
//
//*****************************************************************************
#define USB_RXHUBPORT15_PORT_M  0x0000007FU  // Hub Port
#define USB_RXHUBPORT15_PORT_S  0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_CSRL0 register.
//
//*****************************************************************************
#define USB_CSRL0_NAKTO         0x00000080U  // NAK Timeout
#define USB_CSRL0_SETENDC       0x00000080U  // Setup End Clear
#define USB_CSRL0_STATUS        0x00000040U  // STATUS Packet
#define USB_CSRL0_RXRDYC        0x00000040U  // RXRDY Clear
#define USB_CSRL0_REQPKT        0x00000020U  // Request Packet
#define USB_CSRL0_STALL         0x00000020U  // Send Stall
#define USB_CSRL0_SETEND        0x00000010U  // Setup End
#define USB_CSRL0_ERROR         0x00000010U  // Error
#define USB_CSRL0_DATAEND       0x00000008U  // Data End
#define USB_CSRL0_SETUP         0x00000008U  // Setup Packet
#define USB_CSRL0_STALLED       0x00000004U  // Endpoint Stalled
#define USB_CSRL0_TXRDY         0x00000002U  // Transmit Packet Ready
#define USB_CSRL0_RXRDY         0x00000001U  // Receive Packet Ready

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_CSRH0 register.
//
//*****************************************************************************
#define USB_CSRH0_DTWE          0x00000004U  // Data Toggle Write Enable
#define USB_CSRH0_DT            0x00000002U  // Data Toggle
#define USB_CSRH0_FLUSH         0x00000001U  // Flush FIFO

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_COUNT0 register.
//
//*****************************************************************************
#define USB_COUNT0_COUNT_M      0x0000007FU  // FIFO Count
#define USB_COUNT0_COUNT_S      0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TYPE0 register.
//
//*****************************************************************************
#define USB_TYPE0_SPEED_M       0x000000C0U  // Operating Speed
#define USB_TYPE0_SPEED_FULL    0x00000080U  // Full
#define USB_TYPE0_SPEED_LOW     0x000000C0U  // Low

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_NAKLMT register.
//
//*****************************************************************************
#define USB_NAKLMT_NAKLMT_M     0x0000001FU  // EP0 NAK Limit
#define USB_NAKLMT_NAKLMT_S     0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXMAXP1 register.
//
//*****************************************************************************
#define USB_TXMAXP1_MAXLOAD_M   0x000007FFU  // Maximum Payload
#define USB_TXMAXP1_MAXLOAD_S   0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXCSRL1 register.
//
//*****************************************************************************
#define USB_TXCSRL1_NAKTO       0x00000080U  // NAK Timeout
#define USB_TXCSRL1_CLRDT       0x00000040U  // Clear Data Toggle
#define USB_TXCSRL1_STALLED     0x00000020U  // Endpoint Stalled
#define USB_TXCSRL1_STALL       0x00000010U  // Send STALL
#define USB_TXCSRL1_SETUP       0x00000010U  // Setup Packet
#define USB_TXCSRL1_FLUSH       0x00000008U  // Flush FIFO
#define USB_TXCSRL1_ERROR       0x00000004U  // Error
#define USB_TXCSRL1_UNDRN       0x00000004U  // Underrun
#define USB_TXCSRL1_FIFONE      0x00000002U  // FIFO Not Empty
#define USB_TXCSRL1_TXRDY       0x00000001U  // Transmit Packet Ready

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXCSRH1 register.
//
//*****************************************************************************
#define USB_TXCSRH1_AUTOSET     0x00000080U  // Auto Set
#define USB_TXCSRH1_ISO         0x00000040U  // Isochronous Transfers
#define USB_TXCSRH1_MODE        0x00000020U  // Mode
#define USB_TXCSRH1_DMAEN       0x00000010U  // DMA Request Enable
#define USB_TXCSRH1_FDT         0x00000008U  // Force Data Toggle
#define USB_TXCSRH1_DMAMOD      0x00000004U  // DMA Request Mode
#define USB_TXCSRH1_DTWE        0x00000002U  // Data Toggle Write Enable
#define USB_TXCSRH1_DT          0x00000001U  // Data Toggle

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXMAXP1 register.
//
//*****************************************************************************
#define USB_RXMAXP1_MAXLOAD_M   0x000007FFU  // Maximum Payload
#define USB_RXMAXP1_MAXLOAD_S   0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXCSRL1 register.
//
//*****************************************************************************
#define USB_RXCSRL1_CLRDT       0x00000080U  // Clear Data Toggle
#define USB_RXCSRL1_STALLED     0x00000040U  // Endpoint Stalled
#define USB_RXCSRL1_STALL       0x00000020U  // Send STALL
#define USB_RXCSRL1_REQPKT      0x00000020U  // Request Packet
#define USB_RXCSRL1_FLUSH       0x00000010U  // Flush FIFO
#define USB_RXCSRL1_DATAERR     0x00000008U  // Data Error
#define USB_RXCSRL1_NAKTO       0x00000008U  // NAK Timeout
#define USB_RXCSRL1_OVER        0x00000004U  // Overrun
#define USB_RXCSRL1_ERROR       0x00000004U  // Error
#define USB_RXCSRL1_FULL        0x00000002U  // FIFO Full
#define USB_RXCSRL1_RXRDY       0x00000001U  // Receive Packet Ready

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXCSRH1 register.
//
//*****************************************************************************
#define USB_RXCSRH1_AUTOCL      0x00000080U  // Auto Clear
#define USB_RXCSRH1_AUTORQ      0x00000040U  // Auto Request
#define USB_RXCSRH1_ISO         0x00000040U  // Isochronous Transfers
#define USB_RXCSRH1_DMAEN       0x00000020U  // DMA Request Enable
#define USB_RXCSRH1_DISNYET     0x00000010U  // Disable NYET
#define USB_RXCSRH1_PIDERR      0x00000010U  // PID Error
#define USB_RXCSRH1_DMAMOD      0x00000008U  // DMA Request Mode
#define USB_RXCSRH1_DTWE        0x00000004U  // Data Toggle Write Enable
#define USB_RXCSRH1_DT          0x00000002U  // Data Toggle

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXCOUNT1 register.
//
//*****************************************************************************
#define USB_RXCOUNT1_COUNT_M    0x00001FFFU  // Receive Packet Count
#define USB_RXCOUNT1_COUNT_S    0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXTYPE1 register.
//
//*****************************************************************************
#define USB_TXTYPE1_SPEED_M     0x000000C0U  // Operating Speed
#define USB_TXTYPE1_SPEED_DFLT  0x00000000U  // Default
#define USB_TXTYPE1_SPEED_FULL  0x00000080U  // Full
#define USB_TXTYPE1_SPEED_LOW   0x000000C0U  // Low
#define USB_TXTYPE1_PROTO_M     0x00000030U  // Protocol
#define USB_TXTYPE1_PROTO_CTRL  0x00000000U  // Control
#define USB_TXTYPE1_PROTO_ISOC  0x00000010U  // Isochronous
#define USB_TXTYPE1_PROTO_BULK  0x00000020U  // Bulk
#define USB_TXTYPE1_PROTO_INT   0x00000030U  // Interrupt
#define USB_TXTYPE1_TEP_M       0x0000000FU  // Target Endpoint Number
#define USB_TXTYPE1_TEP_S       0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXINTERVAL1
// register.
//
//*****************************************************************************
#define USB_TXINTERVAL1_NAKLMT_M \
                                0x000000FFU  // NAK Limit
#define USB_TXINTERVAL1_TXPOLL_M \
                                0x000000FFU  // TX Polling
#define USB_TXINTERVAL1_TXPOLL_S \
                                0U
#define USB_TXINTERVAL1_NAKLMT_S \
                                0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXTYPE1 register.
//
//*****************************************************************************
#define USB_RXTYPE1_SPEED_M     0x000000C0U  // Operating Speed
#define USB_RXTYPE1_SPEED_DFLT  0x00000000U  // Default
#define USB_RXTYPE1_SPEED_FULL  0x00000080U  // Full
#define USB_RXTYPE1_SPEED_LOW   0x000000C0U  // Low
#define USB_RXTYPE1_PROTO_M     0x00000030U  // Protocol
#define USB_RXTYPE1_PROTO_CTRL  0x00000000U  // Control
#define USB_RXTYPE1_PROTO_ISOC  0x00000010U  // Isochronous
#define USB_RXTYPE1_PROTO_BULK  0x00000020U  // Bulk
#define USB_RXTYPE1_PROTO_INT   0x00000030U  // Interrupt
#define USB_RXTYPE1_TEP_M       0x0000000FU  // Target Endpoint Number
#define USB_RXTYPE1_TEP_S       0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXINTERVAL1
// register.
//
//*****************************************************************************
#define USB_RXINTERVAL1_TXPOLL_M \
                                0x000000FFU  // RX Polling
#define USB_RXINTERVAL1_NAKLMT_M \
                                0x000000FFU  // NAK Limit
#define USB_RXINTERVAL1_TXPOLL_S \
                                0U
#define USB_RXINTERVAL1_NAKLMT_S \
                                0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXMAXP2 register.
//
//*****************************************************************************
#define USB_TXMAXP2_MAXLOAD_M   0x000007FFU  // Maximum Payload
#define USB_TXMAXP2_MAXLOAD_S   0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXCSRL2 register.
//
//*****************************************************************************
#define USB_TXCSRL2_NAKTO       0x00000080U  // NAK Timeout
#define USB_TXCSRL2_CLRDT       0x00000040U  // Clear Data Toggle
#define USB_TXCSRL2_STALLED     0x00000020U  // Endpoint Stalled
#define USB_TXCSRL2_SETUP       0x00000010U  // Setup Packet
#define USB_TXCSRL2_STALL       0x00000010U  // Send STALL
#define USB_TXCSRL2_FLUSH       0x00000008U  // Flush FIFO
#define USB_TXCSRL2_ERROR       0x00000004U  // Error
#define USB_TXCSRL2_UNDRN       0x00000004U  // Underrun
#define USB_TXCSRL2_FIFONE      0x00000002U  // FIFO Not Empty
#define USB_TXCSRL2_TXRDY       0x00000001U  // Transmit Packet Ready

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXCSRH2 register.
//
//*****************************************************************************
#define USB_TXCSRH2_AUTOSET     0x00000080U  // Auto Set
#define USB_TXCSRH2_ISO         0x00000040U  // Isochronous Transfers
#define USB_TXCSRH2_MODE        0x00000020U  // Mode
#define USB_TXCSRH2_DMAEN       0x00000010U  // DMA Request Enable
#define USB_TXCSRH2_FDT         0x00000008U  // Force Data Toggle
#define USB_TXCSRH2_DMAMOD      0x00000004U  // DMA Request Mode
#define USB_TXCSRH2_DTWE        0x00000002U  // Data Toggle Write Enable
#define USB_TXCSRH2_DT          0x00000001U  // Data Toggle

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXMAXP2 register.
//
//*****************************************************************************
#define USB_RXMAXP2_MAXLOAD_M   0x000007FFU  // Maximum Payload
#define USB_RXMAXP2_MAXLOAD_S   0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXCSRL2 register.
//
//*****************************************************************************
#define USB_RXCSRL2_CLRDT       0x00000080U  // Clear Data Toggle
#define USB_RXCSRL2_STALLED     0x00000040U  // Endpoint Stalled
#define USB_RXCSRL2_REQPKT      0x00000020U  // Request Packet
#define USB_RXCSRL2_STALL       0x00000020U  // Send STALL
#define USB_RXCSRL2_FLUSH       0x00000010U  // Flush FIFO
#define USB_RXCSRL2_DATAERR     0x00000008U  // Data Error
#define USB_RXCSRL2_NAKTO       0x00000008U  // NAK Timeout
#define USB_RXCSRL2_ERROR       0x00000004U  // Error
#define USB_RXCSRL2_OVER        0x00000004U  // Overrun
#define USB_RXCSRL2_FULL        0x00000002U  // FIFO Full
#define USB_RXCSRL2_RXRDY       0x00000001U  // Receive Packet Ready

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXCSRH2 register.
//
//*****************************************************************************
#define USB_RXCSRH2_AUTOCL      0x00000080U  // Auto Clear
#define USB_RXCSRH2_AUTORQ      0x00000040U  // Auto Request
#define USB_RXCSRH2_ISO         0x00000040U  // Isochronous Transfers
#define USB_RXCSRH2_DMAEN       0x00000020U  // DMA Request Enable
#define USB_RXCSRH2_DISNYET     0x00000010U  // Disable NYET
#define USB_RXCSRH2_PIDERR      0x00000010U  // PID Error
#define USB_RXCSRH2_DMAMOD      0x00000008U  // DMA Request Mode
#define USB_RXCSRH2_DTWE        0x00000004U  // Data Toggle Write Enable
#define USB_RXCSRH2_DT          0x00000002U  // Data Toggle

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXCOUNT2 register.
//
//*****************************************************************************
#define USB_RXCOUNT2_COUNT_M    0x00001FFFU  // Receive Packet Count
#define USB_RXCOUNT2_COUNT_S    0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXTYPE2 register.
//
//*****************************************************************************
#define USB_TXTYPE2_SPEED_M     0x000000C0U  // Operating Speed
#define USB_TXTYPE2_SPEED_DFLT  0x00000000U  // Default
#define USB_TXTYPE2_SPEED_FULL  0x00000080U  // Full
#define USB_TXTYPE2_SPEED_LOW   0x000000C0U  // Low
#define USB_TXTYPE2_PROTO_M     0x00000030U  // Protocol
#define USB_TXTYPE2_PROTO_CTRL  0x00000000U  // Control
#define USB_TXTYPE2_PROTO_ISOC  0x00000010U  // Isochronous
#define USB_TXTYPE2_PROTO_BULK  0x00000020U  // Bulk
#define USB_TXTYPE2_PROTO_INT   0x00000030U  // Interrupt
#define USB_TXTYPE2_TEP_M       0x0000000FU  // Target Endpoint Number
#define USB_TXTYPE2_TEP_S       0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXINTERVAL2
// register.
//
//*****************************************************************************
#define USB_TXINTERVAL2_TXPOLL_M \
                                0x000000FFU  // TX Polling
#define USB_TXINTERVAL2_NAKLMT_M \
                                0x000000FFU  // NAK Limit
#define USB_TXINTERVAL2_NAKLMT_S \
                                0U
#define USB_TXINTERVAL2_TXPOLL_S \
                                0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXTYPE2 register.
//
//*****************************************************************************
#define USB_RXTYPE2_SPEED_M     0x000000C0U  // Operating Speed
#define USB_RXTYPE2_SPEED_DFLT  0x00000000U  // Default
#define USB_RXTYPE2_SPEED_FULL  0x00000080U  // Full
#define USB_RXTYPE2_SPEED_LOW   0x000000C0U  // Low
#define USB_RXTYPE2_PROTO_M     0x00000030U  // Protocol
#define USB_RXTYPE2_PROTO_CTRL  0x00000000U  // Control
#define USB_RXTYPE2_PROTO_ISOC  0x00000010U  // Isochronous
#define USB_RXTYPE2_PROTO_BULK  0x00000020U  // Bulk
#define USB_RXTYPE2_PROTO_INT   0x00000030U  // Interrupt
#define USB_RXTYPE2_TEP_M       0x0000000FU  // Target Endpoint Number
#define USB_RXTYPE2_TEP_S       0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXINTERVAL2
// register.
//
//*****************************************************************************
#define USB_RXINTERVAL2_TXPOLL_M \
                                0x000000FFU  // RX Polling
#define USB_RXINTERVAL2_NAKLMT_M \
                                0x000000FFU  // NAK Limit
#define USB_RXINTERVAL2_TXPOLL_S \
                                0U
#define USB_RXINTERVAL2_NAKLMT_S \
                                0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXMAXP3 register.
//
//*****************************************************************************
#define USB_TXMAXP3_MAXLOAD_M   0x000007FFU  // Maximum Payload
#define USB_TXMAXP3_MAXLOAD_S   0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXCSRL3 register.
//
//*****************************************************************************
#define USB_TXCSRL3_NAKTO       0x00000080U  // NAK Timeout
#define USB_TXCSRL3_CLRDT       0x00000040U  // Clear Data Toggle
#define USB_TXCSRL3_STALLED     0x00000020U  // Endpoint Stalled
#define USB_TXCSRL3_SETUP       0x00000010U  // Setup Packet
#define USB_TXCSRL3_STALL       0x00000010U  // Send STALL
#define USB_TXCSRL3_FLUSH       0x00000008U  // Flush FIFO
#define USB_TXCSRL3_ERROR       0x00000004U  // Error
#define USB_TXCSRL3_UNDRN       0x00000004U  // Underrun
#define USB_TXCSRL3_FIFONE      0x00000002U  // FIFO Not Empty
#define USB_TXCSRL3_TXRDY       0x00000001U  // Transmit Packet Ready

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXCSRH3 register.
//
//*****************************************************************************
#define USB_TXCSRH3_AUTOSET     0x00000080U  // Auto Set
#define USB_TXCSRH3_ISO         0x00000040U  // Isochronous Transfers
#define USB_TXCSRH3_MODE        0x00000020U  // Mode
#define USB_TXCSRH3_DMAEN       0x00000010U  // DMA Request Enable
#define USB_TXCSRH3_FDT         0x00000008U  // Force Data Toggle
#define USB_TXCSRH3_DMAMOD      0x00000004U  // DMA Request Mode
#define USB_TXCSRH3_DTWE        0x00000002U  // Data Toggle Write Enable
#define USB_TXCSRH3_DT          0x00000001U  // Data Toggle

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXMAXP3 register.
//
//*****************************************************************************
#define USB_RXMAXP3_MAXLOAD_M   0x000007FFU  // Maximum Payload
#define USB_RXMAXP3_MAXLOAD_S   0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXCSRL3 register.
//
//*****************************************************************************
#define USB_RXCSRL3_CLRDT       0x00000080U  // Clear Data Toggle
#define USB_RXCSRL3_STALLED     0x00000040U  // Endpoint Stalled
#define USB_RXCSRL3_STALL       0x00000020U  // Send STALL
#define USB_RXCSRL3_REQPKT      0x00000020U  // Request Packet
#define USB_RXCSRL3_FLUSH       0x00000010U  // Flush FIFO
#define USB_RXCSRL3_DATAERR     0x00000008U  // Data Error
#define USB_RXCSRL3_NAKTO       0x00000008U  // NAK Timeout
#define USB_RXCSRL3_ERROR       0x00000004U  // Error
#define USB_RXCSRL3_OVER        0x00000004U  // Overrun
#define USB_RXCSRL3_FULL        0x00000002U  // FIFO Full
#define USB_RXCSRL3_RXRDY       0x00000001U  // Receive Packet Ready

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXCSRH3 register.
//
//*****************************************************************************
#define USB_RXCSRH3_AUTOCL      0x00000080U  // Auto Clear
#define USB_RXCSRH3_AUTORQ      0x00000040U  // Auto Request
#define USB_RXCSRH3_ISO         0x00000040U  // Isochronous Transfers
#define USB_RXCSRH3_DMAEN       0x00000020U  // DMA Request Enable
#define USB_RXCSRH3_DISNYET     0x00000010U  // Disable NYET
#define USB_RXCSRH3_PIDERR      0x00000010U  // PID Error
#define USB_RXCSRH3_DMAMOD      0x00000008U  // DMA Request Mode
#define USB_RXCSRH3_DTWE        0x00000004U  // Data Toggle Write Enable
#define USB_RXCSRH3_DT          0x00000002U  // Data Toggle

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXCOUNT3 register.
//
//*****************************************************************************
#define USB_RXCOUNT3_COUNT_M    0x00001FFFU  // Receive Packet Count
#define USB_RXCOUNT3_COUNT_S    0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXTYPE3 register.
//
//*****************************************************************************
#define USB_TXTYPE3_SPEED_M     0x000000C0U  // Operating Speed
#define USB_TXTYPE3_SPEED_DFLT  0x00000000U  // Default
#define USB_TXTYPE3_SPEED_FULL  0x00000080U  // Full
#define USB_TXTYPE3_SPEED_LOW   0x000000C0U  // Low
#define USB_TXTYPE3_PROTO_M     0x00000030U  // Protocol
#define USB_TXTYPE3_PROTO_CTRL  0x00000000U  // Control
#define USB_TXTYPE3_PROTO_ISOC  0x00000010U  // Isochronous
#define USB_TXTYPE3_PROTO_BULK  0x00000020U  // Bulk
#define USB_TXTYPE3_PROTO_INT   0x00000030U  // Interrupt
#define USB_TXTYPE3_TEP_M       0x0000000FU  // Target Endpoint Number
#define USB_TXTYPE3_TEP_S       0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXINTERVAL3
// register.
//
//*****************************************************************************
#define USB_TXINTERVAL3_TXPOLL_M \
                                0x000000FFU  // TX Polling
#define USB_TXINTERVAL3_NAKLMT_M \
                                0x000000FFU  // NAK Limit
#define USB_TXINTERVAL3_TXPOLL_S \
                                0U
#define USB_TXINTERVAL3_NAKLMT_S \
                                0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXTYPE3 register.
//
//*****************************************************************************
#define USB_RXTYPE3_SPEED_M     0x000000C0U  // Operating Speed
#define USB_RXTYPE3_SPEED_DFLT  0x00000000U  // Default
#define USB_RXTYPE3_SPEED_FULL  0x00000080U  // Full
#define USB_RXTYPE3_SPEED_LOW   0x000000C0U  // Low
#define USB_RXTYPE3_PROTO_M     0x00000030U  // Protocol
#define USB_RXTYPE3_PROTO_CTRL  0x00000000U  // Control
#define USB_RXTYPE3_PROTO_ISOC  0x00000010U  // Isochronous
#define USB_RXTYPE3_PROTO_BULK  0x00000020U  // Bulk
#define USB_RXTYPE3_PROTO_INT   0x00000030U  // Interrupt
#define USB_RXTYPE3_TEP_M       0x0000000FU  // Target Endpoint Number
#define USB_RXTYPE3_TEP_S       0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXINTERVAL3
// register.
//
//*****************************************************************************
#define USB_RXINTERVAL3_TXPOLL_M \
                                0x000000FFU  // RX Polling
#define USB_RXINTERVAL3_NAKLMT_M \
                                0x000000FFU  // NAK Limit
#define USB_RXINTERVAL3_TXPOLL_S \
                                0U
#define USB_RXINTERVAL3_NAKLMT_S \
                                0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXMAXP4 register.
//
//*****************************************************************************
#define USB_TXMAXP4_MAXLOAD_M   0x000007FFU  // Maximum Payload
#define USB_TXMAXP4_MAXLOAD_S   0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXCSRL4 register.
//
//*****************************************************************************
#define USB_TXCSRL4_NAKTO       0x00000080U  // NAK Timeout
#define USB_TXCSRL4_CLRDT       0x00000040U  // Clear Data Toggle
#define USB_TXCSRL4_STALLED     0x00000020U  // Endpoint Stalled
#define USB_TXCSRL4_SETUP       0x00000010U  // Setup Packet
#define USB_TXCSRL4_STALL       0x00000010U  // Send STALL
#define USB_TXCSRL4_FLUSH       0x00000008U  // Flush FIFO
#define USB_TXCSRL4_ERROR       0x00000004U  // Error
#define USB_TXCSRL4_UNDRN       0x00000004U  // Underrun
#define USB_TXCSRL4_FIFONE      0x00000002U  // FIFO Not Empty
#define USB_TXCSRL4_TXRDY       0x00000001U  // Transmit Packet Ready

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXCSRH4 register.
//
//*****************************************************************************
#define USB_TXCSRH4_AUTOSET     0x00000080U  // Auto Set
#define USB_TXCSRH4_ISO         0x00000040U  // Isochronous Transfers
#define USB_TXCSRH4_MODE        0x00000020U  // Mode
#define USB_TXCSRH4_DMAEN       0x00000010U  // DMA Request Enable
#define USB_TXCSRH4_FDT         0x00000008U  // Force Data Toggle
#define USB_TXCSRH4_DMAMOD      0x00000004U  // DMA Request Mode
#define USB_TXCSRH4_DTWE        0x00000002U  // Data Toggle Write Enable
#define USB_TXCSRH4_DT          0x00000001U  // Data Toggle

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXMAXP4 register.
//
//*****************************************************************************
#define USB_RXMAXP4_MAXLOAD_M   0x000007FFU  // Maximum Payload
#define USB_RXMAXP4_MAXLOAD_S   0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXCSRL4 register.
//
//*****************************************************************************
#define USB_RXCSRL4_CLRDT       0x00000080U  // Clear Data Toggle
#define USB_RXCSRL4_STALLED     0x00000040U  // Endpoint Stalled
#define USB_RXCSRL4_STALL       0x00000020U  // Send STALL
#define USB_RXCSRL4_REQPKT      0x00000020U  // Request Packet
#define USB_RXCSRL4_FLUSH       0x00000010U  // Flush FIFO
#define USB_RXCSRL4_NAKTO       0x00000008U  // NAK Timeout
#define USB_RXCSRL4_DATAERR     0x00000008U  // Data Error
#define USB_RXCSRL4_OVER        0x00000004U  // Overrun
#define USB_RXCSRL4_ERROR       0x00000004U  // Error
#define USB_RXCSRL4_FULL        0x00000002U  // FIFO Full
#define USB_RXCSRL4_RXRDY       0x00000001U  // Receive Packet Ready

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXCSRH4 register.
//
//*****************************************************************************
#define USB_RXCSRH4_AUTOCL      0x00000080U  // Auto Clear
#define USB_RXCSRH4_AUTORQ      0x00000040U  // Auto Request
#define USB_RXCSRH4_ISO         0x00000040U  // Isochronous Transfers
#define USB_RXCSRH4_DMAEN       0x00000020U  // DMA Request Enable
#define USB_RXCSRH4_DISNYET     0x00000010U  // Disable NYET
#define USB_RXCSRH4_PIDERR      0x00000010U  // PID Error
#define USB_RXCSRH4_DMAMOD      0x00000008U  // DMA Request Mode
#define USB_RXCSRH4_DTWE        0x00000004U  // Data Toggle Write Enable
#define USB_RXCSRH4_DT          0x00000002U  // Data Toggle

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXCOUNT4 register.
//
//*****************************************************************************
#define USB_RXCOUNT4_COUNT_M    0x00001FFFU  // Receive Packet Count
#define USB_RXCOUNT4_COUNT_S    0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXTYPE4 register.
//
//*****************************************************************************
#define USB_TXTYPE4_SPEED_M     0x000000C0U  // Operating Speed
#define USB_TXTYPE4_SPEED_DFLT  0x00000000U  // Default
#define USB_TXTYPE4_SPEED_FULL  0x00000080U  // Full
#define USB_TXTYPE4_SPEED_LOW   0x000000C0U  // Low
#define USB_TXTYPE4_PROTO_M     0x00000030U  // Protocol
#define USB_TXTYPE4_PROTO_CTRL  0x00000000U  // Control
#define USB_TXTYPE4_PROTO_ISOC  0x00000010U  // Isochronous
#define USB_TXTYPE4_PROTO_BULK  0x00000020U  // Bulk
#define USB_TXTYPE4_PROTO_INT   0x00000030U  // Interrupt
#define USB_TXTYPE4_TEP_M       0x0000000FU  // Target Endpoint Number
#define USB_TXTYPE4_TEP_S       0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXINTERVAL4
// register.
//
//*****************************************************************************
#define USB_TXINTERVAL4_TXPOLL_M \
                                0x000000FFU  // TX Polling
#define USB_TXINTERVAL4_NAKLMT_M \
                                0x000000FFU  // NAK Limit
#define USB_TXINTERVAL4_NAKLMT_S \
                                0U
#define USB_TXINTERVAL4_TXPOLL_S \
                                0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXTYPE4 register.
//
//*****************************************************************************
#define USB_RXTYPE4_SPEED_M     0x000000C0U  // Operating Speed
#define USB_RXTYPE4_SPEED_DFLT  0x00000000U  // Default
#define USB_RXTYPE4_SPEED_FULL  0x00000080U  // Full
#define USB_RXTYPE4_SPEED_LOW   0x000000C0U  // Low
#define USB_RXTYPE4_PROTO_M     0x00000030U  // Protocol
#define USB_RXTYPE4_PROTO_CTRL  0x00000000U  // Control
#define USB_RXTYPE4_PROTO_ISOC  0x00000010U  // Isochronous
#define USB_RXTYPE4_PROTO_BULK  0x00000020U  // Bulk
#define USB_RXTYPE4_PROTO_INT   0x00000030U  // Interrupt
#define USB_RXTYPE4_TEP_M       0x0000000FU  // Target Endpoint Number
#define USB_RXTYPE4_TEP_S       0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXINTERVAL4
// register.
//
//*****************************************************************************
#define USB_RXINTERVAL4_TXPOLL_M \
                                0x000000FFU  // RX Polling
#define USB_RXINTERVAL4_NAKLMT_M \
                                0x000000FFU  // NAK Limit
#define USB_RXINTERVAL4_NAKLMT_S \
                                0U
#define USB_RXINTERVAL4_TXPOLL_S \
                                0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXMAXP5 register.
//
//*****************************************************************************
#define USB_TXMAXP5_MAXLOAD_M   0x000007FFU  // Maximum Payload
#define USB_TXMAXP5_MAXLOAD_S   0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXCSRL5 register.
//
//*****************************************************************************
#define USB_TXCSRL5_NAKTO       0x00000080U  // NAK Timeout
#define USB_TXCSRL5_CLRDT       0x00000040U  // Clear Data Toggle
#define USB_TXCSRL5_STALLED     0x00000020U  // Endpoint Stalled
#define USB_TXCSRL5_SETUP       0x00000010U  // Setup Packet
#define USB_TXCSRL5_STALL       0x00000010U  // Send STALL
#define USB_TXCSRL5_FLUSH       0x00000008U  // Flush FIFO
#define USB_TXCSRL5_ERROR       0x00000004U  // Error
#define USB_TXCSRL5_UNDRN       0x00000004U  // Underrun
#define USB_TXCSRL5_FIFONE      0x00000002U  // FIFO Not Empty
#define USB_TXCSRL5_TXRDY       0x00000001U  // Transmit Packet Ready

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXCSRH5 register.
//
//*****************************************************************************
#define USB_TXCSRH5_AUTOSET     0x00000080U  // Auto Set
#define USB_TXCSRH5_ISO         0x00000040U  // Isochronous Transfers
#define USB_TXCSRH5_MODE        0x00000020U  // Mode
#define USB_TXCSRH5_DMAEN       0x00000010U  // DMA Request Enable
#define USB_TXCSRH5_FDT         0x00000008U  // Force Data Toggle
#define USB_TXCSRH5_DMAMOD      0x00000004U  // DMA Request Mode
#define USB_TXCSRH5_DTWE        0x00000002U  // Data Toggle Write Enable
#define USB_TXCSRH5_DT          0x00000001U  // Data Toggle

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXMAXP5 register.
//
//*****************************************************************************
#define USB_RXMAXP5_MAXLOAD_M   0x000007FFU  // Maximum Payload
#define USB_RXMAXP5_MAXLOAD_S   0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXCSRL5 register.
//
//*****************************************************************************
#define USB_RXCSRL5_CLRDT       0x00000080U  // Clear Data Toggle
#define USB_RXCSRL5_STALLED     0x00000040U  // Endpoint Stalled
#define USB_RXCSRL5_STALL       0x00000020U  // Send STALL
#define USB_RXCSRL5_REQPKT      0x00000020U  // Request Packet
#define USB_RXCSRL5_FLUSH       0x00000010U  // Flush FIFO
#define USB_RXCSRL5_NAKTO       0x00000008U  // NAK Timeout
#define USB_RXCSRL5_DATAERR     0x00000008U  // Data Error
#define USB_RXCSRL5_ERROR       0x00000004U  // Error
#define USB_RXCSRL5_OVER        0x00000004U  // Overrun
#define USB_RXCSRL5_FULL        0x00000002U  // FIFO Full
#define USB_RXCSRL5_RXRDY       0x00000001U  // Receive Packet Ready

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXCSRH5 register.
//
//*****************************************************************************
#define USB_RXCSRH5_AUTOCL      0x00000080U  // Auto Clear
#define USB_RXCSRH5_AUTORQ      0x00000040U  // Auto Request
#define USB_RXCSRH5_ISO         0x00000040U  // Isochronous Transfers
#define USB_RXCSRH5_DMAEN       0x00000020U  // DMA Request Enable
#define USB_RXCSRH5_DISNYET     0x00000010U  // Disable NYET
#define USB_RXCSRH5_PIDERR      0x00000010U  // PID Error
#define USB_RXCSRH5_DMAMOD      0x00000008U  // DMA Request Mode
#define USB_RXCSRH5_DTWE        0x00000004U  // Data Toggle Write Enable
#define USB_RXCSRH5_DT          0x00000002U  // Data Toggle

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXCOUNT5 register.
//
//*****************************************************************************
#define USB_RXCOUNT5_COUNT_M    0x00001FFFU  // Receive Packet Count
#define USB_RXCOUNT5_COUNT_S    0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXTYPE5 register.
//
//*****************************************************************************
#define USB_TXTYPE5_SPEED_M     0x000000C0U  // Operating Speed
#define USB_TXTYPE5_SPEED_DFLT  0x00000000U  // Default
#define USB_TXTYPE5_SPEED_FULL  0x00000080U  // Full
#define USB_TXTYPE5_SPEED_LOW   0x000000C0U  // Low
#define USB_TXTYPE5_PROTO_M     0x00000030U  // Protocol
#define USB_TXTYPE5_PROTO_CTRL  0x00000000U  // Control
#define USB_TXTYPE5_PROTO_ISOC  0x00000010U  // Isochronous
#define USB_TXTYPE5_PROTO_BULK  0x00000020U  // Bulk
#define USB_TXTYPE5_PROTO_INT   0x00000030U  // Interrupt
#define USB_TXTYPE5_TEP_M       0x0000000FU  // Target Endpoint Number
#define USB_TXTYPE5_TEP_S       0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXINTERVAL5
// register.
//
//*****************************************************************************
#define USB_TXINTERVAL5_TXPOLL_M \
                                0x000000FFU  // TX Polling
#define USB_TXINTERVAL5_NAKLMT_M \
                                0x000000FFU  // NAK Limit
#define USB_TXINTERVAL5_NAKLMT_S \
                                0U
#define USB_TXINTERVAL5_TXPOLL_S \
                                0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXTYPE5 register.
//
//*****************************************************************************
#define USB_RXTYPE5_SPEED_M     0x000000C0U  // Operating Speed
#define USB_RXTYPE5_SPEED_DFLT  0x00000000U  // Default
#define USB_RXTYPE5_SPEED_FULL  0x00000080U  // Full
#define USB_RXTYPE5_SPEED_LOW   0x000000C0U  // Low
#define USB_RXTYPE5_PROTO_M     0x00000030U  // Protocol
#define USB_RXTYPE5_PROTO_CTRL  0x00000000U  // Control
#define USB_RXTYPE5_PROTO_ISOC  0x00000010U  // Isochronous
#define USB_RXTYPE5_PROTO_BULK  0x00000020U  // Bulk
#define USB_RXTYPE5_PROTO_INT   0x00000030U  // Interrupt
#define USB_RXTYPE5_TEP_M       0x0000000FU  // Target Endpoint Number
#define USB_RXTYPE5_TEP_S       0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXINTERVAL5
// register.
//
//*****************************************************************************
#define USB_RXINTERVAL5_TXPOLL_M \
                                0x000000FFU  // RX Polling
#define USB_RXINTERVAL5_NAKLMT_M \
                                0x000000FFU  // NAK Limit
#define USB_RXINTERVAL5_TXPOLL_S \
                                0U
#define USB_RXINTERVAL5_NAKLMT_S \
                                0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXMAXP6 register.
//
//*****************************************************************************
#define USB_TXMAXP6_MAXLOAD_M   0x000007FFU  // Maximum Payload
#define USB_TXMAXP6_MAXLOAD_S   0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXCSRL6 register.
//
//*****************************************************************************
#define USB_TXCSRL6_NAKTO       0x00000080U  // NAK Timeout
#define USB_TXCSRL6_CLRDT       0x00000040U  // Clear Data Toggle
#define USB_TXCSRL6_STALLED     0x00000020U  // Endpoint Stalled
#define USB_TXCSRL6_STALL       0x00000010U  // Send STALL
#define USB_TXCSRL6_SETUP       0x00000010U  // Setup Packet
#define USB_TXCSRL6_FLUSH       0x00000008U  // Flush FIFO
#define USB_TXCSRL6_ERROR       0x00000004U  // Error
#define USB_TXCSRL6_UNDRN       0x00000004U  // Underrun
#define USB_TXCSRL6_FIFONE      0x00000002U  // FIFO Not Empty
#define USB_TXCSRL6_TXRDY       0x00000001U  // Transmit Packet Ready

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXCSRH6 register.
//
//*****************************************************************************
#define USB_TXCSRH6_AUTOSET     0x00000080U  // Auto Set
#define USB_TXCSRH6_ISO         0x00000040U  // Isochronous Transfers
#define USB_TXCSRH6_MODE        0x00000020U  // Mode
#define USB_TXCSRH6_DMAEN       0x00000010U  // DMA Request Enable
#define USB_TXCSRH6_FDT         0x00000008U  // Force Data Toggle
#define USB_TXCSRH6_DMAMOD      0x00000004U  // DMA Request Mode
#define USB_TXCSRH6_DTWE        0x00000002U  // Data Toggle Write Enable
#define USB_TXCSRH6_DT          0x00000001U  // Data Toggle

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXMAXP6 register.
//
//*****************************************************************************
#define USB_RXMAXP6_MAXLOAD_M   0x000007FFU  // Maximum Payload
#define USB_RXMAXP6_MAXLOAD_S   0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXCSRL6 register.
//
//*****************************************************************************
#define USB_RXCSRL6_CLRDT       0x00000080U  // Clear Data Toggle
#define USB_RXCSRL6_STALLED     0x00000040U  // Endpoint Stalled
#define USB_RXCSRL6_REQPKT      0x00000020U  // Request Packet
#define USB_RXCSRL6_STALL       0x00000020U  // Send STALL
#define USB_RXCSRL6_FLUSH       0x00000010U  // Flush FIFO
#define USB_RXCSRL6_NAKTO       0x00000008U  // NAK Timeout
#define USB_RXCSRL6_DATAERR     0x00000008U  // Data Error
#define USB_RXCSRL6_ERROR       0x00000004U  // Error
#define USB_RXCSRL6_OVER        0x00000004U  // Overrun
#define USB_RXCSRL6_FULL        0x00000002U  // FIFO Full
#define USB_RXCSRL6_RXRDY       0x00000001U  // Receive Packet Ready

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXCSRH6 register.
//
//*****************************************************************************
#define USB_RXCSRH6_AUTOCL      0x00000080U  // Auto Clear
#define USB_RXCSRH6_AUTORQ      0x00000040U  // Auto Request
#define USB_RXCSRH6_ISO         0x00000040U  // Isochronous Transfers
#define USB_RXCSRH6_DMAEN       0x00000020U  // DMA Request Enable
#define USB_RXCSRH6_DISNYET     0x00000010U  // Disable NYET
#define USB_RXCSRH6_PIDERR      0x00000010U  // PID Error
#define USB_RXCSRH6_DMAMOD      0x00000008U  // DMA Request Mode
#define USB_RXCSRH6_DTWE        0x00000004U  // Data Toggle Write Enable
#define USB_RXCSRH6_DT          0x00000002U  // Data Toggle

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXCOUNT6 register.
//
//*****************************************************************************
#define USB_RXCOUNT6_COUNT_M    0x00001FFFU  // Receive Packet Count
#define USB_RXCOUNT6_COUNT_S    0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXTYPE6 register.
//
//*****************************************************************************
#define USB_TXTYPE6_SPEED_M     0x000000C0U  // Operating Speed
#define USB_TXTYPE6_SPEED_DFLT  0x00000000U  // Default
#define USB_TXTYPE6_SPEED_FULL  0x00000080U  // Full
#define USB_TXTYPE6_SPEED_LOW   0x000000C0U  // Low
#define USB_TXTYPE6_PROTO_M     0x00000030U  // Protocol
#define USB_TXTYPE6_PROTO_CTRL  0x00000000U  // Control
#define USB_TXTYPE6_PROTO_ISOC  0x00000010U  // Isochronous
#define USB_TXTYPE6_PROTO_BULK  0x00000020U  // Bulk
#define USB_TXTYPE6_PROTO_INT   0x00000030U  // Interrupt
#define USB_TXTYPE6_TEP_M       0x0000000FU  // Target Endpoint Number
#define USB_TXTYPE6_TEP_S       0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXINTERVAL6
// register.
//
//*****************************************************************************
#define USB_TXINTERVAL6_TXPOLL_M \
                                0x000000FFU  // TX Polling
#define USB_TXINTERVAL6_NAKLMT_M \
                                0x000000FFU  // NAK Limit
#define USB_TXINTERVAL6_TXPOLL_S \
                                0U
#define USB_TXINTERVAL6_NAKLMT_S \
                                0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXTYPE6 register.
//
//*****************************************************************************
#define USB_RXTYPE6_SPEED_M     0x000000C0U  // Operating Speed
#define USB_RXTYPE6_SPEED_DFLT  0x00000000U  // Default
#define USB_RXTYPE6_SPEED_FULL  0x00000080U  // Full
#define USB_RXTYPE6_SPEED_LOW   0x000000C0U  // Low
#define USB_RXTYPE6_PROTO_M     0x00000030U  // Protocol
#define USB_RXTYPE6_PROTO_CTRL  0x00000000U  // Control
#define USB_RXTYPE6_PROTO_ISOC  0x00000010U  // Isochronous
#define USB_RXTYPE6_PROTO_BULK  0x00000020U  // Bulk
#define USB_RXTYPE6_PROTO_INT   0x00000030U  // Interrupt
#define USB_RXTYPE6_TEP_M       0x0000000FU  // Target Endpoint Number
#define USB_RXTYPE6_TEP_S       0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXINTERVAL6
// register.
//
//*****************************************************************************
#define USB_RXINTERVAL6_TXPOLL_M \
                                0x000000FFU  // RX Polling
#define USB_RXINTERVAL6_NAKLMT_M \
                                0x000000FFU  // NAK Limit
#define USB_RXINTERVAL6_NAKLMT_S \
                                0U
#define USB_RXINTERVAL6_TXPOLL_S \
                                0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXMAXP7 register.
//
//*****************************************************************************
#define USB_TXMAXP7_MAXLOAD_M   0x000007FFU  // Maximum Payload
#define USB_TXMAXP7_MAXLOAD_S   0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXCSRL7 register.
//
//*****************************************************************************
#define USB_TXCSRL7_NAKTO       0x00000080U  // NAK Timeout
#define USB_TXCSRL7_CLRDT       0x00000040U  // Clear Data Toggle
#define USB_TXCSRL7_STALLED     0x00000020U  // Endpoint Stalled
#define USB_TXCSRL7_STALL       0x00000010U  // Send STALL
#define USB_TXCSRL7_SETUP       0x00000010U  // Setup Packet
#define USB_TXCSRL7_FLUSH       0x00000008U  // Flush FIFO
#define USB_TXCSRL7_ERROR       0x00000004U  // Error
#define USB_TXCSRL7_UNDRN       0x00000004U  // Underrun
#define USB_TXCSRL7_FIFONE      0x00000002U  // FIFO Not Empty
#define USB_TXCSRL7_TXRDY       0x00000001U  // Transmit Packet Ready

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXCSRH7 register.
//
//*****************************************************************************
#define USB_TXCSRH7_AUTOSET     0x00000080U  // Auto Set
#define USB_TXCSRH7_ISO         0x00000040U  // Isochronous Transfers
#define USB_TXCSRH7_MODE        0x00000020U  // Mode
#define USB_TXCSRH7_DMAEN       0x00000010U  // DMA Request Enable
#define USB_TXCSRH7_FDT         0x00000008U  // Force Data Toggle
#define USB_TXCSRH7_DMAMOD      0x00000004U  // DMA Request Mode
#define USB_TXCSRH7_DTWE        0x00000002U  // Data Toggle Write Enable
#define USB_TXCSRH7_DT          0x00000001U  // Data Toggle

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXMAXP7 register.
//
//*****************************************************************************
#define USB_RXMAXP7_MAXLOAD_M   0x000007FFU  // Maximum Payload
#define USB_RXMAXP7_MAXLOAD_S   0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXCSRL7 register.
//
//*****************************************************************************
#define USB_RXCSRL7_CLRDT       0x00000080U  // Clear Data Toggle
#define USB_RXCSRL7_STALLED     0x00000040U  // Endpoint Stalled
#define USB_RXCSRL7_REQPKT      0x00000020U  // Request Packet
#define USB_RXCSRL7_STALL       0x00000020U  // Send STALL
#define USB_RXCSRL7_FLUSH       0x00000010U  // Flush FIFO
#define USB_RXCSRL7_DATAERR     0x00000008U  // Data Error
#define USB_RXCSRL7_NAKTO       0x00000008U  // NAK Timeout
#define USB_RXCSRL7_ERROR       0x00000004U  // Error
#define USB_RXCSRL7_OVER        0x00000004U  // Overrun
#define USB_RXCSRL7_FULL        0x00000002U  // FIFO Full
#define USB_RXCSRL7_RXRDY       0x00000001U  // Receive Packet Ready

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXCSRH7 register.
//
//*****************************************************************************
#define USB_RXCSRH7_AUTOCL      0x00000080U  // Auto Clear
#define USB_RXCSRH7_ISO         0x00000040U  // Isochronous Transfers
#define USB_RXCSRH7_AUTORQ      0x00000040U  // Auto Request
#define USB_RXCSRH7_DMAEN       0x00000020U  // DMA Request Enable
#define USB_RXCSRH7_PIDERR      0x00000010U  // PID Error
#define USB_RXCSRH7_DISNYET     0x00000010U  // Disable NYET
#define USB_RXCSRH7_DMAMOD      0x00000008U  // DMA Request Mode
#define USB_RXCSRH7_DTWE        0x00000004U  // Data Toggle Write Enable
#define USB_RXCSRH7_DT          0x00000002U  // Data Toggle

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXCOUNT7 register.
//
//*****************************************************************************
#define USB_RXCOUNT7_COUNT_M    0x00001FFFU  // Receive Packet Count
#define USB_RXCOUNT7_COUNT_S    0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXTYPE7 register.
//
//*****************************************************************************
#define USB_TXTYPE7_SPEED_M     0x000000C0U  // Operating Speed
#define USB_TXTYPE7_SPEED_DFLT  0x00000000U  // Default
#define USB_TXTYPE7_SPEED_FULL  0x00000080U  // Full
#define USB_TXTYPE7_SPEED_LOW   0x000000C0U  // Low
#define USB_TXTYPE7_PROTO_M     0x00000030U  // Protocol
#define USB_TXTYPE7_PROTO_CTRL  0x00000000U  // Control
#define USB_TXTYPE7_PROTO_ISOC  0x00000010U  // Isochronous
#define USB_TXTYPE7_PROTO_BULK  0x00000020U  // Bulk
#define USB_TXTYPE7_PROTO_INT   0x00000030U  // Interrupt
#define USB_TXTYPE7_TEP_M       0x0000000FU  // Target Endpoint Number
#define USB_TXTYPE7_TEP_S       0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXINTERVAL7
// register.
//
//*****************************************************************************
#define USB_TXINTERVAL7_TXPOLL_M \
                                0x000000FFU  // TX Polling
#define USB_TXINTERVAL7_NAKLMT_M \
                                0x000000FFU  // NAK Limit
#define USB_TXINTERVAL7_NAKLMT_S \
                                0U
#define USB_TXINTERVAL7_TXPOLL_S \
                                0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXTYPE7 register.
//
//*****************************************************************************
#define USB_RXTYPE7_SPEED_M     0x000000C0U  // Operating Speed
#define USB_RXTYPE7_SPEED_DFLT  0x00000000U  // Default
#define USB_RXTYPE7_SPEED_FULL  0x00000080U  // Full
#define USB_RXTYPE7_SPEED_LOW   0x000000C0U  // Low
#define USB_RXTYPE7_PROTO_M     0x00000030U  // Protocol
#define USB_RXTYPE7_PROTO_CTRL  0x00000000U  // Control
#define USB_RXTYPE7_PROTO_ISOC  0x00000010U  // Isochronous
#define USB_RXTYPE7_PROTO_BULK  0x00000020U  // Bulk
#define USB_RXTYPE7_PROTO_INT   0x00000030U  // Interrupt
#define USB_RXTYPE7_TEP_M       0x0000000FU  // Target Endpoint Number
#define USB_RXTYPE7_TEP_S       0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXINTERVAL7
// register.
//
//*****************************************************************************
#define USB_RXINTERVAL7_TXPOLL_M \
                                0x000000FFU  // RX Polling
#define USB_RXINTERVAL7_NAKLMT_M \
                                0x000000FFU  // NAK Limit
#define USB_RXINTERVAL7_NAKLMT_S \
                                0U
#define USB_RXINTERVAL7_TXPOLL_S \
                                0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXMAXP8 register.
//
//*****************************************************************************
#define USB_TXMAXP8_MAXLOAD_M   0x000007FFU  // Maximum Payload
#define USB_TXMAXP8_MAXLOAD_S   0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXCSRL8 register.
//
//*****************************************************************************
#define USB_TXCSRL8_NAKTO       0x00000080U  // NAK Timeout
#define USB_TXCSRL8_CLRDT       0x00000040U  // Clear Data Toggle
#define USB_TXCSRL8_STALLED     0x00000020U  // Endpoint Stalled
#define USB_TXCSRL8_STALL       0x00000010U  // Send STALL
#define USB_TXCSRL8_SETUP       0x00000010U  // Setup Packet
#define USB_TXCSRL8_FLUSH       0x00000008U  // Flush FIFO
#define USB_TXCSRL8_ERROR       0x00000004U  // Error
#define USB_TXCSRL8_UNDRN       0x00000004U  // Underrun
#define USB_TXCSRL8_FIFONE      0x00000002U  // FIFO Not Empty
#define USB_TXCSRL8_TXRDY       0x00000001U  // Transmit Packet Ready

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXCSRH8 register.
//
//*****************************************************************************
#define USB_TXCSRH8_AUTOSET     0x00000080U  // Auto Set
#define USB_TXCSRH8_ISO         0x00000040U  // Isochronous Transfers
#define USB_TXCSRH8_MODE        0x00000020U  // Mode
#define USB_TXCSRH8_DMAEN       0x00000010U  // DMA Request Enable
#define USB_TXCSRH8_FDT         0x00000008U  // Force Data Toggle
#define USB_TXCSRH8_DMAMOD      0x00000004U  // DMA Request Mode
#define USB_TXCSRH8_DTWE        0x00000002U  // Data Toggle Write Enable
#define USB_TXCSRH8_DT          0x00000001U  // Data Toggle

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXMAXP8 register.
//
//*****************************************************************************
#define USB_RXMAXP8_MAXLOAD_M   0x000007FFU  // Maximum Payload
#define USB_RXMAXP8_MAXLOAD_S   0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXCSRL8 register.
//
//*****************************************************************************
#define USB_RXCSRL8_CLRDT       0x00000080U  // Clear Data Toggle
#define USB_RXCSRL8_STALLED     0x00000040U  // Endpoint Stalled
#define USB_RXCSRL8_STALL       0x00000020U  // Send STALL
#define USB_RXCSRL8_REQPKT      0x00000020U  // Request Packet
#define USB_RXCSRL8_FLUSH       0x00000010U  // Flush FIFO
#define USB_RXCSRL8_NAKTO       0x00000008U  // NAK Timeout
#define USB_RXCSRL8_DATAERR     0x00000008U  // Data Error
#define USB_RXCSRL8_OVER        0x00000004U  // Overrun
#define USB_RXCSRL8_ERROR       0x00000004U  // Error
#define USB_RXCSRL8_FULL        0x00000002U  // FIFO Full
#define USB_RXCSRL8_RXRDY       0x00000001U  // Receive Packet Ready

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXCSRH8 register.
//
//*****************************************************************************
#define USB_RXCSRH8_AUTOCL      0x00000080U  // Auto Clear
#define USB_RXCSRH8_AUTORQ      0x00000040U  // Auto Request
#define USB_RXCSRH8_ISO         0x00000040U  // Isochronous Transfers
#define USB_RXCSRH8_DMAEN       0x00000020U  // DMA Request Enable
#define USB_RXCSRH8_DISNYET     0x00000010U  // Disable NYET
#define USB_RXCSRH8_PIDERR      0x00000010U  // PID Error
#define USB_RXCSRH8_DMAMOD      0x00000008U  // DMA Request Mode
#define USB_RXCSRH8_DTWE        0x00000004U  // Data Toggle Write Enable
#define USB_RXCSRH8_DT          0x00000002U  // Data Toggle

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXCOUNT8 register.
//
//*****************************************************************************
#define USB_RXCOUNT8_COUNT_M    0x00001FFFU  // Receive Packet Count
#define USB_RXCOUNT8_COUNT_S    0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXTYPE8 register.
//
//*****************************************************************************
#define USB_TXTYPE8_SPEED_M     0x000000C0U  // Operating Speed
#define USB_TXTYPE8_SPEED_DFLT  0x00000000U  // Default
#define USB_TXTYPE8_SPEED_FULL  0x00000080U  // Full
#define USB_TXTYPE8_SPEED_LOW   0x000000C0U  // Low
#define USB_TXTYPE8_PROTO_M     0x00000030U  // Protocol
#define USB_TXTYPE8_PROTO_CTRL  0x00000000U  // Control
#define USB_TXTYPE8_PROTO_ISOC  0x00000010U  // Isochronous
#define USB_TXTYPE8_PROTO_BULK  0x00000020U  // Bulk
#define USB_TXTYPE8_PROTO_INT   0x00000030U  // Interrupt
#define USB_TXTYPE8_TEP_M       0x0000000FU  // Target Endpoint Number
#define USB_TXTYPE8_TEP_S       0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXINTERVAL8
// register.
//
//*****************************************************************************
#define USB_TXINTERVAL8_TXPOLL_M \
                                0x000000FFU  // TX Polling
#define USB_TXINTERVAL8_NAKLMT_M \
                                0x000000FFU  // NAK Limit
#define USB_TXINTERVAL8_NAKLMT_S \
                                0U
#define USB_TXINTERVAL8_TXPOLL_S \
                                0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXTYPE8 register.
//
//*****************************************************************************
#define USB_RXTYPE8_SPEED_M     0x000000C0U  // Operating Speed
#define USB_RXTYPE8_SPEED_DFLT  0x00000000U  // Default
#define USB_RXTYPE8_SPEED_FULL  0x00000080U  // Full
#define USB_RXTYPE8_SPEED_LOW   0x000000C0U  // Low
#define USB_RXTYPE8_PROTO_M     0x00000030U  // Protocol
#define USB_RXTYPE8_PROTO_CTRL  0x00000000U  // Control
#define USB_RXTYPE8_PROTO_ISOC  0x00000010U  // Isochronous
#define USB_RXTYPE8_PROTO_BULK  0x00000020U  // Bulk
#define USB_RXTYPE8_PROTO_INT   0x00000030U  // Interrupt
#define USB_RXTYPE8_TEP_M       0x0000000FU  // Target Endpoint Number
#define USB_RXTYPE8_TEP_S       0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXINTERVAL8
// register.
//
//*****************************************************************************
#define USB_RXINTERVAL8_NAKLMT_M \
                                0x000000FFU  // NAK Limit
#define USB_RXINTERVAL8_TXPOLL_M \
                                0x000000FFU  // RX Polling
#define USB_RXINTERVAL8_NAKLMT_S \
                                0U
#define USB_RXINTERVAL8_TXPOLL_S \
                                0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXMAXP9 register.
//
//*****************************************************************************
#define USB_TXMAXP9_MAXLOAD_M   0x000007FFU  // Maximum Payload
#define USB_TXMAXP9_MAXLOAD_S   0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXCSRL9 register.
//
//*****************************************************************************
#define USB_TXCSRL9_NAKTO       0x00000080U  // NAK Timeout
#define USB_TXCSRL9_CLRDT       0x00000040U  // Clear Data Toggle
#define USB_TXCSRL9_STALLED     0x00000020U  // Endpoint Stalled
#define USB_TXCSRL9_SETUP       0x00000010U  // Setup Packet
#define USB_TXCSRL9_STALL       0x00000010U  // Send STALL
#define USB_TXCSRL9_FLUSH       0x00000008U  // Flush FIFO
#define USB_TXCSRL9_ERROR       0x00000004U  // Error
#define USB_TXCSRL9_UNDRN       0x00000004U  // Underrun
#define USB_TXCSRL9_FIFONE      0x00000002U  // FIFO Not Empty
#define USB_TXCSRL9_TXRDY       0x00000001U  // Transmit Packet Ready

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXCSRH9 register.
//
//*****************************************************************************
#define USB_TXCSRH9_AUTOSET     0x00000080U  // Auto Set
#define USB_TXCSRH9_ISO         0x00000040U  // Isochronous Transfers
#define USB_TXCSRH9_MODE        0x00000020U  // Mode
#define USB_TXCSRH9_DMAEN       0x00000010U  // DMA Request Enable
#define USB_TXCSRH9_FDT         0x00000008U  // Force Data Toggle
#define USB_TXCSRH9_DMAMOD      0x00000004U  // DMA Request Mode
#define USB_TXCSRH9_DTWE        0x00000002U  // Data Toggle Write Enable
#define USB_TXCSRH9_DT          0x00000001U  // Data Toggle

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXMAXP9 register.
//
//*****************************************************************************
#define USB_RXMAXP9_MAXLOAD_M   0x000007FFU  // Maximum Payload
#define USB_RXMAXP9_MAXLOAD_S   0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXCSRL9 register.
//
//*****************************************************************************
#define USB_RXCSRL9_CLRDT       0x00000080U  // Clear Data Toggle
#define USB_RXCSRL9_STALLED     0x00000040U  // Endpoint Stalled
#define USB_RXCSRL9_STALL       0x00000020U  // Send STALL
#define USB_RXCSRL9_REQPKT      0x00000020U  // Request Packet
#define USB_RXCSRL9_FLUSH       0x00000010U  // Flush FIFO
#define USB_RXCSRL9_DATAERR     0x00000008U  // Data Error
#define USB_RXCSRL9_NAKTO       0x00000008U  // NAK Timeout
#define USB_RXCSRL9_ERROR       0x00000004U  // Error
#define USB_RXCSRL9_OVER        0x00000004U  // Overrun
#define USB_RXCSRL9_FULL        0x00000002U  // FIFO Full
#define USB_RXCSRL9_RXRDY       0x00000001U  // Receive Packet Ready

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXCSRH9 register.
//
//*****************************************************************************
#define USB_RXCSRH9_AUTOCL      0x00000080U  // Auto Clear
#define USB_RXCSRH9_ISO         0x00000040U  // Isochronous Transfers
#define USB_RXCSRH9_AUTORQ      0x00000040U  // Auto Request
#define USB_RXCSRH9_DMAEN       0x00000020U  // DMA Request Enable
#define USB_RXCSRH9_PIDERR      0x00000010U  // PID Error
#define USB_RXCSRH9_DISNYET     0x00000010U  // Disable NYET
#define USB_RXCSRH9_DMAMOD      0x00000008U  // DMA Request Mode
#define USB_RXCSRH9_DTWE        0x00000004U  // Data Toggle Write Enable
#define USB_RXCSRH9_DT          0x00000002U  // Data Toggle

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXCOUNT9 register.
//
//*****************************************************************************
#define USB_RXCOUNT9_COUNT_M    0x00001FFFU  // Receive Packet Count
#define USB_RXCOUNT9_COUNT_S    0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXTYPE9 register.
//
//*****************************************************************************
#define USB_TXTYPE9_SPEED_M     0x000000C0U  // Operating Speed
#define USB_TXTYPE9_SPEED_DFLT  0x00000000U  // Default
#define USB_TXTYPE9_SPEED_FULL  0x00000080U  // Full
#define USB_TXTYPE9_SPEED_LOW   0x000000C0U  // Low
#define USB_TXTYPE9_PROTO_M     0x00000030U  // Protocol
#define USB_TXTYPE9_PROTO_CTRL  0x00000000U  // Control
#define USB_TXTYPE9_PROTO_ISOC  0x00000010U  // Isochronous
#define USB_TXTYPE9_PROTO_BULK  0x00000020U  // Bulk
#define USB_TXTYPE9_PROTO_INT   0x00000030U  // Interrupt
#define USB_TXTYPE9_TEP_M       0x0000000FU  // Target Endpoint Number
#define USB_TXTYPE9_TEP_S       0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXINTERVAL9
// register.
//
//*****************************************************************************
#define USB_TXINTERVAL9_TXPOLL_M \
                                0x000000FFU  // TX Polling
#define USB_TXINTERVAL9_NAKLMT_M \
                                0x000000FFU  // NAK Limit
#define USB_TXINTERVAL9_TXPOLL_S \
                                0U
#define USB_TXINTERVAL9_NAKLMT_S \
                                0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXTYPE9 register.
//
//*****************************************************************************
#define USB_RXTYPE9_SPEED_M     0x000000C0U  // Operating Speed
#define USB_RXTYPE9_SPEED_DFLT  0x00000000U  // Default
#define USB_RXTYPE9_SPEED_FULL  0x00000080U  // Full
#define USB_RXTYPE9_SPEED_LOW   0x000000C0U  // Low
#define USB_RXTYPE9_PROTO_M     0x00000030U  // Protocol
#define USB_RXTYPE9_PROTO_CTRL  0x00000000U  // Control
#define USB_RXTYPE9_PROTO_ISOC  0x00000010U  // Isochronous
#define USB_RXTYPE9_PROTO_BULK  0x00000020U  // Bulk
#define USB_RXTYPE9_PROTO_INT   0x00000030U  // Interrupt
#define USB_RXTYPE9_TEP_M       0x0000000FU  // Target Endpoint Number
#define USB_RXTYPE9_TEP_S       0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXINTERVAL9
// register.
//
//*****************************************************************************
#define USB_RXINTERVAL9_TXPOLL_M \
                                0x000000FFU  // RX Polling
#define USB_RXINTERVAL9_NAKLMT_M \
                                0x000000FFU  // NAK Limit
#define USB_RXINTERVAL9_NAKLMT_S \
                                0U
#define USB_RXINTERVAL9_TXPOLL_S \
                                0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXMAXP10 register.
//
//*****************************************************************************
#define USB_TXMAXP10_MAXLOAD_M  0x000007FFU  // Maximum Payload
#define USB_TXMAXP10_MAXLOAD_S  0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXCSRL10 register.
//
//*****************************************************************************
#define USB_TXCSRL10_NAKTO      0x00000080U  // NAK Timeout
#define USB_TXCSRL10_CLRDT      0x00000040U  // Clear Data Toggle
#define USB_TXCSRL10_STALLED    0x00000020U  // Endpoint Stalled
#define USB_TXCSRL10_SETUP      0x00000010U  // Setup Packet
#define USB_TXCSRL10_STALL      0x00000010U  // Send STALL
#define USB_TXCSRL10_FLUSH      0x00000008U  // Flush FIFO
#define USB_TXCSRL10_UNDRN      0x00000004U  // Underrun
#define USB_TXCSRL10_ERROR      0x00000004U  // Error
#define USB_TXCSRL10_FIFONE     0x00000002U  // FIFO Not Empty
#define USB_TXCSRL10_TXRDY      0x00000001U  // Transmit Packet Ready

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXCSRH10 register.
//
//*****************************************************************************
#define USB_TXCSRH10_AUTOSET    0x00000080U  // Auto Set
#define USB_TXCSRH10_ISO        0x00000040U  // Isochronous Transfers
#define USB_TXCSRH10_MODE       0x00000020U  // Mode
#define USB_TXCSRH10_DMAEN      0x00000010U  // DMA Request Enable
#define USB_TXCSRH10_FDT        0x00000008U  // Force Data Toggle
#define USB_TXCSRH10_DMAMOD     0x00000004U  // DMA Request Mode
#define USB_TXCSRH10_DTWE       0x00000002U  // Data Toggle Write Enable
#define USB_TXCSRH10_DT         0x00000001U  // Data Toggle

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXMAXP10 register.
//
//*****************************************************************************
#define USB_RXMAXP10_MAXLOAD_M  0x000007FFU  // Maximum Payload
#define USB_RXMAXP10_MAXLOAD_S  0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXCSRL10 register.
//
//*****************************************************************************
#define USB_RXCSRL10_CLRDT      0x00000080U  // Clear Data Toggle
#define USB_RXCSRL10_STALLED    0x00000040U  // Endpoint Stalled
#define USB_RXCSRL10_STALL      0x00000020U  // Send STALL
#define USB_RXCSRL10_REQPKT     0x00000020U  // Request Packet
#define USB_RXCSRL10_FLUSH      0x00000010U  // Flush FIFO
#define USB_RXCSRL10_NAKTO      0x00000008U  // NAK Timeout
#define USB_RXCSRL10_DATAERR    0x00000008U  // Data Error
#define USB_RXCSRL10_OVER       0x00000004U  // Overrun
#define USB_RXCSRL10_ERROR      0x00000004U  // Error
#define USB_RXCSRL10_FULL       0x00000002U  // FIFO Full
#define USB_RXCSRL10_RXRDY      0x00000001U  // Receive Packet Ready

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXCSRH10 register.
//
//*****************************************************************************
#define USB_RXCSRH10_AUTOCL     0x00000080U  // Auto Clear
#define USB_RXCSRH10_AUTORQ     0x00000040U  // Auto Request
#define USB_RXCSRH10_ISO        0x00000040U  // Isochronous Transfers
#define USB_RXCSRH10_DMAEN      0x00000020U  // DMA Request Enable
#define USB_RXCSRH10_PIDERR     0x00000010U  // PID Error
#define USB_RXCSRH10_DISNYET    0x00000010U  // Disable NYET
#define USB_RXCSRH10_DMAMOD     0x00000008U  // DMA Request Mode
#define USB_RXCSRH10_DTWE       0x00000004U  // Data Toggle Write Enable
#define USB_RXCSRH10_DT         0x00000002U  // Data Toggle

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXCOUNT10
// register.
//
//*****************************************************************************
#define USB_RXCOUNT10_COUNT_M   0x00001FFFU  // Receive Packet Count
#define USB_RXCOUNT10_COUNT_S   0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXTYPE10 register.
//
//*****************************************************************************
#define USB_TXTYPE10_SPEED_M    0x000000C0U  // Operating Speed
#define USB_TXTYPE10_SPEED_DFLT 0x00000000U  // Default
#define USB_TXTYPE10_SPEED_FULL 0x00000080U  // Full
#define USB_TXTYPE10_SPEED_LOW  0x000000C0U  // Low
#define USB_TXTYPE10_PROTO_M    0x00000030U  // Protocol
#define USB_TXTYPE10_PROTO_CTRL 0x00000000U  // Control
#define USB_TXTYPE10_PROTO_ISOC 0x00000010U  // Isochronous
#define USB_TXTYPE10_PROTO_BULK 0x00000020U  // Bulk
#define USB_TXTYPE10_PROTO_INT  0x00000030U  // Interrupt
#define USB_TXTYPE10_TEP_M      0x0000000FU  // Target Endpoint Number
#define USB_TXTYPE10_TEP_S      0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXINTERVAL10
// register.
//
//*****************************************************************************
#define USB_TXINTERVAL10_NAKLMT_M \
                                0x000000FFU  // NAK Limit
#define USB_TXINTERVAL10_TXPOLL_M \
                                0x000000FFU  // TX Polling
#define USB_TXINTERVAL10_TXPOLL_S \
                                0U
#define USB_TXINTERVAL10_NAKLMT_S \
                                0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXTYPE10 register.
//
//*****************************************************************************
#define USB_RXTYPE10_SPEED_M    0x000000C0U  // Operating Speed
#define USB_RXTYPE10_SPEED_DFLT 0x00000000U  // Default
#define USB_RXTYPE10_SPEED_FULL 0x00000080U  // Full
#define USB_RXTYPE10_SPEED_LOW  0x000000C0U  // Low
#define USB_RXTYPE10_PROTO_M    0x00000030U  // Protocol
#define USB_RXTYPE10_PROTO_CTRL 0x00000000U  // Control
#define USB_RXTYPE10_PROTO_ISOC 0x00000010U  // Isochronous
#define USB_RXTYPE10_PROTO_BULK 0x00000020U  // Bulk
#define USB_RXTYPE10_PROTO_INT  0x00000030U  // Interrupt
#define USB_RXTYPE10_TEP_M      0x0000000FU  // Target Endpoint Number
#define USB_RXTYPE10_TEP_S      0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXINTERVAL10
// register.
//
//*****************************************************************************
#define USB_RXINTERVAL10_NAKLMT_M \
                                0x000000FFU  // NAK Limit
#define USB_RXINTERVAL10_TXPOLL_M \
                                0x000000FFU  // RX Polling
#define USB_RXINTERVAL10_TXPOLL_S \
                                0U
#define USB_RXINTERVAL10_NAKLMT_S \
                                0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXMAXP11 register.
//
//*****************************************************************************
#define USB_TXMAXP11_MAXLOAD_M  0x000007FFU  // Maximum Payload
#define USB_TXMAXP11_MAXLOAD_S  0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXCSRL11 register.
//
//*****************************************************************************
#define USB_TXCSRL11_NAKTO      0x00000080U  // NAK Timeout
#define USB_TXCSRL11_CLRDT      0x00000040U  // Clear Data Toggle
#define USB_TXCSRL11_STALLED    0x00000020U  // Endpoint Stalled
#define USB_TXCSRL11_STALL      0x00000010U  // Send STALL
#define USB_TXCSRL11_SETUP      0x00000010U  // Setup Packet
#define USB_TXCSRL11_FLUSH      0x00000008U  // Flush FIFO
#define USB_TXCSRL11_ERROR      0x00000004U  // Error
#define USB_TXCSRL11_UNDRN      0x00000004U  // Underrun
#define USB_TXCSRL11_FIFONE     0x00000002U  // FIFO Not Empty
#define USB_TXCSRL11_TXRDY      0x00000001U  // Transmit Packet Ready

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXCSRH11 register.
//
//*****************************************************************************
#define USB_TXCSRH11_AUTOSET    0x00000080U  // Auto Set
#define USB_TXCSRH11_ISO        0x00000040U  // Isochronous Transfers
#define USB_TXCSRH11_MODE       0x00000020U  // Mode
#define USB_TXCSRH11_DMAEN      0x00000010U  // DMA Request Enable
#define USB_TXCSRH11_FDT        0x00000008U  // Force Data Toggle
#define USB_TXCSRH11_DMAMOD     0x00000004U  // DMA Request Mode
#define USB_TXCSRH11_DTWE       0x00000002U  // Data Toggle Write Enable
#define USB_TXCSRH11_DT         0x00000001U  // Data Toggle

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXMAXP11 register.
//
//*****************************************************************************
#define USB_RXMAXP11_MAXLOAD_M  0x000007FFU  // Maximum Payload
#define USB_RXMAXP11_MAXLOAD_S  0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXCSRL11 register.
//
//*****************************************************************************
#define USB_RXCSRL11_CLRDT      0x00000080U  // Clear Data Toggle
#define USB_RXCSRL11_STALLED    0x00000040U  // Endpoint Stalled
#define USB_RXCSRL11_STALL      0x00000020U  // Send STALL
#define USB_RXCSRL11_REQPKT     0x00000020U  // Request Packet
#define USB_RXCSRL11_FLUSH      0x00000010U  // Flush FIFO
#define USB_RXCSRL11_DATAERR    0x00000008U  // Data Error
#define USB_RXCSRL11_NAKTO      0x00000008U  // NAK Timeout
#define USB_RXCSRL11_OVER       0x00000004U  // Overrun
#define USB_RXCSRL11_ERROR      0x00000004U  // Error
#define USB_RXCSRL11_FULL       0x00000002U  // FIFO Full
#define USB_RXCSRL11_RXRDY      0x00000001U  // Receive Packet Ready

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXCSRH11 register.
//
//*****************************************************************************
#define USB_RXCSRH11_AUTOCL     0x00000080U  // Auto Clear
#define USB_RXCSRH11_ISO        0x00000040U  // Isochronous Transfers
#define USB_RXCSRH11_AUTORQ     0x00000040U  // Auto Request
#define USB_RXCSRH11_DMAEN      0x00000020U  // DMA Request Enable
#define USB_RXCSRH11_DISNYET    0x00000010U  // Disable NYET
#define USB_RXCSRH11_PIDERR     0x00000010U  // PID Error
#define USB_RXCSRH11_DMAMOD     0x00000008U  // DMA Request Mode
#define USB_RXCSRH11_DTWE       0x00000004U  // Data Toggle Write Enable
#define USB_RXCSRH11_DT         0x00000002U  // Data Toggle

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXCOUNT11
// register.
//
//*****************************************************************************
#define USB_RXCOUNT11_COUNT_M   0x00001FFFU  // Receive Packet Count
#define USB_RXCOUNT11_COUNT_S   0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXTYPE11 register.
//
//*****************************************************************************
#define USB_TXTYPE11_SPEED_M    0x000000C0U  // Operating Speed
#define USB_TXTYPE11_SPEED_DFLT 0x00000000U  // Default
#define USB_TXTYPE11_SPEED_FULL 0x00000080U  // Full
#define USB_TXTYPE11_SPEED_LOW  0x000000C0U  // Low
#define USB_TXTYPE11_PROTO_M    0x00000030U  // Protocol
#define USB_TXTYPE11_PROTO_CTRL 0x00000000U  // Control
#define USB_TXTYPE11_PROTO_ISOC 0x00000010U  // Isochronous
#define USB_TXTYPE11_PROTO_BULK 0x00000020U  // Bulk
#define USB_TXTYPE11_PROTO_INT  0x00000030U  // Interrupt
#define USB_TXTYPE11_TEP_M      0x0000000FU  // Target Endpoint Number
#define USB_TXTYPE11_TEP_S      0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXINTERVAL11
// register.
//
//*****************************************************************************
#define USB_TXINTERVAL11_TXPOLL_M \
                                0x000000FFU  // TX Polling
#define USB_TXINTERVAL11_NAKLMT_M \
                                0x000000FFU  // NAK Limit
#define USB_TXINTERVAL11_NAKLMT_S \
                                0U
#define USB_TXINTERVAL11_TXPOLL_S \
                                0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXTYPE11 register.
//
//*****************************************************************************
#define USB_RXTYPE11_SPEED_M    0x000000C0U  // Operating Speed
#define USB_RXTYPE11_SPEED_DFLT 0x00000000U  // Default
#define USB_RXTYPE11_SPEED_FULL 0x00000080U  // Full
#define USB_RXTYPE11_SPEED_LOW  0x000000C0U  // Low
#define USB_RXTYPE11_PROTO_M    0x00000030U  // Protocol
#define USB_RXTYPE11_PROTO_CTRL 0x00000000U  // Control
#define USB_RXTYPE11_PROTO_ISOC 0x00000010U  // Isochronous
#define USB_RXTYPE11_PROTO_BULK 0x00000020U  // Bulk
#define USB_RXTYPE11_PROTO_INT  0x00000030U  // Interrupt
#define USB_RXTYPE11_TEP_M      0x0000000FU  // Target Endpoint Number
#define USB_RXTYPE11_TEP_S      0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXINTERVAL11
// register.
//
//*****************************************************************************
#define USB_RXINTERVAL11_NAKLMT_M \
                                0x000000FFU  // NAK Limit
#define USB_RXINTERVAL11_TXPOLL_M \
                                0x000000FFU  // RX Polling
#define USB_RXINTERVAL11_TXPOLL_S \
                                0U
#define USB_RXINTERVAL11_NAKLMT_S \
                                0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXMAXP12 register.
//
//*****************************************************************************
#define USB_TXMAXP12_MAXLOAD_M  0x000007FFU  // Maximum Payload
#define USB_TXMAXP12_MAXLOAD_S  0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXCSRL12 register.
//
//*****************************************************************************
#define USB_TXCSRL12_NAKTO      0x00000080U  // NAK Timeout
#define USB_TXCSRL12_CLRDT      0x00000040U  // Clear Data Toggle
#define USB_TXCSRL12_STALLED    0x00000020U  // Endpoint Stalled
#define USB_TXCSRL12_SETUP      0x00000010U  // Setup Packet
#define USB_TXCSRL12_STALL      0x00000010U  // Send STALL
#define USB_TXCSRL12_FLUSH      0x00000008U  // Flush FIFO
#define USB_TXCSRL12_UNDRN      0x00000004U  // Underrun
#define USB_TXCSRL12_ERROR      0x00000004U  // Error
#define USB_TXCSRL12_FIFONE     0x00000002U  // FIFO Not Empty
#define USB_TXCSRL12_TXRDY      0x00000001U  // Transmit Packet Ready

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXCSRH12 register.
//
//*****************************************************************************
#define USB_TXCSRH12_AUTOSET    0x00000080U  // Auto Set
#define USB_TXCSRH12_ISO        0x00000040U  // Isochronous Transfers
#define USB_TXCSRH12_MODE       0x00000020U  // Mode
#define USB_TXCSRH12_DMAEN      0x00000010U  // DMA Request Enable
#define USB_TXCSRH12_FDT        0x00000008U  // Force Data Toggle
#define USB_TXCSRH12_DMAMOD     0x00000004U  // DMA Request Mode
#define USB_TXCSRH12_DTWE       0x00000002U  // Data Toggle Write Enable
#define USB_TXCSRH12_DT         0x00000001U  // Data Toggle

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXMAXP12 register.
//
//*****************************************************************************
#define USB_RXMAXP12_MAXLOAD_M  0x000007FFU  // Maximum Payload
#define USB_RXMAXP12_MAXLOAD_S  0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXCSRL12 register.
//
//*****************************************************************************
#define USB_RXCSRL12_CLRDT      0x00000080U  // Clear Data Toggle
#define USB_RXCSRL12_STALLED    0x00000040U  // Endpoint Stalled
#define USB_RXCSRL12_STALL      0x00000020U  // Send STALL
#define USB_RXCSRL12_REQPKT     0x00000020U  // Request Packet
#define USB_RXCSRL12_FLUSH      0x00000010U  // Flush FIFO
#define USB_RXCSRL12_NAKTO      0x00000008U  // NAK Timeout
#define USB_RXCSRL12_DATAERR    0x00000008U  // Data Error
#define USB_RXCSRL12_ERROR      0x00000004U  // Error
#define USB_RXCSRL12_OVER       0x00000004U  // Overrun
#define USB_RXCSRL12_FULL       0x00000002U  // FIFO Full
#define USB_RXCSRL12_RXRDY      0x00000001U  // Receive Packet Ready

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXCSRH12 register.
//
//*****************************************************************************
#define USB_RXCSRH12_AUTOCL     0x00000080U  // Auto Clear
#define USB_RXCSRH12_ISO        0x00000040U  // Isochronous Transfers
#define USB_RXCSRH12_AUTORQ     0x00000040U  // Auto Request
#define USB_RXCSRH12_DMAEN      0x00000020U  // DMA Request Enable
#define USB_RXCSRH12_PIDERR     0x00000010U  // PID Error
#define USB_RXCSRH12_DISNYET    0x00000010U  // Disable NYET
#define USB_RXCSRH12_DMAMOD     0x00000008U  // DMA Request Mode
#define USB_RXCSRH12_DTWE       0x00000004U  // Data Toggle Write Enable
#define USB_RXCSRH12_DT         0x00000002U  // Data Toggle

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXCOUNT12
// register.
//
//*****************************************************************************
#define USB_RXCOUNT12_COUNT_M   0x00001FFFU  // Receive Packet Count
#define USB_RXCOUNT12_COUNT_S   0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXTYPE12 register.
//
//*****************************************************************************
#define USB_TXTYPE12_SPEED_M    0x000000C0U  // Operating Speed
#define USB_TXTYPE12_SPEED_DFLT 0x00000000U  // Default
#define USB_TXTYPE12_SPEED_FULL 0x00000080U  // Full
#define USB_TXTYPE12_SPEED_LOW  0x000000C0U  // Low
#define USB_TXTYPE12_PROTO_M    0x00000030U  // Protocol
#define USB_TXTYPE12_PROTO_CTRL 0x00000000U  // Control
#define USB_TXTYPE12_PROTO_ISOC 0x00000010U  // Isochronous
#define USB_TXTYPE12_PROTO_BULK 0x00000020U  // Bulk
#define USB_TXTYPE12_PROTO_INT  0x00000030U  // Interrupt
#define USB_TXTYPE12_TEP_M      0x0000000FU  // Target Endpoint Number
#define USB_TXTYPE12_TEP_S      0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXINTERVAL12
// register.
//
//*****************************************************************************
#define USB_TXINTERVAL12_TXPOLL_M \
                                0x000000FFU  // TX Polling
#define USB_TXINTERVAL12_NAKLMT_M \
                                0x000000FFU  // NAK Limit
#define USB_TXINTERVAL12_TXPOLL_S \
                                0U
#define USB_TXINTERVAL12_NAKLMT_S \
                                0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXTYPE12 register.
//
//*****************************************************************************
#define USB_RXTYPE12_SPEED_M    0x000000C0U  // Operating Speed
#define USB_RXTYPE12_SPEED_DFLT 0x00000000U  // Default
#define USB_RXTYPE12_SPEED_FULL 0x00000080U  // Full
#define USB_RXTYPE12_SPEED_LOW  0x000000C0U  // Low
#define USB_RXTYPE12_PROTO_M    0x00000030U  // Protocol
#define USB_RXTYPE12_PROTO_CTRL 0x00000000U  // Control
#define USB_RXTYPE12_PROTO_ISOC 0x00000010U  // Isochronous
#define USB_RXTYPE12_PROTO_BULK 0x00000020U  // Bulk
#define USB_RXTYPE12_PROTO_INT  0x00000030U  // Interrupt
#define USB_RXTYPE12_TEP_M      0x0000000FU  // Target Endpoint Number
#define USB_RXTYPE12_TEP_S      0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXINTERVAL12
// register.
//
//*****************************************************************************
#define USB_RXINTERVAL12_NAKLMT_M \
                                0x000000FFU  // NAK Limit
#define USB_RXINTERVAL12_TXPOLL_M \
                                0x000000FFU  // RX Polling
#define USB_RXINTERVAL12_NAKLMT_S \
                                0U
#define USB_RXINTERVAL12_TXPOLL_S \
                                0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXMAXP13 register.
//
//*****************************************************************************
#define USB_TXMAXP13_MAXLOAD_M  0x000007FFU  // Maximum Payload
#define USB_TXMAXP13_MAXLOAD_S  0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXCSRL13 register.
//
//*****************************************************************************
#define USB_TXCSRL13_NAKTO      0x00000080U  // NAK Timeout
#define USB_TXCSRL13_CLRDT      0x00000040U  // Clear Data Toggle
#define USB_TXCSRL13_STALLED    0x00000020U  // Endpoint Stalled
#define USB_TXCSRL13_SETUP      0x00000010U  // Setup Packet
#define USB_TXCSRL13_STALL      0x00000010U  // Send STALL
#define USB_TXCSRL13_FLUSH      0x00000008U  // Flush FIFO
#define USB_TXCSRL13_UNDRN      0x00000004U  // Underrun
#define USB_TXCSRL13_ERROR      0x00000004U  // Error
#define USB_TXCSRL13_FIFONE     0x00000002U  // FIFO Not Empty
#define USB_TXCSRL13_TXRDY      0x00000001U  // Transmit Packet Ready

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXCSRH13 register.
//
//*****************************************************************************
#define USB_TXCSRH13_AUTOSET    0x00000080U  // Auto Set
#define USB_TXCSRH13_ISO        0x00000040U  // Isochronous Transfers
#define USB_TXCSRH13_MODE       0x00000020U  // Mode
#define USB_TXCSRH13_DMAEN      0x00000010U  // DMA Request Enable
#define USB_TXCSRH13_FDT        0x00000008U  // Force Data Toggle
#define USB_TXCSRH13_DMAMOD     0x00000004U  // DMA Request Mode
#define USB_TXCSRH13_DTWE       0x00000002U  // Data Toggle Write Enable
#define USB_TXCSRH13_DT         0x00000001U  // Data Toggle

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXMAXP13 register.
//
//*****************************************************************************
#define USB_RXMAXP13_MAXLOAD_M  0x000007FFU  // Maximum Payload
#define USB_RXMAXP13_MAXLOAD_S  0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXCSRL13 register.
//
//*****************************************************************************
#define USB_RXCSRL13_CLRDT      0x00000080U  // Clear Data Toggle
#define USB_RXCSRL13_STALLED    0x00000040U  // Endpoint Stalled
#define USB_RXCSRL13_REQPKT     0x00000020U  // Request Packet
#define USB_RXCSRL13_STALL      0x00000020U  // Send STALL
#define USB_RXCSRL13_FLUSH      0x00000010U  // Flush FIFO
#define USB_RXCSRL13_NAKTO      0x00000008U  // NAK Timeout
#define USB_RXCSRL13_DATAERR    0x00000008U  // Data Error
#define USB_RXCSRL13_OVER       0x00000004U  // Overrun
#define USB_RXCSRL13_ERROR      0x00000004U  // Error
#define USB_RXCSRL13_FULL       0x00000002U  // FIFO Full
#define USB_RXCSRL13_RXRDY      0x00000001U  // Receive Packet Ready

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXCSRH13 register.
//
//*****************************************************************************
#define USB_RXCSRH13_AUTOCL     0x00000080U  // Auto Clear
#define USB_RXCSRH13_ISO        0x00000040U  // Isochronous Transfers
#define USB_RXCSRH13_AUTORQ     0x00000040U  // Auto Request
#define USB_RXCSRH13_DMAEN      0x00000020U  // DMA Request Enable
#define USB_RXCSRH13_DISNYET    0x00000010U  // Disable NYET
#define USB_RXCSRH13_PIDERR     0x00000010U  // PID Error
#define USB_RXCSRH13_DMAMOD     0x00000008U  // DMA Request Mode
#define USB_RXCSRH13_DTWE       0x00000004U  // Data Toggle Write Enable
#define USB_RXCSRH13_DT         0x00000002U  // Data Toggle

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXCOUNT13
// register.
//
//*****************************************************************************
#define USB_RXCOUNT13_COUNT_M   0x00001FFFU  // Receive Packet Count
#define USB_RXCOUNT13_COUNT_S   0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXTYPE13 register.
//
//*****************************************************************************
#define USB_TXTYPE13_SPEED_M    0x000000C0U  // Operating Speed
#define USB_TXTYPE13_SPEED_DFLT 0x00000000U  // Default
#define USB_TXTYPE13_SPEED_FULL 0x00000080U  // Full
#define USB_TXTYPE13_SPEED_LOW  0x000000C0U  // Low
#define USB_TXTYPE13_PROTO_M    0x00000030U  // Protocol
#define USB_TXTYPE13_PROTO_CTRL 0x00000000U  // Control
#define USB_TXTYPE13_PROTO_ISOC 0x00000010U  // Isochronous
#define USB_TXTYPE13_PROTO_BULK 0x00000020U  // Bulk
#define USB_TXTYPE13_PROTO_INT  0x00000030U  // Interrupt
#define USB_TXTYPE13_TEP_M      0x0000000FU  // Target Endpoint Number
#define USB_TXTYPE13_TEP_S      0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXINTERVAL13
// register.
//
//*****************************************************************************
#define USB_TXINTERVAL13_NAKLMT_M \
                                0x000000FFU  // NAK Limit
#define USB_TXINTERVAL13_TXPOLL_M \
                                0x000000FFU  // TX Polling
#define USB_TXINTERVAL13_TXPOLL_S \
                                0U
#define USB_TXINTERVAL13_NAKLMT_S \
                                0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXTYPE13 register.
//
//*****************************************************************************
#define USB_RXTYPE13_SPEED_M    0x000000C0U  // Operating Speed
#define USB_RXTYPE13_SPEED_DFLT 0x00000000U  // Default
#define USB_RXTYPE13_SPEED_FULL 0x00000080U  // Full
#define USB_RXTYPE13_SPEED_LOW  0x000000C0U  // Low
#define USB_RXTYPE13_PROTO_M    0x00000030U  // Protocol
#define USB_RXTYPE13_PROTO_CTRL 0x00000000U  // Control
#define USB_RXTYPE13_PROTO_ISOC 0x00000010U  // Isochronous
#define USB_RXTYPE13_PROTO_BULK 0x00000020U  // Bulk
#define USB_RXTYPE13_PROTO_INT  0x00000030U  // Interrupt
#define USB_RXTYPE13_TEP_M      0x0000000FU  // Target Endpoint Number
#define USB_RXTYPE13_TEP_S      0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXINTERVAL13
// register.
//
//*****************************************************************************
#define USB_RXINTERVAL13_TXPOLL_M \
                                0x000000FFU  // RX Polling
#define USB_RXINTERVAL13_NAKLMT_M \
                                0x000000FFU  // NAK Limit
#define USB_RXINTERVAL13_TXPOLL_S \
                                0U
#define USB_RXINTERVAL13_NAKLMT_S \
                                0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXMAXP14 register.
//
//*****************************************************************************
#define USB_TXMAXP14_MAXLOAD_M  0x000007FFU  // Maximum Payload
#define USB_TXMAXP14_MAXLOAD_S  0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXCSRL14 register.
//
//*****************************************************************************
#define USB_TXCSRL14_NAKTO      0x00000080U  // NAK Timeout
#define USB_TXCSRL14_CLRDT      0x00000040U  // Clear Data Toggle
#define USB_TXCSRL14_STALLED    0x00000020U  // Endpoint Stalled
#define USB_TXCSRL14_STALL      0x00000010U  // Send STALL
#define USB_TXCSRL14_SETUP      0x00000010U  // Setup Packet
#define USB_TXCSRL14_FLUSH      0x00000008U  // Flush FIFO
#define USB_TXCSRL14_ERROR      0x00000004U  // Error
#define USB_TXCSRL14_UNDRN      0x00000004U  // Underrun
#define USB_TXCSRL14_FIFONE     0x00000002U  // FIFO Not Empty
#define USB_TXCSRL14_TXRDY      0x00000001U  // Transmit Packet Ready

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXCSRH14 register.
//
//*****************************************************************************
#define USB_TXCSRH14_AUTOSET    0x00000080U  // Auto Set
#define USB_TXCSRH14_ISO        0x00000040U  // Isochronous Transfers
#define USB_TXCSRH14_MODE       0x00000020U  // Mode
#define USB_TXCSRH14_DMAEN      0x00000010U  // DMA Request Enable
#define USB_TXCSRH14_FDT        0x00000008U  // Force Data Toggle
#define USB_TXCSRH14_DMAMOD     0x00000004U  // DMA Request Mode
#define USB_TXCSRH14_DTWE       0x00000002U  // Data Toggle Write Enable
#define USB_TXCSRH14_DT         0x00000001U  // Data Toggle

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXMAXP14 register.
//
//*****************************************************************************
#define USB_RXMAXP14_MAXLOAD_M  0x000007FFU  // Maximum Payload
#define USB_RXMAXP14_MAXLOAD_S  0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXCSRL14 register.
//
//*****************************************************************************
#define USB_RXCSRL14_CLRDT      0x00000080U  // Clear Data Toggle
#define USB_RXCSRL14_STALLED    0x00000040U  // Endpoint Stalled
#define USB_RXCSRL14_REQPKT     0x00000020U  // Request Packet
#define USB_RXCSRL14_STALL      0x00000020U  // Send STALL
#define USB_RXCSRL14_FLUSH      0x00000010U  // Flush FIFO
#define USB_RXCSRL14_DATAERR    0x00000008U  // Data Error
#define USB_RXCSRL14_NAKTO      0x00000008U  // NAK Timeout
#define USB_RXCSRL14_OVER       0x00000004U  // Overrun
#define USB_RXCSRL14_ERROR      0x00000004U  // Error
#define USB_RXCSRL14_FULL       0x00000002U  // FIFO Full
#define USB_RXCSRL14_RXRDY      0x00000001U  // Receive Packet Ready

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXCSRH14 register.
//
//*****************************************************************************
#define USB_RXCSRH14_AUTOCL     0x00000080U  // Auto Clear
#define USB_RXCSRH14_AUTORQ     0x00000040U  // Auto Request
#define USB_RXCSRH14_ISO        0x00000040U  // Isochronous Transfers
#define USB_RXCSRH14_DMAEN      0x00000020U  // DMA Request Enable
#define USB_RXCSRH14_PIDERR     0x00000010U  // PID Error
#define USB_RXCSRH14_DISNYET    0x00000010U  // Disable NYET
#define USB_RXCSRH14_DMAMOD     0x00000008U  // DMA Request Mode
#define USB_RXCSRH14_DTWE       0x00000004U  // Data Toggle Write Enable
#define USB_RXCSRH14_DT         0x00000002U  // Data Toggle

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXCOUNT14
// register.
//
//*****************************************************************************
#define USB_RXCOUNT14_COUNT_M   0x00001FFFU  // Receive Packet Count
#define USB_RXCOUNT14_COUNT_S   0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXTYPE14 register.
//
//*****************************************************************************
#define USB_TXTYPE14_SPEED_M    0x000000C0U  // Operating Speed
#define USB_TXTYPE14_SPEED_DFLT 0x00000000U  // Default
#define USB_TXTYPE14_SPEED_FULL 0x00000080U  // Full
#define USB_TXTYPE14_SPEED_LOW  0x000000C0U  // Low
#define USB_TXTYPE14_PROTO_M    0x00000030U  // Protocol
#define USB_TXTYPE14_PROTO_CTRL 0x00000000U  // Control
#define USB_TXTYPE14_PROTO_ISOC 0x00000010U  // Isochronous
#define USB_TXTYPE14_PROTO_BULK 0x00000020U  // Bulk
#define USB_TXTYPE14_PROTO_INT  0x00000030U  // Interrupt
#define USB_TXTYPE14_TEP_M      0x0000000FU  // Target Endpoint Number
#define USB_TXTYPE14_TEP_S      0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXINTERVAL14
// register.
//
//*****************************************************************************
#define USB_TXINTERVAL14_TXPOLL_M \
                                0x000000FFU  // TX Polling
#define USB_TXINTERVAL14_NAKLMT_M \
                                0x000000FFU  // NAK Limit
#define USB_TXINTERVAL14_TXPOLL_S \
                                0U
#define USB_TXINTERVAL14_NAKLMT_S \
                                0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXTYPE14 register.
//
//*****************************************************************************
#define USB_RXTYPE14_SPEED_M    0x000000C0U  // Operating Speed
#define USB_RXTYPE14_SPEED_DFLT 0x00000000U  // Default
#define USB_RXTYPE14_SPEED_FULL 0x00000080U  // Full
#define USB_RXTYPE14_SPEED_LOW  0x000000C0U  // Low
#define USB_RXTYPE14_PROTO_M    0x00000030U  // Protocol
#define USB_RXTYPE14_PROTO_CTRL 0x00000000U  // Control
#define USB_RXTYPE14_PROTO_ISOC 0x00000010U  // Isochronous
#define USB_RXTYPE14_PROTO_BULK 0x00000020U  // Bulk
#define USB_RXTYPE14_PROTO_INT  0x00000030U  // Interrupt
#define USB_RXTYPE14_TEP_M      0x0000000FU  // Target Endpoint Number
#define USB_RXTYPE14_TEP_S      0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXINTERVAL14
// register.
//
//*****************************************************************************
#define USB_RXINTERVAL14_TXPOLL_M \
                                0x000000FFU  // RX Polling
#define USB_RXINTERVAL14_NAKLMT_M \
                                0x000000FFU  // NAK Limit
#define USB_RXINTERVAL14_TXPOLL_S \
                                0U
#define USB_RXINTERVAL14_NAKLMT_S \
                                0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXMAXP15 register.
//
//*****************************************************************************
#define USB_TXMAXP15_MAXLOAD_M  0x000007FFU  // Maximum Payload
#define USB_TXMAXP15_MAXLOAD_S  0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXCSRL15 register.
//
//*****************************************************************************
#define USB_TXCSRL15_NAKTO      0x00000080U  // NAK Timeout
#define USB_TXCSRL15_CLRDT      0x00000040U  // Clear Data Toggle
#define USB_TXCSRL15_STALLED    0x00000020U  // Endpoint Stalled
#define USB_TXCSRL15_SETUP      0x00000010U  // Setup Packet
#define USB_TXCSRL15_STALL      0x00000010U  // Send STALL
#define USB_TXCSRL15_FLUSH      0x00000008U  // Flush FIFO
#define USB_TXCSRL15_UNDRN      0x00000004U  // Underrun
#define USB_TXCSRL15_ERROR      0x00000004U  // Error
#define USB_TXCSRL15_FIFONE     0x00000002U  // FIFO Not Empty
#define USB_TXCSRL15_TXRDY      0x00000001U  // Transmit Packet Ready

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXCSRH15 register.
//
//*****************************************************************************
#define USB_TXCSRH15_AUTOSET    0x00000080U  // Auto Set
#define USB_TXCSRH15_ISO        0x00000040U  // Isochronous Transfers
#define USB_TXCSRH15_MODE       0x00000020U  // Mode
#define USB_TXCSRH15_DMAEN      0x00000010U  // DMA Request Enable
#define USB_TXCSRH15_FDT        0x00000008U  // Force Data Toggle
#define USB_TXCSRH15_DMAMOD     0x00000004U  // DMA Request Mode
#define USB_TXCSRH15_DTWE       0x00000002U  // Data Toggle Write Enable
#define USB_TXCSRH15_DT         0x00000001U  // Data Toggle

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXMAXP15 register.
//
//*****************************************************************************
#define USB_RXMAXP15_MAXLOAD_M  0x000007FFU  // Maximum Payload
#define USB_RXMAXP15_MAXLOAD_S  0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXCSRL15 register.
//
//*****************************************************************************
#define USB_RXCSRL15_CLRDT      0x00000080U  // Clear Data Toggle
#define USB_RXCSRL15_STALLED    0x00000040U  // Endpoint Stalled
#define USB_RXCSRL15_STALL      0x00000020U  // Send STALL
#define USB_RXCSRL15_REQPKT     0x00000020U  // Request Packet
#define USB_RXCSRL15_FLUSH      0x00000010U  // Flush FIFO
#define USB_RXCSRL15_DATAERR    0x00000008U  // Data Error
#define USB_RXCSRL15_NAKTO      0x00000008U  // NAK Timeout
#define USB_RXCSRL15_ERROR      0x00000004U  // Error
#define USB_RXCSRL15_OVER       0x00000004U  // Overrun
#define USB_RXCSRL15_FULL       0x00000002U  // FIFO Full
#define USB_RXCSRL15_RXRDY      0x00000001U  // Receive Packet Ready

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXCSRH15 register.
//
//*****************************************************************************
#define USB_RXCSRH15_AUTOCL     0x00000080U  // Auto Clear
#define USB_RXCSRH15_AUTORQ     0x00000040U  // Auto Request
#define USB_RXCSRH15_ISO        0x00000040U  // Isochronous Transfers
#define USB_RXCSRH15_DMAEN      0x00000020U  // DMA Request Enable
#define USB_RXCSRH15_PIDERR     0x00000010U  // PID Error
#define USB_RXCSRH15_DISNYET    0x00000010U  // Disable NYET
#define USB_RXCSRH15_DMAMOD     0x00000008U  // DMA Request Mode
#define USB_RXCSRH15_DTWE       0x00000004U  // Data Toggle Write Enable
#define USB_RXCSRH15_DT         0x00000002U  // Data Toggle

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXCOUNT15
// register.
//
//*****************************************************************************
#define USB_RXCOUNT15_COUNT_M   0x00001FFFU  // Receive Packet Count
#define USB_RXCOUNT15_COUNT_S   0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXTYPE15 register.
//
//*****************************************************************************
#define USB_TXTYPE15_SPEED_M    0x000000C0U  // Operating Speed
#define USB_TXTYPE15_SPEED_DFLT 0x00000000U  // Default
#define USB_TXTYPE15_SPEED_FULL 0x00000080U  // Full
#define USB_TXTYPE15_SPEED_LOW  0x000000C0U  // Low
#define USB_TXTYPE15_PROTO_M    0x00000030U  // Protocol
#define USB_TXTYPE15_PROTO_CTRL 0x00000000U  // Control
#define USB_TXTYPE15_PROTO_ISOC 0x00000010U  // Isochronous
#define USB_TXTYPE15_PROTO_BULK 0x00000020U  // Bulk
#define USB_TXTYPE15_PROTO_INT  0x00000030U  // Interrupt
#define USB_TXTYPE15_TEP_M      0x0000000FU  // Target Endpoint Number
#define USB_TXTYPE15_TEP_S      0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXINTERVAL15
// register.
//
//*****************************************************************************
#define USB_TXINTERVAL15_TXPOLL_M \
                                0x000000FFU  // TX Polling
#define USB_TXINTERVAL15_NAKLMT_M \
                                0x000000FFU  // NAK Limit
#define USB_TXINTERVAL15_NAKLMT_S \
                                0U
#define USB_TXINTERVAL15_TXPOLL_S \
                                0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXTYPE15 register.
//
//*****************************************************************************
#define USB_RXTYPE15_SPEED_M    0x000000C0U  // Operating Speed
#define USB_RXTYPE15_SPEED_DFLT 0x00000000U  // Default
#define USB_RXTYPE15_SPEED_FULL 0x00000080U  // Full
#define USB_RXTYPE15_SPEED_LOW  0x000000C0U  // Low
#define USB_RXTYPE15_PROTO_M    0x00000030U  // Protocol
#define USB_RXTYPE15_PROTO_CTRL 0x00000000U  // Control
#define USB_RXTYPE15_PROTO_ISOC 0x00000010U  // Isochronous
#define USB_RXTYPE15_PROTO_BULK 0x00000020U  // Bulk
#define USB_RXTYPE15_PROTO_INT  0x00000030U  // Interrupt
#define USB_RXTYPE15_TEP_M      0x0000000FU  // Target Endpoint Number
#define USB_RXTYPE15_TEP_S      0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXINTERVAL15
// register.
//
//*****************************************************************************
#define USB_RXINTERVAL15_TXPOLL_M \
                                0x000000FFU  // RX Polling
#define USB_RXINTERVAL15_NAKLMT_M \
                                0x000000FFU  // NAK Limit
#define USB_RXINTERVAL15_TXPOLL_S \
                                0U
#define USB_RXINTERVAL15_NAKLMT_S \
                                0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RQPKTCOUNT1
// register.
//
//*****************************************************************************
#define USB_RQPKTCOUNT1_M       0x0000FFFFU  // Block Transfer Packet Count
#define USB_RQPKTCOUNT1_S       0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RQPKTCOUNT2
// register.
//
//*****************************************************************************
#define USB_RQPKTCOUNT2_M       0x0000FFFFU  // Block Transfer Packet Count
#define USB_RQPKTCOUNT2_S       0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RQPKTCOUNT3
// register.
//
//*****************************************************************************
#define USB_RQPKTCOUNT3_M       0x0000FFFFU  // Block Transfer Packet Count
#define USB_RQPKTCOUNT3_S       0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RQPKTCOUNT4
// register.
//
//*****************************************************************************
#define USB_RQPKTCOUNT4_COUNT_M 0x0000FFFFU  // Block Transfer Packet Count
#define USB_RQPKTCOUNT4_COUNT_S 0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RQPKTCOUNT5
// register.
//
//*****************************************************************************
#define USB_RQPKTCOUNT5_COUNT_M 0x0000FFFFU  // Block Transfer Packet Count
#define USB_RQPKTCOUNT5_COUNT_S 0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RQPKTCOUNT6
// register.
//
//*****************************************************************************
#define USB_RQPKTCOUNT6_COUNT_M 0x0000FFFFU  // Block Transfer Packet Count
#define USB_RQPKTCOUNT6_COUNT_S 0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RQPKTCOUNT7
// register.
//
//*****************************************************************************
#define USB_RQPKTCOUNT7_COUNT_M 0x0000FFFFU  // Block Transfer Packet Count
#define USB_RQPKTCOUNT7_COUNT_S 0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RQPKTCOUNT8
// register.
//
//*****************************************************************************
#define USB_RQPKTCOUNT8_COUNT_M 0x0000FFFFU  // Block Transfer Packet Count
#define USB_RQPKTCOUNT8_COUNT_S 0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RQPKTCOUNT9
// register.
//
//*****************************************************************************
#define USB_RQPKTCOUNT9_COUNT_M 0x0000FFFFU  // Block Transfer Packet Count
#define USB_RQPKTCOUNT9_COUNT_S 0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RQPKTCOUNT10
// register.
//
//*****************************************************************************
#define USB_RQPKTCOUNT10_COUNT_M \
                                0x0000FFFFU  // Block Transfer Packet Count
#define USB_RQPKTCOUNT10_COUNT_S \
                                0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RQPKTCOUNT11
// register.
//
//*****************************************************************************
#define USB_RQPKTCOUNT11_COUNT_M \
                                0x0000FFFFU  // Block Transfer Packet Count
#define USB_RQPKTCOUNT11_COUNT_S \
                                0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RQPKTCOUNT12
// register.
//
//*****************************************************************************
#define USB_RQPKTCOUNT12_COUNT_M \
                                0x0000FFFFU  // Block Transfer Packet Count
#define USB_RQPKTCOUNT12_COUNT_S \
                                0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RQPKTCOUNT13
// register.
//
//*****************************************************************************
#define USB_RQPKTCOUNT13_COUNT_M \
                                0x0000FFFFU  // Block Transfer Packet Count
#define USB_RQPKTCOUNT13_COUNT_S \
                                0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RQPKTCOUNT14
// register.
//
//*****************************************************************************
#define USB_RQPKTCOUNT14_COUNT_M \
                                0x0000FFFFU  // Block Transfer Packet Count
#define USB_RQPKTCOUNT14_COUNT_S \
                                0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RQPKTCOUNT15
// register.
//
//*****************************************************************************
#define USB_RQPKTCOUNT15_COUNT_M \
                                0x0000FFFFU  // Block Transfer Packet Count
#define USB_RQPKTCOUNT15_COUNT_S \
                                0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_RXDPKTBUFDIS
// register.
//
//*****************************************************************************
#define USB_RXDPKTBUFDIS_EP15   0x00008000U  // EP15 RX Double-Packet Buffer
                                            // Disable
#define USB_RXDPKTBUFDIS_EP14   0x00004000U  // EP14 RX Double-Packet Buffer
                                            // Disable
#define USB_RXDPKTBUFDIS_EP13   0x00002000U  // EP13 RX Double-Packet Buffer
                                            // Disable
#define USB_RXDPKTBUFDIS_EP12   0x00001000U  // EP12 RX Double-Packet Buffer
                                            // Disable
#define USB_RXDPKTBUFDIS_EP11   0x00000800U  // EP11 RX Double-Packet Buffer
                                            // Disable
#define USB_RXDPKTBUFDIS_EP10   0x00000400U  // EP10 RX Double-Packet Buffer
                                            // Disable
#define USB_RXDPKTBUFDIS_EP9    0x00000200U  // EP9 RX Double-Packet Buffer
                                            // Disable
#define USB_RXDPKTBUFDIS_EP8    0x00000100U  // EP8 RX Double-Packet Buffer
                                            // Disable
#define USB_RXDPKTBUFDIS_EP7    0x00000080U  // EP7 RX Double-Packet Buffer
                                            // Disable
#define USB_RXDPKTBUFDIS_EP6    0x00000040U  // EP6 RX Double-Packet Buffer
                                            // Disable
#define USB_RXDPKTBUFDIS_EP5    0x00000020U  // EP5 RX Double-Packet Buffer
                                            // Disable
#define USB_RXDPKTBUFDIS_EP4    0x00000010U  // EP4 RX Double-Packet Buffer
                                            // Disable
#define USB_RXDPKTBUFDIS_EP3    0x00000008U  // EP3 RX Double-Packet Buffer
                                            // Disable
#define USB_RXDPKTBUFDIS_EP2    0x00000004U  // EP2 RX Double-Packet Buffer
                                            // Disable
#define USB_RXDPKTBUFDIS_EP1    0x00000002U  // EP1 RX Double-Packet Buffer
                                            // Disable

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_TXDPKTBUFDIS
// register.
//
//*****************************************************************************
#define USB_TXDPKTBUFDIS_EP15   0x00008000U  // EP15 TX Double-Packet Buffer
                                            // Disable
#define USB_TXDPKTBUFDIS_EP14   0x00004000U  // EP14 TX Double-Packet Buffer
                                            // Disable
#define USB_TXDPKTBUFDIS_EP13   0x00002000U  // EP13 TX Double-Packet Buffer
                                            // Disable
#define USB_TXDPKTBUFDIS_EP12   0x00001000U  // EP12 TX Double-Packet Buffer
                                            // Disable
#define USB_TXDPKTBUFDIS_EP11   0x00000800U  // EP11 TX Double-Packet Buffer
                                            // Disable
#define USB_TXDPKTBUFDIS_EP10   0x00000400U  // EP10 TX Double-Packet Buffer
                                            // Disable
#define USB_TXDPKTBUFDIS_EP9    0x00000200U  // EP9 TX Double-Packet Buffer
                                            // Disable
#define USB_TXDPKTBUFDIS_EP8    0x00000100U  // EP8 TX Double-Packet Buffer
                                            // Disable
#define USB_TXDPKTBUFDIS_EP7    0x00000080U  // EP7 TX Double-Packet Buffer
                                            // Disable
#define USB_TXDPKTBUFDIS_EP6    0x00000040U  // EP6 TX Double-Packet Buffer
                                            // Disable
#define USB_TXDPKTBUFDIS_EP5    0x00000020U  // EP5 TX Double-Packet Buffer
                                            // Disable
#define USB_TXDPKTBUFDIS_EP4    0x00000010U  // EP4 TX Double-Packet Buffer
                                            // Disable
#define USB_TXDPKTBUFDIS_EP3    0x00000008U  // EP3 TX Double-Packet Buffer
                                            // Disable
#define USB_TXDPKTBUFDIS_EP2    0x00000004U  // EP2 TX Double-Packet Buffer
                                            // Disable
#define USB_TXDPKTBUFDIS_EP1    0x00000002U  // EP1 TX Double-Packet Buffer
                                            // Disable

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_EPC register.
//
//*****************************************************************************
#define USB_EPC_PFLTACT_M       0x00000300U  // Power Fault Action
#define USB_EPC_PFLTACT_UNCHG   0x00000000U  // Unchanged
#define USB_EPC_PFLTACT_TRIS    0x00000100U  // Tristate
#define USB_EPC_PFLTACT_LOW     0x00000200U  // Low
#define USB_EPC_PFLTACT_HIGH    0x00000300U  // High
#define USB_EPC_PFLTAEN         0x00000040U  // Power Fault Action Enable
#define USB_EPC_PFLTSEN_HIGH    0x00000020U  // Power Fault Sense
#define USB_EPC_PFLTEN          0x00000010U  // Power Fault Input Enable
#define USB_EPC_EPENDE          0x00000004U  // EPEN Drive Enable
#define USB_EPC_EPEN_M          0x00000003U  // External Power Supply Enable
                                            // Configuration
#define USB_EPC_EPEN_LOW        0x00000000U  // Power Enable Active Low
#define USB_EPC_EPEN_HIGH       0x00000001U  // Power Enable Active High
#define USB_EPC_EPEN_VBLOW      0x00000002U  // Power Enable High if VBUS Low
#define USB_EPC_EPEN_VBHIGH     0x00000003U  // Power Enable High if VBUS High

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_EPCRIS register.
//
//*****************************************************************************
#define USB_EPCRIS_PF           0x00000001U  // USB Power Fault Interrupt Status

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_EPCIM register.
//
//*****************************************************************************
#define USB_EPCIM_PF            0x00000001U  // USB Power Fault Interrupt Mask

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_EPCISC register.
//
//*****************************************************************************
#define USB_EPCISC_PF           0x00000001U  // USB Power Fault Interrupt Status
                                            // and Clear

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_DRRIS register.
//
//*****************************************************************************
#define USB_DRRIS_RESUME        0x00000001U  // RESUME Interrupt Status

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_DRIM register.
//
//*****************************************************************************
#define USB_DRIM_RESUME         0x00000001U  // RESUME Interrupt Mask

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_DRISC register.
//
//*****************************************************************************
#define USB_DRISC_RESUME        0x00000001U  // RESUME Interrupt Status and
                                            // Clear

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_GPCS register.
//
//*****************************************************************************
#define USB_GPCS_DEVMODOTG      0x00000002U  // Enable Device Mode
#define USB_GPCS_DEVMOD         0x00000001U  // Device Mode

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_VDC register.
//
//*****************************************************************************
#define USB_VDC_VBDEN           0x00000001U  // VBUS Droop Enable

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_VDCRIS register.
//
//*****************************************************************************
#define USB_VDCRIS_VD           0x00000001U  // VBUS Droop Raw Interrupt Status

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_VDCIM register.
//
//*****************************************************************************
#define USB_VDCIM_VD            0x00000001U  // VBUS Droop Interrupt Mask

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_VDCISC register.
//
//*****************************************************************************
#define USB_VDCISC_VD           0x00000001U  // VBUS Droop Interrupt Status and
                                            // Clear

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_IDVRIS register.
//
//*****************************************************************************
#define USB_IDVRIS_ID           0x00000001U  // ID Valid Detect Raw Interrupt
                                            // Status

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_IDVIM register.
//
//*****************************************************************************
#define USB_IDVIM_ID            0x00000001U  // ID Valid Detect Interrupt Mask

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_IDVISC register.
//
//*****************************************************************************
#define USB_IDVISC_ID           0x00000001U  // ID Valid Detect Interrupt Status
                                            // and Clear

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_DMASEL register.
//
//*****************************************************************************
#define USB_DMASEL_DMACTX_M     0x00F00000UL  // DMA C TX Select
#define USB_DMASEL_DMACRX_M     0x000F0000UL  // DMA C RX Select
#define USB_DMASEL_DMABTX_M     0x0000F000U  // DMA B TX Select
#define USB_DMASEL_DMABRX_M     0x00000F00U  // DMA B RX Select
#define USB_DMASEL_DMAATX_M     0x000000F0U  // DMA A TX Select
#define USB_DMASEL_DMAARX_M     0x0000000FU  // DMA A RX Select
#define USB_DMASEL_DMACTX_S     20U
#define USB_DMASEL_DMACRX_S     16U
#define USB_DMASEL_DMABTX_S     12U
#define USB_DMASEL_DMABRX_S     8U
#define USB_DMASEL_DMAATX_S     4U
#define USB_DMASEL_DMAARX_S     0U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_GLBINTEN register.
//
//*****************************************************************************
#define USB_GLBINTEN_INTEN      0x00000001U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_GLBINTFLG register.
//
//*****************************************************************************
#define USB_GLBINTFLG_INTFLG     0x00000001U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_GLBINTFLGCL register.
//
//*****************************************************************************
#define USB_GLBINTFLGCL_INTFLG    0x00000001U

//*****************************************************************************
//
// The following are defines for the bit fields in the USB_O_PP register.
//
//*****************************************************************************
#define USB_PP_ECNT_M           0x0000FF00U  // Endpoint Count
#define USB_PP_USB_M            0x000000C0U  // USB Capability
#define USB_PP_USB_DEVICE       0x00000040U  // DEVICE
#define USB_PP_USB_HOSTDEVICE   0x00000080U  // HOST
#define USB_PP_USB_OTG          0x000000C0U  // OTG
#define USB_PP_PHY              0x00000010U  // PHY Present
#define USB_PP_TYPE_M           0x0000000FU  // Controller Type
#define USB_PP_TYPE_0           0x00000000U  // The first-generation USB
                                            // controller
#define USB_PP_ECNT_S           8U

//*****************************************************************************
//
// The following definitions are deprecated.
//
//*****************************************************************************
#ifndef DEPRECATED

//*****************************************************************************
//
// The following are deprecated defines for the bit fields in the
// USB_O_TXFIFOADD register.
//
//*****************************************************************************
#define USB_TXFIFOADD_ADDR_2048 0x00000009U  // 2048
#define USB_TXFIFOADD_ADDR_1024 0x00000008U  // 1024
#define USB_TXFIFOADD_ADDR_512  0x00000007U  // 512
#define USB_TXFIFOADD_ADDR_256  0x00000006U  // 256
#define USB_TXFIFOADD_ADDR_128  0x00000005U  // 128
#define USB_TXFIFOADD_ADDR_64   0x00000004U  // 64
#define USB_TXFIFOADD_ADDR_32   0x00000003U  // 32
#define USB_TXFIFOADD_ADDR_16   0x00000002U  // 16
#define USB_TXFIFOADD_ADDR_8    0x00000001U  // 8
#define USB_TXFIFOADD_ADDR_0    0x00000000U  // 0

//*****************************************************************************
//
// The following are deprecated defines for the bit fields in the
// USB_O_RXFIFOADD register.
//
//*****************************************************************************
#define USB_RXFIFOADD_ADDR_2048 0x00000009U  // 2048
#define USB_RXFIFOADD_ADDR_1024 0x00000008U  // 1024
#define USB_RXFIFOADD_ADDR_512  0x00000007U  // 512
#define USB_RXFIFOADD_ADDR_256  0x00000006U  // 256
#define USB_RXFIFOADD_ADDR_128  0x00000005U  // 128
#define USB_RXFIFOADD_ADDR_64   0x00000004U  // 64
#define USB_RXFIFOADD_ADDR_32   0x00000003U  // 32
#define USB_RXFIFOADD_ADDR_16   0x00000002U  // 16
#define USB_RXFIFOADD_ADDR_8    0x00000001U  // 8
#define USB_RXFIFOADD_ADDR_0    0x00000000U  // 0

#endif

#endif // __HW_USB_H__
