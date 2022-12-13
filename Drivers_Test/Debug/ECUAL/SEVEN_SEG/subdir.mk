################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../ECUAL/SEVEN_SEG/sevenseg.c 

OBJS += \
./ECUAL/SEVEN_SEG/sevenseg.o 

C_DEPS += \
./ECUAL/SEVEN_SEG/sevenseg.d 


# Each subdirectory must supply rules for building sources it contributes
ECUAL/SEVEN_SEG/%.o: ../ECUAL/SEVEN_SEG/%.c ECUAL/SEVEN_SEG/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


