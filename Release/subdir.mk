################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
..\bt_fcns.cpp \
..\detect_object_fcns.cpp \
..\mesf_princ.cpp \
..\ports_init.cpp \
..\ra_manufact_v0.cpp \
..\servos_fcn.cpp 

LINK_OBJ += \
.\bt_fcns.cpp.o \
.\detect_object_fcns.cpp.o \
.\mesf_princ.cpp.o \
.\ports_init.cpp.o \
.\ra_manufact_v0.cpp.o \
.\servos_fcn.cpp.o 

CPP_DEPS += \
.\bt_fcns.cpp.d \
.\detect_object_fcns.cpp.d \
.\mesf_princ.cpp.d \
.\ports_init.cpp.d \
.\ra_manufact_v0.cpp.d \
.\servos_fcn.cpp.d 


# Each subdirectory must supply rules for building sources it contributes
bt_fcns.cpp.o: ..\bt_fcns.cpp
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:\Users\alahp\Sloeber\arduinoPlugin\packages\arduino\tools\avr-gcc\7.3.0-atmel3.6.1-arduino7/bin/avr-g++" -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -Wno-error=narrowing -MMD -flto -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10812 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR     -I"C:\Users\alahp\Sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.8.3\cores\arduino" -I"C:\Users\alahp\Sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.8.3\variants\standard" -I"C:\Users\alahp\Sloeber\arduinoPlugin\libraries\Servo\1.1.8\src" -I"C:\Users\alahp\Sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.8.3\libraries\SoftwareSerial\src" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -x c++ "$<"   -o "$@"
	@echo 'Finished building: $<'
	@echo ' '

detect_object_fcns.cpp.o: ..\detect_object_fcns.cpp
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:\Users\alahp\Sloeber\arduinoPlugin\packages\arduino\tools\avr-gcc\7.3.0-atmel3.6.1-arduino7/bin/avr-g++" -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -Wno-error=narrowing -MMD -flto -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10812 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR     -I"C:\Users\alahp\Sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.8.3\cores\arduino" -I"C:\Users\alahp\Sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.8.3\variants\standard" -I"C:\Users\alahp\Sloeber\arduinoPlugin\libraries\Servo\1.1.8\src" -I"C:\Users\alahp\Sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.8.3\libraries\SoftwareSerial\src" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -x c++ "$<"   -o "$@"
	@echo 'Finished building: $<'
	@echo ' '

mesf_princ.cpp.o: ..\mesf_princ.cpp
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:\Users\alahp\Sloeber\arduinoPlugin\packages\arduino\tools\avr-gcc\7.3.0-atmel3.6.1-arduino7/bin/avr-g++" -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -Wno-error=narrowing -MMD -flto -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10812 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR     -I"C:\Users\alahp\Sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.8.3\cores\arduino" -I"C:\Users\alahp\Sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.8.3\variants\standard" -I"C:\Users\alahp\Sloeber\arduinoPlugin\libraries\Servo\1.1.8\src" -I"C:\Users\alahp\Sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.8.3\libraries\SoftwareSerial\src" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -x c++ "$<"   -o "$@"
	@echo 'Finished building: $<'
	@echo ' '

ports_init.cpp.o: ..\ports_init.cpp
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:\Users\alahp\Sloeber\arduinoPlugin\packages\arduino\tools\avr-gcc\7.3.0-atmel3.6.1-arduino7/bin/avr-g++" -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -Wno-error=narrowing -MMD -flto -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10812 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR     -I"C:\Users\alahp\Sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.8.3\cores\arduino" -I"C:\Users\alahp\Sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.8.3\variants\standard" -I"C:\Users\alahp\Sloeber\arduinoPlugin\libraries\Servo\1.1.8\src" -I"C:\Users\alahp\Sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.8.3\libraries\SoftwareSerial\src" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -x c++ "$<"   -o "$@"
	@echo 'Finished building: $<'
	@echo ' '

ra_manufact_v0.cpp.o: ..\ra_manufact_v0.cpp
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:\Users\alahp\Sloeber\arduinoPlugin\packages\arduino\tools\avr-gcc\7.3.0-atmel3.6.1-arduino7/bin/avr-g++" -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -Wno-error=narrowing -MMD -flto -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10812 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR     -I"C:\Users\alahp\Sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.8.3\cores\arduino" -I"C:\Users\alahp\Sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.8.3\variants\standard" -I"C:\Users\alahp\Sloeber\arduinoPlugin\libraries\Servo\1.1.8\src" -I"C:\Users\alahp\Sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.8.3\libraries\SoftwareSerial\src" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -x c++ "$<"   -o "$@"
	@echo 'Finished building: $<'
	@echo ' '

servos_fcn.cpp.o: ..\servos_fcn.cpp
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"C:\Users\alahp\Sloeber\arduinoPlugin\packages\arduino\tools\avr-gcc\7.3.0-atmel3.6.1-arduino7/bin/avr-g++" -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -Wno-error=narrowing -MMD -flto -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10812 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR     -I"C:\Users\alahp\Sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.8.3\cores\arduino" -I"C:\Users\alahp\Sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.8.3\variants\standard" -I"C:\Users\alahp\Sloeber\arduinoPlugin\libraries\Servo\1.1.8\src" -I"C:\Users\alahp\Sloeber\arduinoPlugin\packages\arduino\hardware\avr\1.8.3\libraries\SoftwareSerial\src" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -x c++ "$<"   -o "$@"
	@echo 'Finished building: $<'
	@echo ' '


