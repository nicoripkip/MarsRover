#ifndef __DC__ENGINE__
#define __DC__ENGINE__


#include <Arduino.h>


/**
 * @brief Classe voor het opzetten van een motor object
 * 
 */
class Engine
{
    private:
        uint16_t* engine_pin_1;
        uint16_t* engine_pin_2;
        uint8_t drive_state;
        uint8_t direction_state;

        void set_engine_pin_1(uint16_t*);
        void set_engine_pin_2(uint16_t*);

    public:
        Engine(uint16_t*, uint16_t*);
        uint16_t* get_engine_pin_1();
        uint16_t* get_engine_pin_2();
        void start();
        void stop();
        void run();
        void toggle_direction();
        uint8_t get_direction_state();
};

#endif