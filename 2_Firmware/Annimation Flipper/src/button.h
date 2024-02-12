#ifndef BUTTON_H
#define BUTTON_H

#include "config.h"

extern Button2 button;

void button_init();
void SingleClickHandler(Button2 & button);
void LongClickHandler(Button2 & button);
void DoubleClickHandler(Button2 & button);



#endif