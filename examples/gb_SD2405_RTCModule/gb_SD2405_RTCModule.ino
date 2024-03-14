#include <gb_SD2405_RTCModule.h>
#include <Arduino.h>
#include <Wire.h>
#include <GravityRtc.h>

gb_SD2405_RTCModule clock("Testing");

void setup()
{
    Serial.begin(9600);
    clock.setupRtc();
}

void loop()
{
    clock.getTime();
}