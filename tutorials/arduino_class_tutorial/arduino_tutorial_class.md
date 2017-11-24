# Rover Module: Rotary Encoder

### Project Lead:
TBA

### Project status:
 - [x] Tutorial - Ready: All members are welcome to try this project. See the Software Coordinator ([Gregory O'Hagan](https://github.com/Gregory-OHagan)) if you have any questions.

### Project description:
The purpose of this project is to build a motor encoder library for Arduinos. This is a fairly short project, which will introduce members to programming classes on Arduinos.

### Project deliverables:
 * Read analog values from an Arduino pin
 * Learn class-based programming for Arduinos in C++

### Required language:
 * C++ (Arduino)

### Key skills:
 * Arduino basics
 * Class-based programming

### Class: Rotary_encoder
These are the functions that the provided test program will expect.

#### (constructor):
 * Parameters:
   * None
 * Returns:
   * None
 *Specifications:
   * This initializes the object, but does not start anything. All setup work will be done in the begin method below.

#### begin:
 * Parameters:
   * int pinNum
 * Returns:
   * None
 * Specifications:
   * The pinNum is provided as an integer. This should be stored as a private variable, and can be directly used with the analogRead() function

#### get_angle:
 * Parameters:
   * None
 * Returns:
   * int current angle
 * Specifications:
   * Angles must be in degrees (0 to 360)
   
   #### get_angle_change:
 * Parameters:
   * None
 * Returns:
   * int angle
 * Specifications:
   * Angles must be in degrees (0 to 360)
   * Reads the change from the last get_angle OR get_angle_change call
