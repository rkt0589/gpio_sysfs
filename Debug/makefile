################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: gpio_sysfs

# Tool invocations
gpio_sysfs: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: Cross GCC Linker'
	arm-angstrom-linux-gnueabi-g++  -march=armv7-a -mthumb -mfpu=neon  -mfloat-abi=hard --sysroot=/home/dev/Toradex/sdk_imx6_qt/sysroots/armv7at2hf-neon-angstrom-linux-gnueabi -Wl,-O1 -Wl,--hash-style=gnu -Wl,--as-needed -o "gpio_sysfs" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(EXECUTABLES)$(OBJS)$(C_DEPS) gpio_sysfs
	-@echo ' '

.PHONY: all clean dependents

-include ../makefile.targets
