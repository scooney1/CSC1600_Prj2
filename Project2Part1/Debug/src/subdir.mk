################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/BubbleSort.c \
../src/MergeSort.c \
../src/Project2Part1.c 

OBJS += \
./src/BubbleSort.o \
./src/MergeSort.o \
./src/Project2Part1.o 

C_DEPS += \
./src/BubbleSort.d \
./src/MergeSort.d \
./src/Project2Part1.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


