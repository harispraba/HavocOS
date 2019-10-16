################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../InputHandler/InputHandler.cpp 

OBJS += \
./InputHandler/InputHandler.o 

CPP_DEPS += \
./InputHandler/InputHandler.d 


# Each subdirectory must supply rules for building sources it contributes
InputHandler/%.o: ../InputHandler/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I/home/xni/uselib/SFML-2.5.1/include -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


