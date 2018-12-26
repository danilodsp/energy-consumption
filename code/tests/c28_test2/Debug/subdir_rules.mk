################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Each subdirectory must supply rules for building sources it contributes
main.obj: ../main.c $(GEN_OPTS) $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: C2000 Compiler'
	"c:/ti/ccsv6/tools/compiler/c2000_6.2.10/bin/cl2000" -v28 -ml -mt --include_path="c:/ti/ccsv6/tools/compiler/c2000_6.2.10/include" --include_path="C:/ti/controlSUITE/device_support/f2802x/v230/f2802x_common/include" --include_path="C:/ti/controlSUITE/device_support/f2802x/v230/f2802x_headers/include" --include_path="C:/ti/controlSUITE/device_support/f2802x/v230" -g --define=LARGE_MODEL --define=_DEBUG --define=_FLASH --verbose_diagnostics --diag_warning=225 --display_error_number --diag_wrap=off --output_all_syms --cdebug_asm_data --preproc_with_compile --preproc_dependency="main.pp" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '


