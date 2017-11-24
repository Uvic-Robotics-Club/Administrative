/* Sample code for the complete class
 * Author: Gregory O'Hagan
*/ 

#include "rotary_encoder.h"

// Initializes the object. DOES NOT do any setup
Rotary_encoder::Rotary_encoder(){
}


// Does most of the setup work
void Rotary_encoder::begin(int pinNum){
  sensorPin = pinNum;
  lastAngle = int(double(analogRead(sensorPin)) * 360 / 1024);
}


// Reads the current angle
int Rotary_encoder::get_angle(){
  int newAngle = int(double(analogRead(sensorPin)) * 360 / 1024);
  lastAngle = newAngle;
  return newAngle;
}


// Reads the angle change from the last get_angle or get_angle_change call
int Rotary_encoder::get_angle_change(){
  int newAngle = int(double(analogRead(sensorPin)) * 360 / 1024);
  int result = newAngle - lastAngle;
  lastAngle = newAngle;
  return result;
}

