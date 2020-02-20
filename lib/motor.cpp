#include "motor.h"

#include <iostream>

namespace Vehicles {
    Motor::Motor(void) {
        std::cout << "- Constructing motor" << std::endl;
    }

    Motor::Motor(int capacity) {
        std::cout << "- Constructing motor of " << capacity  << "CC" << std::endl;
    }
};