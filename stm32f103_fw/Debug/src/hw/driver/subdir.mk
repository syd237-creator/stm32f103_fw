################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/hw/driver/led.c 

OBJS += \
./src/hw/driver/led.o 

C_DEPS += \
./src/hw/driver/led.d 


# Each subdirectory must supply rules for building sources it contributes
src/hw/driver/%.o src/hw/driver/%.su: ../src/hw/driver/%.c src/hw/driver/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DSTM32F103xB -c -I"C:/Users/SEO/Desktop/stm32f103c8t6/exam_arm/stm32f103_fw/src" -I"C:/Users/SEO/Desktop/stm32f103c8t6/exam_arm/stm32f103_fw/src/ap" -I"C:/Users/SEO/Desktop/stm32f103c8t6/exam_arm/stm32f103_fw/src/bsp" -I"C:/Users/SEO/Desktop/stm32f103c8t6/exam_arm/stm32f103_fw/src/common" -I"C:/Users/SEO/Desktop/stm32f103c8t6/exam_arm/stm32f103_fw/src/hw" -I"C:/Users/SEO/Desktop/stm32f103c8t6/exam_arm/stm32f103_fw/src/lib" -I"C:/Users/SEO/Desktop/stm32f103c8t6/exam_arm/stm32f103_fw/src/lib/cube_f103/Drivers/CMSIS/Device/ST/STM32F1xx/Include" -I"C:/Users/SEO/Desktop/stm32f103c8t6/exam_arm/stm32f103_fw/src/lib/cube_f103/Drivers/CMSIS/Include" -I"C:/Users/SEO/Desktop/stm32f103c8t6/exam_arm/stm32f103_fw/src/lib/cube_f103/Drivers/STM32F1xx_HAL_Driver/Inc" -I"C:/Users/SEO/Desktop/stm32f103c8t6/exam_arm/stm32f103_fw/src/common/hw/include" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-src-2f-hw-2f-driver

clean-src-2f-hw-2f-driver:
	-$(RM) ./src/hw/driver/led.d ./src/hw/driver/led.o ./src/hw/driver/led.su

.PHONY: clean-src-2f-hw-2f-driver
