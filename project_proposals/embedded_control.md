# Rover Module: Embedded Motor Control

### Project Lead:
TBA

### Project status:
 - [x] Ready: See the Software Coordinator ([Gregory O'Hagan](https://github.com/Gregory-OHagan)) if you would like to start this project.
 - [ ] In progress: See the Project Lead for more information.

### Project description:
The scope of the project is to build a code package for control of a network of motors using the Arduino Nano platform.  Defining the project, the motor control must be carried out using interrupts for speed control and position feedback.  Motor control is implemented using pulse-width-modulation (PWM) using 5v logic to control H-Bridge control of 24v from the battery.

### Project constraints:
 * Arduino code must handle two interrupts
 * Must create a C++ class where the pins are specified
 * PID control of motor position using the encoder feedback

### Required language:
 * C++ (Arduino)

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
