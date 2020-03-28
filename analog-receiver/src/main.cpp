#include <Arduino.h>

#define PIN A5

void setup() {
    Serial.begin(115200);
    pinMode(PIN, INPUT);
}

void loop() {
    Serial.println(analogRead(PIN));
    delay(200);
}
