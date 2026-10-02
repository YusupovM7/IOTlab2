


#include "Arduino.h"
int min=0;
int max=0;
float avg=0;
int sum = 0;
int s[10]={};
{
    serial.begin(115200);
}


/****************************************************/
void loop(void) {
    for (int i=0; i<10; i++) {
        s[i]=analogRead(33)
        min=s[i]
    }

    for (int i = 0; i < 10; i++) {

        if (s[i] < min) {
            min = s[i];
        }

        if (s[i] > max) {
            max = s[i];
        }

        sum += s[i];
    }

    avg = (float)sum / 10;

    serial.print("min=");
    serial.print(min);
    delay(1000)

    serial.print(" max=");
    serial.print(max);
    delay(1000)

    serial.print(" avg=");
    serial.print(avg);
}
