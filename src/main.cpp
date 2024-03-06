#include "Wire.h"
#include "Arduino.h"

// define the original address
#define ORIGINAL_ADDRESS 0x72
//define the new address
#define NEW_ADDRESS 0xEE

void setup() {
    Wire.begin();
    Wire.beginTransmission(ORIGINAL_ADDRESS);
    Wire.write(0x00);
    Wire.write(0xA0);
    Wire.endTransmission();
    delay(50);
    Wire.beginTransmission(ORIGINAL_ADDRESS);
    Wire.write(0x00);
    Wire.write(0xAA);
    Wire.endTransmission();
    delay(50);
    Wire.beginTransmission(ORIGINAL_ADDRESS);
    Wire.write(0x00);
    Wire.write(0xA5);
    Wire.endTransmission();
    delay(50);
    Wire.beginTransmission(ORIGINAL_ADDRESS);
    Wire.write(0x00);
    Wire.write(NEW_ADDRESS);
    Wire.endTransmission();
    delay(50);
}

void loop() {

}