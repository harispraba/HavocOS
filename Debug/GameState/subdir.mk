################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../GameState/GameState.cpp \
../GameState/GameStateManager.cpp 

OBJS += \
./GameState/GameState.o \
./GameState/GameStateManager.o 

CPP_DEPS += \
./GameState/GameState.d \
./GameState/GameStateManager.d 


# Each subdirectory must supply rules for building sources it contributes
GameState/%.o: ../GameState/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I/home/xni/uselib/SFML-2.5.1/include -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


