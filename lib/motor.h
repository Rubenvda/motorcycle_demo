#pragma once

namespace Vehicles {
    class Motor {

        public:
            Motor(void);
            Motor(int capacity);
        
        private:
            int capacity = 100;
    };
};