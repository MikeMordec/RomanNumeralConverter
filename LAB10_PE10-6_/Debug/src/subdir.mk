################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/LAB10_PE10-6_Mike_Mordec.cpp 

CPP_DEPS += \
./src/LAB10_PE10-6_Mike_Mordec.d 

OBJS += \
./src/LAB10_PE10-6_Mike_Mordec.o 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/LAB10_PE10-6_Mike_Mordec.d ./src/LAB10_PE10-6_Mike_Mordec.o

.PHONY: clean-src

