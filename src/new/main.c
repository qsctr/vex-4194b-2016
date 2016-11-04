#pragma config(I2C_Usage, I2C1, i2cSensors)
#pragma config(Sensor, in1,    potArm,         sensorPotentiometer)
#pragma config(Sensor, in2,    potClaw,        sensorPotentiometer)
#pragma config(Sensor, in3,    powerExpander,  sensorAnalog)
#pragma config(Sensor, I2C_1,  eBaseFL,        sensorQuadEncoderOnI2CPort,    , AutoAssign )
#pragma config(Sensor, I2C_2,  eBaseFR,        sensorQuadEncoderOnI2CPort,    , AutoAssign )
#pragma config(Sensor, I2C_3,  eBaseBL,        sensorQuadEncoderOnI2CPort,    , AutoAssign )
#pragma config(Sensor, I2C_4,  eBaseBR,        sensorQuadEncoderOnI2CPort,    , AutoAssign )
#pragma config(Sensor, I2C_5,  eBaseStrafe,    sensorQuadEncoderOnI2CPort,    , AutoAssign )
#pragma config(Motor,  port1,           mBaseStrafe,   tmotorVex393_HBridge, openLoop, encoderPort, I2C_5)
#pragma config(Motor,  port2,           mBaseFL,       tmotorVex393TurboSpeed_MC29, openLoop, encoderPort, I2C_1)
#pragma config(Motor,  port3,           mBaseFR,       tmotorVex393TurboSpeed_MC29, openLoop, reversed, encoderPort, I2C_2)
#pragma config(Motor,  port4,           mBaseBL,       tmotorVex393TurboSpeed_MC29, openLoop, encoderPort, I2C_3)
#pragma config(Motor,  port5,           mBaseBR,       tmotorVex393TurboSpeed_MC29, openLoop, reversed, encoderPort, I2C_4)
#pragma config(Motor,  port6,           mArmL1,        tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port7,           mArmL2,        tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port8,           mArmR1,        tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port9,           mArmR2,        tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port10,          mClaw,         tmotorVex393_HBridge, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

/* ======================================================================================================
   ___________________________________________________________________________________________________
  |  __        __   ________   __     __       __        ______   __     __   _________    ________   |
  |  \ \      / /  |   _____|  \ \   / /      /  \      |  _   \  \ \   / /  |___   ___|  |   _____|  |
  |   \ \    / /   |  |_____    \ \_/ /      / /\ \     | |_|  /   \ \_/ /       | |      |  |_____   |
  |    \ \  / /    |   _____|    ) _ (      / /__\ \    |  _  |     \   /        | |      |   _____|  |
  |     \ \/ /     |  |_____    / / \ \    / ______ \   | |_|  \     | |         | |      |  |_____   |
  |      \__/      |________|  /_/   \_\  /_/      \_\  |______/     |_|         |_|      |________|  |
  |___________________________________________________________________________________________________|

====================================================================================================== */

#pragma platform(VEX)
#pragma competitionControl(Competition)
#pragma autonomousDuration(15)
#pragma userControlDuration(105)

#include "Vex_Competition_Includes.c"
#include "both.c"
#include "autonomous.c"
#include "driver_control.c"

// Current status of robot: terrible
