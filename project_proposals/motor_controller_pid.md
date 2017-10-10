# Rover Module: Motor Controller - PID

### Project Lead:
(Open)

### Project status:
 - [ ] Waiting: Waiting on the [Rotary Encoder](/rotary_encoder.md) project to start this one.
 - [ ] Ready: See the Software Coordinator ([Gregory O'Hagan](https://github.com/Gregory-OHagan)) if you would like to start this project.

### Project description:
The purpose of this project is to integrate a [PID controller](https://en.wikipedia.org/wiki/PID_controller) with the rotary encoder that is on the wheels. This allows for high level systems to set a position, velocity, or acceleration and the motor controller will make it happen.

### Project constraints:
 * Must create a C++ class or use [existing PID controller](https://github.com/br3ttb/Arduino-PID-Library) with proper referencing. NOTE: The linked PID controller is only an example. Please choose a PID controller that fits your needs.
 * Must be able to set the max for acceleration and velocity.

### Required language:
 * C++

### Key skills:
 * Arduino basics
 * Arduino classes

### Class:
These functions are provided only as a template and can be modified to suit the needs of the program.

#### update:
 * Parameters:
   * a double representing the actual value of position, speed, or acceleration
 * Returns:
   * a double from -100% to 100% of how the system should respond.
 * Specifications:
   * Positive numbers are assumed to be forward rotation while negative are backwards rotation.

#### setpoint:
* Parameters:
  * a double that updates the current setpoint inside the pid object
* Returns:
  * None
* Specifications:
  * None

#### velocity_max:
  * Parameters:
    * a double that updates the maximum velocity that the rover can go
  * Returns:
    * None
  * Specifications:
    * This is assumed to be the positive and negative maximum

#### accel_max:
      * Parameters:
        * a double that updates the maximum acceleration that the rover can go
      * Returns:
        * None
      * Specifications:
        * This is assumed to be the positive and negative maximum

#### set_mode:
      * Parameters:
        * an integer that specifies the mode of operation. Eg. 1 = position mode, 2 = velocity mode, 3 = acceleration mode
      * Returns:
        * None
      * Specifications:
        * Must have protection if a wrong input is entered
        * Must limit ramping of output based on the mode that is selected.
