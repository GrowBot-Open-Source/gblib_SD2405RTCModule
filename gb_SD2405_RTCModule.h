#ifndef gb_SD2405_RTCModule_h
#define gb_SD2405_RTCModule_h

#include <Arduino.h>

class gb_SD2405_RTCModule
{
private:
    
public:
    String timeStamp;
    void setupRtc();
    String getTime();
};

#endif