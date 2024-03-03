#include "Wire.h"
#include "Arduino.h"

#define INITIAL_ADDRESS 0x72
#define NEW_ADDRESS 0x73

void setup() {
    Serial.begin(115200);
    Wire.begin();

    Wire.beginTransmission(INITIAL_ADDRESS);
    Wire.write(0xA0);
    delay(200);
    Wire.write(0xAA);
    delay(200);
    Wire.write(0xA5);
    delay(200);
    Wire.write(NEW_ADDRESS);
    delay(200);
}

void loop() {

}