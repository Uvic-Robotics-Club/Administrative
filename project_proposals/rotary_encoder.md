# Rover Module: Rotary Encoder

### Project Lead:
(Open)

### Project status:
 - [ ] Ready: See the Software Coordinator ([Gregory O'Hagan](https://github.com/Gregory-OHagan)) if you would like to start this project.

### Project description:
The purpose of this project is to create an interface on an arduino that will be
able to read a quadrature rotary encoder signal from our motors. [more info](http://www.dynapar.com/Technology/Encoder_Basics/Quadrature_Encoder/)
This information will be used to calculate the position, velocity, and acceleration.

### Project constraints:
 * Arduino code must use one and only one interrupt
 * Must create a C++ class where the pins are specified
 * Must have error handling if user specifies non-interrupt pins (must happen at compile time)

### Required language:
 * C++

### Key skills:
 * Microcontroller interrupts
 * Arduino basics 

### Class:
These functions are provided only as a template and can be modified to suit the needs of the program.

#### read:
 * Parameters:
   * None
 * Returns:
   * the number of pulses that has occurred as a [signed long](https://learn.sparkfun.com/tutorials/data-types-in-arduino).
 * Specifications:
   * Positive numbers are assumed to be forward rotation while negative are backwards rotation.

#### last_read:
* Parameters:
  * None
* Returns:
  * the number of pulses that has occurred since the last read or last_read function as a [signed long](https://learn.sparkfun.com/tutorials/data-types-in-arduino).
* Specifications:
  * Positive numbers are assumed to be forward rotation while negative are backwards rotation.
