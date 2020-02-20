#pragma once

#include "motor.h"
#include "battery.h"

namespace Vehicles {
    class Motorcycle {

        public:
            Motorcycle(void);
            Motorcycle(double batteryVoltage, int capacity);

        private:
        //composition here
            Motor motor;
            Battery battery; //attribuut naam

    };
};

