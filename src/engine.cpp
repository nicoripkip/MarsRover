#include <Arduino.h>
#include "headers/engine.hpp"


/**
 * @brief Collection voor de status van de richting van de motor
 * 
 */
enum 
{
    FORWARD = 1,
    BACKWARD = 2,
};


/**
 * @brief Collection voor de status of de motor stroom krijgt of niet
 * 
 */
enum 
{
    ON,
    OFF,
};


/**
 * @brief Construct a new Engine:: Engine object
 * 
 * @param motor_pin_1 
 * @param motor_pin_2 
 */
Engine::Engine(uint16_t* motor_pin_1, uint16_t* motor_pin_2)
{
    this->set_engine_pin_1(motor_pin_1);
    this->set_engine_pin_2(motor_pin_2);
}


/**
 * @brief Functie om de pin van motor 1 te zetten
 * 
 * @param pin 
 */
void Engine::set_engine_pin_1(uint16_t* pin)
{
    this->engine_pin_1 = pin;
}


/**
 * @brief Functie om de pin van motor 2 te zetten
 * 
 * @param pin 
 */
void Engine::set_engine_pin_2(uint16_t* pin)
{
    this->engine_pin_2 = pin;
}


/**
 * @brief Functie om de pinnummer van engine 1 te returnen
 * 
 * @return uint16_t 
 */
uint16_t* Engine::get_engine_pin_1()
{
    return this->engine_pin_1;
}


/**
 * @brief Functie om de pin van motor 2 op te halen
 * 
 * @return uint16_t* 
 */
uint16_t* Engine::get_engine_pin_2()
{
    return this->engine_pin_2;
}


/**
 * @brief Functie om de motor te starten
 * 
 */
void Engine::start() 
{
    if (this->drive_state == OFF) {
        this->drive_state == ON;
    }
}


/**
 * @brief Functie om de motor te stoppen
 * 
 */
void Engine::stop()
{
    if (this->drive_state == ON) {
        this->drive_state == OFF;
    }
}


/**
 * @brief Functie om de motor te laten draaien
 * 
 */
void Engine::run()
{
    if (this->drive_state == ON) {
        // TODO motor laten draaien
    }
}


/**
 * @brief Functie om de richting te toggleen
 * 
 */
void Engine::toggle_direction()
{
    switch (direction_state) {
        case FORWARD:
            this->direction_state = BACKWARD;
        break;
        case BACKWARD:
            this->direction_state = FORWARD;
        break;
        default:
            this->direction_state = FORWARD;
        break;
    }
}