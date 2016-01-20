################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Baza.cpp \
../src/Bilet.cpp \
../src/BiletMnog.cpp \
../src/BiletSamo.cpp \
../src/BiletStat.cpp \
../src/Main_Rezerw.cpp \
../src/Rezerwacja.cpp 

OBJS += \
./src/Baza.o \
./src/Bilet.o \
./src/BiletMnog.o \
./src/BiletSamo.o \
./src/BiletStat.o \
./src/Main_Rezerw.o \
./src/Rezerwacja.o 

CPP_DEPS += \
./src/Baza.d \
./src/Bilet.d \
./src/BiletMnog.d \
./src/BiletSamo.d \
./src/BiletStat.d \
./src/Main_Rezerw.d \
./src/Rezerwacja.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


