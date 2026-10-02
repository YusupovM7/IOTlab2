


#include "Arduino.h"
int leds[]={26,27, 12, 14, 12, 27};

string names[]={"RED", "GREEN", "YELLOW", "BLUE", "YELLOW", "GREEN"};

int stepIndex=0;

/****************************************************/
void setup(void) {
    serial.begin(115200);
    pinMode(26, OUTPUT);
    pinMode(27, OUTPUT);
    pinMode(12, OUTPUT);
    pinMode(14, OUTPUT);
}


/****************************************************/
void loop(void) {
    digitalWrite(26, LOW);
    digitalWrite(27, LOW);
    digitalWrite(12, LOW);
    digitalWrite(14, LOW);

    digitalWrite(leds[stepIndex], HIGH);
    serial.print("chase=");
    serial.println(names[stepIndex]);
    stepIndex++
    delay(150);

    if (stepIndex>=6) {
        stepIndex==0;
    }

}
