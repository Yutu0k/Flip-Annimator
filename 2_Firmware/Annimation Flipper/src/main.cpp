#include <Arduino.h>
#include "config.h"
#include "stepper.h"
#include "button.h"
#include <EEPROM.h>

// #include "CheapStepper.h"
// CheapStepper stepper_trial{STEPMOTOR_IN_1,STEPMOTOR_IN_2,STEPMOTOR_IN_3,STEPMOTOR_IN_4};

void setup() {
    EEPROM.begin(4);
    Serial.begin(9600);

    // Stepper Init
    // stepper_init();

    // // BUTTON Init
    button_init();


    
}

void loop() {

     button.loop();

    // stepper_trial.moveDegreesCCW(90);
    // delay(1000);
}

