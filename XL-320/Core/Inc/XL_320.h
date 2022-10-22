/*
 * XL_320.h
 *
 *  Created on: Oct 22, 2022
 *      Author: cheik
 */

#ifndef INC_XL_320_H_
#define INC_XL_320_H_


//// Instructions
#define XL320_PING 0x01
#define XL320_READ 0x02
#define XL320_WRITE 0x03
#define XL320_REG_WRITE 0x04
#define XL320_ACTION 0x05
#define XL320_RESET 0x06
#define XL320_REBOOT 0x08
#define XL320_CLEAR 0X10
#define XL320_CONTROL_TABLE_BACKUP 0X20
#define XL320_STATUS 0x55
#define XL320_SYNC_READ 0x82
#define XL320_SYNC_WRITE 0x83
#define XL320_FAST_SYNC_READ 0X8A
#define XL320_BULK_READ 0x92
#define XL320_BULK_WRITE 0x93
#define XL320_FAST_BULK_READ 0x9A

//// EEPROM
#define XL320_MODEL_NUMBER 0
#define XL320_FIRMWARE_VERSION 2
#define XL320_ID 3
#define XL320_BAUD_RATE 4
#define XL320_RETURN_DELAY_TIME 5
#define XL320_CW_ANGLE_LIMIT 6   // min angle, default 0
#define XL320_CCW_ANGLE_LIMIT 8   // max angle, default 300
#define XL320_CONTROL_MODE 11  // joint or wheel mode, default joint (servo)
#define XL320_TEMPERATURE_LIMIT 12
#define XL320_MIN_VOLTAGE_LIMIT 13
#define XL320_MAX_VOLTAGE_LIMIT 14
#define XL320_MAX_TORQUE 15
#define XL320_STATUS_RETURN_LEVEL 17
#define XL320_SHUTDOWN 18

//// RAM
#define XL320_TORQUE_ENABLE 24  // servo mode on/off - turn into wheel
#define XL320_LED 25
#define XL320_D_GAIN 27
#define XL320_I_GAIN 28
#define XL320_P_GAIN 29
#define XL320_GOAL_POSITION 30
#define XL320_MOVING_SPEED 32
#define XL320_TORQUE_LIMIT 35
#define XL320_PRESENT_POSITION 37  // current servo angle
#define XL320_PRESENT_SPEED 39  // current speed
#define XL320_PESENT_LOAD 41  // current load
#define XL320_PESENT_VOLTAGE 45  // current voltage
#define XL320_PESENT_TEMPERATURE 46  // current temperature
#define XL320_REGISTERED_INSTRUCTION 47
#define XL320_MOVING 49
#define XL320_HARDWARE_ERROR_STATUS 50
#define XL320_PUNCH 51

//// OTHER
#define XL320_RESET_ALL 0xFF
#define XL320_RESET_ALL_BUT_ID 0x01
#define XL320_RESET_ALL_BUT_ID_BAUD_RATE 0x02
#define XL320_LED_WHITE 7
#define XL320_LED_BLUE_GREEN 6
#define XL320_LED_PINK 5
#define XL320_LED_BLUE 4
#define XL320_LED_YELLOW 3
#define XL320_LED_GREEN 2
#define XL320_LED_RED 1
#define XL320_LED_OFF 0
#define XL320_BROADCAST_ADDR 0xfe  // a packet with this ID will go to all servos
#define XL320_WHEEL_MODE 1
#define XL320_JOINT_MODE 2  // normal servo
#define XL320_9600 0  // 0: 9600, 1:57600, 2:115200, 3:1Mbps
#define XL320_57600 1
#define XL320_115200 2
#define XL320_1000000 3








#endif /* INC_XL_320_H_ */
