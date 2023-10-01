#ifndef ANALOGWATCH_H
#define ANALOGWATCH_H
#include "Clock.h"

class AnalogWatch final: public Clock {
public:
    AnalogWatch(int hour, int minute, int second, bool hasHands);
    void checkTime() const;
    inline void setHasHands(bool newHasHands) { hasHands = newHasHands; }
private:
    bool hasHands;
};

#endif