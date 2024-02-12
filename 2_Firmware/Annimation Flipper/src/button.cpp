#include "button.h"
#include "stepper.h"

Button2 button;

void SingleClickHandler(Button2 & button){
    
    OneFrame();
    Serial.println("Single Clicked!");

};

void LongClickHandler(Button2 & button){

    WholeFrame();
    Serial.println("Long Clicked!");
};

void DoubleClickHandler(Button2 & button){

    RandomFrame();
    Serial.println("Double Clicked!");
    
};


void button_init(){
    button.begin(Button_Pin);
    button.setClickHandler(SingleClickHandler);
    button.setDoubleClickHandler(DoubleClickHandler);
    button.setLongClickHandler(LongClickHandler);
}

