#include "Clock.h"
#include <iostream>

Clock::Clock(int hour, int minute, int second)
    : hour(hour), minute(minute), second(second) {}

void Clock::displayTime() const { 
    std::cout << "Time: " << hour << ":" << minute << ":" << second << std::endl;
}