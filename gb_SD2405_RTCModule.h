#ifndef gb_SD2405_RTCModule.h
#define gb_SD2405_RTCModule.h

#include <Arduino.h>

class gb_SD2405_RTCModule
{
public:
    void setupRtc();
    void getTime();
};

#endif