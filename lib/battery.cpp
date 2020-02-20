#include "battery.h"
#include <iostream>


namespace Vehicles {
    Battery::Battery(double batteryVoltage) {
        std::cout << "- Inserting battery of " << batteryVoltage  << "V" << std::endl;
        this->batteryVoltage = batteryVoltage;
    }

    Battery::Battery(void) {
        std::cout << "- Inserting battery of " << this->batteryVoltage  << "V" << std::endl;
    }
};