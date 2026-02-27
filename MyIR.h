#ifndef MyIR_h
#define MyIR_h

#include "Arduino.h"

class MyIR {
  public:
    MyIR(int pin);
    void begin();
    bool decode();
    uint32_t decodedValue;
  private:
    int _pin;
    unsigned long pulseInCustom(bool state);
};

#endif
