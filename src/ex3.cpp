


#include "Arduino.h"

bool alertActive = false;

void setup() {
    Serial.begin(115200);
}

void loop() {
    int light = analogRead(33);

    if (light > 3000 && !alertActive) {
        alertActive = true;
        Serial.println("ALERT=1");
    }

    if (light < 2500 && alertActive) {
        alertActive = false;
        Serial.println("ALERT=0");
    }

    delay(300);
}
