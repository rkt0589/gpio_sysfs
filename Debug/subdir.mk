################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../main.c 

OBJS += \
./main.o 

C_DEPS += \
./main.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	arm-angstrom-linux-gnueabi-gcc  -march=armv7-a -mthumb -mfpu=neon  -mfloat-abi=hard --sysroot=/home/dev/Toradex/sdk_imx6_qt/sysroots/armv7at2hf-neon-angstrom-linux-gnueabi -O0 -g3 -Wall -O2 -pipe -g -feliminate-unused-debug-types   -c -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


