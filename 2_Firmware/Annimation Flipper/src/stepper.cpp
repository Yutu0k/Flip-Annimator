#include "stepper.h"
#include <EEPROM.h>

bool clockwise=true;

CheapStepper stepper{STEPMOTOR_IN_1,STEPMOTOR_IN_2,STEPMOTOR_IN_3,STEPMOTOR_IN_4};


void backToOrigin(int ang){

    stepper.moveDegrees(clockwise,360-ang);
}


// void stepper_init(){
//     int pos=EEPROM.read(0)%10;
//     stepper.setRpm(10);
//     // backToOrigin(angle);

// }

void WholeFrame(){
    // int curPos=EEPROM.read(0)%10;

	int curLen=EEPROM.read(0);

    // Serial.print("Current Position=");
    // Serial.println(0);

    backToOrigin(curLen*21.6);
    delay(1000);
    stepper.moveDegrees(clockwise,21.6*10);
    EEPROM.write(0,0);
    EEPROM.commit();
    
}


void RandomFrame(){
    int seed=rand()%10+1;
    int angle=21.6*seed;

    // int curPos=EEPROM.read(0)%10;

	int curLen=EEPROM.read(0);

    // Serial.print("Current Position=");
    // Serial.println((curPos+seed)%10);

    EEPROM.write(0,(curLen+seed)%10);
    EEPROM.commit();

    stepper.moveDegrees(clockwise,angle);

}


void OneFrame(){
    // int curPos=EEPROM.read(0)%10;

	int curLen=EEPROM.read(0);

    // Serial.print("Current Position=");
    // Serial.println((curPos+1)%10);

    EEPROM.write(0,(curLen+1)%10);
    EEPROM.commit();

    stepper.moveDegrees(clockwise,21.6);

}

