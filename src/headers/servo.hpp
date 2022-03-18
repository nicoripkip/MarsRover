#ifndef __SERVO__STEERING__
#define __SERVO__STEERING__


#include <Arduino.h>


class Steering
{
    private:
        uint16_t* servo_pin;

        void set_servo_pin(uint16_t* pin);

    public:
        Steering(uint16_t*);
};

#endif