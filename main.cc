#include <Arduino.h>

void setup(){
    Serial.begin(9600);
    Serial.println("Hello From Arduino!");
}

void loop(){
    delay(1000);
    digitalWrite(8, HIGH);
    delay(1000);
    digitalWrite(8, LOW);
}
