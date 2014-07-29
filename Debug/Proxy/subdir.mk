################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Proxy/HokuyoProxy.cpp \
../Proxy/RoboclawProxy.cpp \
../Proxy/UdpClientLinux.cpp 

CC_SRCS += \
../Proxy/drivermsg.pb.cc \
../Proxy/hokuyo.pb.cc \
../Proxy/location.pb.cc \
../Proxy/roboclaw.pb.cc 

OBJS += \
./Proxy/HokuyoProxy.o \
./Proxy/RoboclawProxy.o \
./Proxy/UdpClientLinux.o \
./Proxy/drivermsg.pb.o \
./Proxy/hokuyo.pb.o \
./Proxy/location.pb.o \
./Proxy/roboclaw.pb.o 

CC_DEPS += \
./Proxy/drivermsg.pb.d \
./Proxy/hokuyo.pb.d \
./Proxy/location.pb.d \
./Proxy/roboclaw.pb.d 

CPP_DEPS += \
./Proxy/HokuyoProxy.d \
./Proxy/RoboclawProxy.d \
./Proxy/UdpClientLinux.d 


# Each subdirectory must supply rules for building sources it contributes
Proxy/%.o: ../Proxy/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

Proxy/%.o: ../Proxy/%.cc
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


