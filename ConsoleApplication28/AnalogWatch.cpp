#include "AnalogWatch.h"
#include <iostream>

AnalogWatch::AnalogWatch(int hour, int minute, int second, bool hasHands)
    : Clock(hour, minute, second), hasHands(hasHands) {}

void AnalogWatch::checkTime() const {
    std::cout << "Checking analog watch" << std::endl;
    if (hasHands) {
        std::cout << "Watch has hands" << std::endl;
    }
    else {
        std::cout << "Watch doesn't have hands" << std::endl;
    }
}