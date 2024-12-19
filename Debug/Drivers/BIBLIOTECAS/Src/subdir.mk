################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/BIBLIOTECAS/Src/bmp280.c \
../Drivers/BIBLIOTECAS/Src/buzzer.c \
../Drivers/BIBLIOTECAS/Src/hcsr04.c \
../Drivers/BIBLIOTECAS/Src/rtc.c \
../Drivers/BIBLIOTECAS/Src/servo.c \
../Drivers/BIBLIOTECAS/Src/ssd1306.c \
../Drivers/BIBLIOTECAS/Src/ssd1306_fonts.c \
../Drivers/BIBLIOTECAS/Src/ssd1306_tests.c 

OBJS += \
./Drivers/BIBLIOTECAS/Src/bmp280.o \
./Drivers/BIBLIOTECAS/Src/buzzer.o \
./Drivers/BIBLIOTECAS/Src/hcsr04.o \
./Drivers/BIBLIOTECAS/Src/rtc.o \
./Drivers/BIBLIOTECAS/Src/servo.o \
./Drivers/BIBLIOTECAS/Src/ssd1306.o \
./Drivers/BIBLIOTECAS/Src/ssd1306_fonts.o \
./Drivers/BIBLIOTECAS/Src/ssd1306_tests.o 

C_DEPS += \
./Drivers/BIBLIOTECAS/Src/bmp280.d \
./Drivers/BIBLIOTECAS/Src/buzzer.d \
./Drivers/BIBLIOTECAS/Src/hcsr04.d \
./Drivers/BIBLIOTECAS/Src/rtc.d \
./Drivers/BIBLIOTECAS/Src/servo.d \
./Drivers/BIBLIOTECAS/Src/ssd1306.d \
./Drivers/BIBLIOTECAS/Src/ssd1306_fonts.d \
./Drivers/BIBLIOTECAS/Src/ssd1306_tests.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/BIBLIOTECAS/Src/%.o Drivers/BIBLIOTECAS/Src/%.su Drivers/BIBLIOTECAS/Src/%.cyclo: ../Drivers/BIBLIOTECAS/Src/%.c Drivers/BIBLIOTECAS/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F446xx -c -I../Core/Inc -I"C:/Users/PC/Documents/Embarcados/ProjetoAutomacao/Drivers/BIBLIOTECAS/Inc" -I"C:/Users/PC/Documents/Embarcados/ProjetoAutomacao/Drivers/BIBLIOTECAS/Src" -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Drivers-2f-BIBLIOTECAS-2f-Src

clean-Drivers-2f-BIBLIOTECAS-2f-Src:
	-$(RM) ./Drivers/BIBLIOTECAS/Src/bmp280.cyclo ./Drivers/BIBLIOTECAS/Src/bmp280.d ./Drivers/BIBLIOTECAS/Src/bmp280.o ./Drivers/BIBLIOTECAS/Src/bmp280.su ./Drivers/BIBLIOTECAS/Src/buzzer.cyclo ./Drivers/BIBLIOTECAS/Src/buzzer.d ./Drivers/BIBLIOTECAS/Src/buzzer.o ./Drivers/BIBLIOTECAS/Src/buzzer.su ./Drivers/BIBLIOTECAS/Src/hcsr04.cyclo ./Drivers/BIBLIOTECAS/Src/hcsr04.d ./Drivers/BIBLIOTECAS/Src/hcsr04.o ./Drivers/BIBLIOTECAS/Src/hcsr04.su ./Drivers/BIBLIOTECAS/Src/rtc.cyclo ./Drivers/BIBLIOTECAS/Src/rtc.d ./Drivers/BIBLIOTECAS/Src/rtc.o ./Drivers/BIBLIOTECAS/Src/rtc.su ./Drivers/BIBLIOTECAS/Src/servo.cyclo ./Drivers/BIBLIOTECAS/Src/servo.d ./Drivers/BIBLIOTECAS/Src/servo.o ./Drivers/BIBLIOTECAS/Src/servo.su ./Drivers/BIBLIOTECAS/Src/ssd1306.cyclo ./Drivers/BIBLIOTECAS/Src/ssd1306.d ./Drivers/BIBLIOTECAS/Src/ssd1306.o ./Drivers/BIBLIOTECAS/Src/ssd1306.su ./Drivers/BIBLIOTECAS/Src/ssd1306_fonts.cyclo ./Drivers/BIBLIOTECAS/Src/ssd1306_fonts.d ./Drivers/BIBLIOTECAS/Src/ssd1306_fonts.o ./Drivers/BIBLIOTECAS/Src/ssd1306_fonts.su ./Drivers/BIBLIOTECAS/Src/ssd1306_tests.cyclo ./Drivers/BIBLIOTECAS/Src/ssd1306_tests.d ./Drivers/BIBLIOTECAS/Src/ssd1306_tests.o ./Drivers/BIBLIOTECAS/Src/ssd1306_tests.su

.PHONY: clean-Drivers-2f-BIBLIOTECAS-2f-Src

