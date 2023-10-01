#include <iostream>
#include "WristWatch.h"
#include "WallClock.h"
#include "AnalogWatch.h"
#include "Clock.h"

int main() {  
    WristWatch wristWatch(12, 30, 0, true);
    WallClock wallClock(10, 45, 0, false);
    AnalogWatch analogWatch(9, 15, 0, true);

    std::cout << "Wrist Watch:" << std::endl;
    wristWatch.displayTime();
    wristWatch.wearWatch();

    std::cout << "\nWall Clock:" << std::endl;
    wallClock.displayTime();
    wallClock.hangOnWall();

    std::cout << "\nAnalog Watch:" << std::endl;
    analogWatch.displayTime();
    analogWatch.checkTime();

    return 0;
}
