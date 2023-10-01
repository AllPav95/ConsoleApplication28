#ifndef WALLCLOCK_H
#define WALLCLOCK_H
#include "Clock.h"

class WallClock : public Clock {
public:
    WallClock(int hour, int minute, int second, bool isTicking);
    void hangOnWall() const;
    inline void setIsTicking(bool newIsTicking) { isTicking = newIsTicking; }
private:
    bool isTicking;
};

#endif