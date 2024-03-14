/*********************************************************************
 * gb_SD2405_RTCModule.h
 *
 * Copyright (C)    20124   [GrowBot Open Source],
 * GitHub Link :XXXXX
 * This Library is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Description:Implement DFRobot RTC module into the growbot system
 *
 * Product Links：https://www.dfrobot.com/wiki/index.php/Gravity:_I2C_SD2405_RTC_Module_SKU:_DFR0469
 *
 * Sensor driver pin：I2C
 *
 * author  :  GrowBot
 * version :  V1.0
 * date    :  2024-05-14
 **********************************************************************/

#include "gb_SD2405_RTCModule.h"
#include <Arduino.h>
#include <GravityRtc.h>

GravityRtc rtc;

gb_SD2405_RTCModule::gb_SD2405_RTCModule(){};

//********************************************************************************************
// Function Name: setupRtc()
// Function Declaration: start and setup rtc module
//********************************************************************************************
void gb_SD2405_RTCModule::setupRtc()
{
    rtc.setup();
    rtc.adjustRtc(F(__DATE__), F(__TIME__));
}

//********************************************************************************************
// Function Name: getTime()
// Function Declaration: get timestamp of now
//********************************************************************************************
String gb_SD2405_RTCModule::getTime()
{
    rtc.read();
}