#include "gb_SD2405_RTCModule.h"
#include <GravityRtc.h>

GravityRtc rtc;

void gb_SD2405_RTCModule::setupRtc()
{
    rtc.setup();
    rtc.adjustRtc(F(__DATE__), F(__TIME__));
}

String gb_SD2405_RTCModule::getTime()
{
    rtc.read();
}