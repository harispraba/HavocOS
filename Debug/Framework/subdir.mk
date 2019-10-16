################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Framework/Button.cpp \
../Framework/InputManager.cpp 

OBJS += \
./Framework/Button.o \
./Framework/InputManager.o 

CPP_DEPS += \
./Framework/Button.d \
./Framework/InputManager.d 


# Each subdirectory must supply rules for building sources it contributes
Framework/%.o: ../Framework/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I/home/xni/uselib/SFML-2.5.1/include -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


