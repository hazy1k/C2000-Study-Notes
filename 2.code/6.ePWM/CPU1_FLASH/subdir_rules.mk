################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Each subdirectory must supply rules for building sources it contributes
build-1508000417: ../c2000.syscfg
	@echo 'Building file: "$<"'
	@echo 'Invoking: SysConfig'
	"E:/TI/ccs/utils/sysconfig_1.24.0/sysconfig_cli.bat" --script "E:/StudyNote/study_C2000/2.code/6.ePWM/c2000.syscfg" -o "syscfg" -s "E:/TI/sdk/C2000Ware_5_05_00_00/.metadata/sdk.json" -d "F28P55x" -p "128PDT" -r "F28P55x_128PDT" --compiler ccs
	@echo 'Finished building: "$<"'
	@echo ' '

syscfg/board.c: build-1508000417 ../c2000.syscfg
syscfg/board.h: build-1508000417
syscfg/board.cmd.genlibs: build-1508000417
syscfg/board.opt: build-1508000417
syscfg/board.json: build-1508000417
syscfg/pinmux.csv: build-1508000417
syscfg/epwm.dot: build-1508000417
syscfg/c2000ware_libraries.cmd.genlibs: build-1508000417
syscfg/c2000ware_libraries.opt: build-1508000417
syscfg/c2000ware_libraries.c: build-1508000417
syscfg/c2000ware_libraries.h: build-1508000417
syscfg/clocktree.h: build-1508000417
syscfg: build-1508000417

syscfg/%.obj: ./syscfg/%.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"E:/TI/ccs/tools/compiler/ti-cgt-c2000_22.6.2.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla2 --float_support=fpu32 --tmu_support=tmu1 --vcu_support=vcrc -Ooff --include_path="E:/StudyNote/study_C2000/2.code/6.ePWM" --include_path="E:/TI/sdk/C2000Ware_5_05_00_00" --include_path="E:/StudyNote/study_C2000/2.code/6.ePWM/device" --include_path="E:/TI/sdk/C2000Ware_5_05_00_00/driverlib/f28p55x/driverlib/" --include_path="E:/TI/ccs/tools/compiler/ti-cgt-c2000_22.6.2.LTS/include" --define=DEBUG --define=_FLASH --diag_suppress=10063 --diag_warning=225 --diag_wrap=off --display_error_number --gen_func_subsections=on --abi=eabi --preproc_with_compile --preproc_dependency="syscfg/$(basename $(<F)).d_raw" --include_path="E:/StudyNote/study_C2000/2.code/6.ePWM/CPU1_FLASH/syscfg" --obj_directory="syscfg" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

%.obj: ../%.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"E:/TI/ccs/tools/compiler/ti-cgt-c2000_22.6.2.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla2 --float_support=fpu32 --tmu_support=tmu1 --vcu_support=vcrc -Ooff --include_path="E:/StudyNote/study_C2000/2.code/6.ePWM" --include_path="E:/TI/sdk/C2000Ware_5_05_00_00" --include_path="E:/StudyNote/study_C2000/2.code/6.ePWM/device" --include_path="E:/TI/sdk/C2000Ware_5_05_00_00/driverlib/f28p55x/driverlib/" --include_path="E:/TI/ccs/tools/compiler/ti-cgt-c2000_22.6.2.LTS/include" --define=DEBUG --define=_FLASH --diag_suppress=10063 --diag_warning=225 --diag_wrap=off --display_error_number --gen_func_subsections=on --abi=eabi --preproc_with_compile --preproc_dependency="$(basename $(<F)).d_raw" --include_path="E:/StudyNote/study_C2000/2.code/6.ePWM/CPU1_FLASH/syscfg" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '


