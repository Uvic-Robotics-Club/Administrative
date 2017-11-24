/*  A simple tester for the rotary_encoder class
 *  Checks the encoder each second and sends the value over 
 *  
 *  Author: Gregory O'Hagan
 */

#include "rotary_encoder.h"

#define A_ENCODER1 A0

// This makes encoder1 global, simplifying this simple tester program
Rotary_encoder encoder1;

void setup() {
  // starts the encoder and serial
  encoder1.begin(A_ENCODER1);
  Serial.begin(9600);
}

void loop() {
  // Read the encoder value and send the value over serial once each second:
  int val = encoder1.get_angle();
  intWrite(val);
  delay(1000);
}

//Sends a 4-digit positive integer across the serial, ending with a newline character
void intWrite(int val){
  int chars [4];
  // Breaks the value into a 4-character representation
  // 48 is '0' is ASCII, and the digits count from there
  chars[0] = (val / 1000) % 10 + 48;
  chars[1] = (val / 100) % 10 + 48;
  chars[2] = (val / 10) % 10 + 48;
  chars[3] = val % 10 + 48;
  for (int i = 0; i < 4; ++i){
    Serial.write(chars[i]);
  }
  // 10 is a "newline" character
  Serial.write(10);
}

