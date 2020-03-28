#include <Arduino.h>

#define PIN 5

void setup() {
    Serial.begin(115200);
    pinMode(PIN, OUTPUT);
}

void loop() {
    Serial.println("writing HIGH");
    digitalWrite(PIN, HIGH);
    delay(1000);

    Serial.println("writing LOW");
    digitalWrite(PIN, LOW);
    delay(1000);
}
