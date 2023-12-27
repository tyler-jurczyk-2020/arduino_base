#include "HardwareSerial.h"
#include <Arduino.h>

void setup(){
    Serial.begin(9600);
    Serial.println("Hello From Arduino!");
}

void loop(){
    delay(1000);
    Serial.println("Whatup Slime");
}
