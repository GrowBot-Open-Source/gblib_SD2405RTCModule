#include <gb_SD2405_RTCModule.h>

gb_SD2405_RTCModule clock;

void setup()
{
    Serial.begin(9600);
    clock.setupRtc();
}

void loop()
{
    clock.getTime();
}