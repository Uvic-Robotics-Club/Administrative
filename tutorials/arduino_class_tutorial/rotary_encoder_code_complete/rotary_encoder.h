/*  Header file for the rotary_encoder class
 *  Author: Gregory O'Hagan
 */

#pragma once

// All header files should be protected by these compiler commands
// This prevents compiler errors if multiple files import the same header
// (A very common error in larger programs)
#ifndef _rotary_encoder_h
#define _rotary_encoder_h

// Must include this to use built in Arduino functions (in this case, analogRead)
#include <Arduino.h>

class Rotary_encoder{
  // Public functions are how the outside world interacts with the class
  public:
    Rotary_encoder();
    void begin(int pinNum);
    int get_angle();
    int get_angle_change();
    
  // All variables should be private unless there is a very good reason otherwise
  // Some classes will also have private functions
  private:
    int lastAngle;
    int sensorPin;
};  //Note the semi-colon at the end of a class declaration!

// Closing command for the protection at the top of the file.
#endif
