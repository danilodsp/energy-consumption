################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

CG_TOOL_ROOT := c:/ti/ccsv6/tools/compiler/c2000_6.2.10

ORDERED_OBJS += \
$(GEN_CMDS__FLAG) \
"./main.obj" \
-l"libc.a" \
-l"C:\ti\controlSUITE\device_support\f2802x\v230\f2802x_common\lib\driverlib.lib" \
-l"C:\ti\controlSUITE\device_support\f2802x\v230\f2802x_common\cmd\F2802x_generic_flash.cmd" \

-include ../makefile.init

RM := DEL /F
RMDIR := RMDIR /S/Q

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir_vars.mk
-include subdir_rules.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(S62_DEPS)),)
-include $(S62_DEPS)
endif
ifneq ($(strip $(C64_DEPS)),)
-include $(C64_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(S55_DEPS)),)
-include $(S55_DEPS)
endif
ifneq ($(strip $(C67_DEPS)),)
-include $(C67_DEPS)
endif
ifneq ($(strip $(C??_DEPS)),)
-include $(C??_DEPS)
endif
ifneq ($(strip $(CLA_DEPS)),)
-include $(CLA_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(S??_DEPS)),)
-include $(S??_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(C62_DEPS)),)
-include $(C62_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(ASM_UPPER_DEPS)),)
-include $(ASM_UPPER_DEPS)
endif
ifneq ($(strip $(K_DEPS)),)
-include $(K_DEPS)
endif
ifneq ($(strip $(C43_DEPS)),)
-include $(C43_DEPS)
endif
ifneq ($(strip $(S67_DEPS)),)
-include $(S67_DEPS)
endif
ifneq ($(strip $(SA_DEPS)),)
-include $(SA_DEPS)
endif
ifneq ($(strip $(S43_DEPS)),)
-include $(S43_DEPS)
endif
ifneq ($(strip $(OPT_DEPS)),)
-include $(OPT_DEPS)
endif
ifneq ($(strip $(S64_DEPS)),)
-include $(S64_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(C55_DEPS)),)
-include $(C55_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXE_OUTPUTS += \
c28_test3.out \

EXE_OUTPUTS__QUOTED += \
"c28_test3.out" \

BIN_OUTPUTS += \
c28_test3.hex \

BIN_OUTPUTS__QUOTED += \
"c28_test3.hex" \


# All Target
all: c28_test3.out

# Tool invocations
c28_test3.out: $(OBJS) $(GEN_CMDS)
	@echo 'Building target: $@'
	@echo 'Invoking: C2000 Linker'
	"c:/ti/ccsv6/tools/compiler/c2000_6.2.10/bin/cl2000" -v28 -ml -mt -g --define=LARGE_MODEL --define=_DEBUG --define=_FLASH --verbose_diagnostics --diag_warning=225 --display_error_number --diag_wrap=off --output_all_syms --cdebug_asm_data -z -m"c28_test3.map" --stack_size=0x300 --warn_sections -i"c:/ti/ccsv6/tools/compiler/c2000_6.2.10/lib" -i"C:/ti/controlSUITE/device_support/f2802x/v230/f2802x_headers/cmd" -i"c:/ti/ccsv6/tools/compiler/c2000_6.2.10/include" --reread_libs --display_error_number --diag_wrap=off --xml_link_info="c28_test3_linkInfo.xml" --entry_point=code_start --rom_model -o "c28_test3.out" $(ORDERED_OBJS)
	@echo 'Finished building target: $@'
	@echo ' '

c28_test3.hex: $(EXE_OUTPUTS)
	@echo 'Invoking: C2000 Hex Utility'
	"c:/ti/ccsv6/tools/compiler/c2000_6.2.10/bin/hex2000"  -o "c28_test3.hex" $(EXE_OUTPUTS__QUOTED)
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(EXE_OUTPUTS__QUOTED)$(BIN_OUTPUTS__QUOTED)
	-$(RM) "main.pp" 
	-$(RM) "main.obj" 
	-@echo 'Finished clean'
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets

