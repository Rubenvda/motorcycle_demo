#pragma once

namespace Vehicles {
    class Battery {

        public:
            Battery(void);
            Battery(double batteryVoltage);

        private:
            double batteryVoltage = 0.0;
    };
};