


#include "Arduino.h"


/****************************************************/


int count = 0;
bool lastButtonState = LOW;

void setup() {
    Serial.begin(115200);

    pinMode(25, INPUT);
    pinMode(26, OUTPUT);
    pinMode(27, OUTPUT);
    pinMode(12, OUTPUT);
    pinMode(14, OUTPUT);
}

void loop() {
    bool buttonState = digitalRead(25);

    if (buttonState == HIGH && lastButtonState == LOW) {
        count++;

        if (count == 4) {
            count = 0;
        }

        Serial.print("count=");
        Serial.println(count);

        digitalWrite(26, LOW);
        digitalWrite(27, LOW);
        digitalWrite(12, LOW);
        digitalWrite(14, LOW);

        if (count >= 1) {
            digitalWrite(26, HIGH);
        }

        if (count >= 2) {
            digitalWrite(27, HIGH);
        }

        if (count >= 3) {
            digitalWrite(12, HIGH);
        }

        if (count >= 4) {
            digitalWrite(14, HIGH);
        }
    }

    lastButtonState = buttonState;

    delay(20);
}
