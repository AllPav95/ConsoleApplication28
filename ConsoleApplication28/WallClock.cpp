#include "WallClock.h"
#include <iostream>

WallClock::WallClock(int hour, int minute, int second, bool isTicking)
    : Clock(hour, minute, second), isTicking(isTicking) {}

void WallClock::hangOnWall() const {
    std::cout << "Hanging wall clock on the wall" << std::endl;
    if (isTicking) {
        std::cout << "Clock is ticking" << std::endl;
    }
    else {
        std::cout << "Clock is not ticking" << std::endl;
    }
}