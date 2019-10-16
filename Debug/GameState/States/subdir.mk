################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../GameState/States/MainMenu.cpp 

OBJS += \
./GameState/States/MainMenu.o 

CPP_DEPS += \
./GameState/States/MainMenu.d 


# Each subdirectory must supply rules for building sources it contributes
GameState/States/%.o: ../GameState/States/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I/home/xni/uselib/SFML-2.5.1/include -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


