#include <Arduino.h>

#ifndef __EVENTTIMER_H
#define __EVENTTIMER_H

class eventTimer {
  private: //variables to be used later
    uint32_t duration;
    uint32_t startTime;
    bool isRunning = true;
    
  public: //fuction definitions
    eventTimer(void);
    void start(uint32_t timeMS = 500); //default timer is .5 seconds
    bool checkExpired(void);
    void cancel(void);
};
#endif
