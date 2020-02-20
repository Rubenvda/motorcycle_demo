#include "motorcycle.h"

#include <iostream>

namespace Vehicles {
    
    Motorcycle::Motorcycle(void) 
    : Motorcycle(12.0, 900)
    {
        
    }

    Motorcycle::Motorcycle(double batteryVoltage, int capacity) 
    : battery(batteryVoltage), motor(capacity)
    {
        std::cout << "- Constructing motorcycle" << std::endl;
    }
};

