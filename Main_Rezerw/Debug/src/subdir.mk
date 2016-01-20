################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Baza.cpp \
../src/Bilet.cpp \
../src/Main_Rezerw.cpp \
../src/PodMorska.cpp \
../src/Rezerwacja.cpp 

OBJS += \
./src/Baza.o \
./src/Bilet.o \
./src/Main_Rezerw.o \
./src/PodMorska.o \
./src/Rezerwacja.o 

CPP_DEPS += \
./src/Baza.d \
./src/Bilet.d \
./src/Main_Rezerw.d \
./src/PodMorska.d \
./src/Rezerwacja.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


