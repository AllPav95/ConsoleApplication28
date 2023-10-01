#include "WristWatch.h"
#include <iostream>

WristWatch::WristWatch(int hour, int minute, int second, bool hasStrap)
    : Clock(hour, minute, second), hasStrap(hasStrap) {}

void WristWatch::wearWatch() const {
    std::cout << "Wearing wristwatch" << std::endl;
    if (hasStrap) {
        std::cout << "With a strap" << std::endl;
    }
    else {
        std::cout << "Without a strap" << std::endl;
    }
}