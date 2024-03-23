#include <gb_SD2405_RTCModule.h>

gb_SD2405_RTCModule rtcClock;

void setup()
{
    Serial.begin(9600);
    rtcClock.setupRtc();
}

void loop()
{
    Serial.println(rtcClock.getTime());
    delay(1000);
}