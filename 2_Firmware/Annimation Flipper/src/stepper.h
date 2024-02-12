#ifndef STEPPER_H
#define STEPPER_H

#include "config.h"

extern CheapStepper stepper;

void stepper_init();

void WholeFrame();
void RandomFrame();
void OneFrame();


#endif