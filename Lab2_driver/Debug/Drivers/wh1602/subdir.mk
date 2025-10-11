################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/wh1602/wh1602.c 

OBJS += \
./Drivers/wh1602/wh1602.o 

C_DEPS += \
./Drivers/wh1602/wh1602.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/wh1602/%.o Drivers/wh1602/%.su Drivers/wh1602/%.cyclo: ../Drivers/wh1602/%.c Drivers/wh1602/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F407xx -c -I../USB_HOST/App -I../Core/LCD -I../Drivers/wh1602 -I../USB_HOST/Target -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Middlewares/ST/STM32_USB_Host_Library/Core/Inc -I../Middlewares/ST/STM32_USB_Host_Library/Class/CDC/Inc -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Drivers-2f-wh1602

clean-Drivers-2f-wh1602:
	-$(RM) ./Drivers/wh1602/wh1602.cyclo ./Drivers/wh1602/wh1602.d ./Drivers/wh1602/wh1602.o ./Drivers/wh1602/wh1602.su

.PHONY: clean-Drivers-2f-wh1602

