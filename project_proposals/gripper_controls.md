+# Rover Module: Gripper Controls System
 +
 +### Project Lead:
 +TBA
 +
 +### Project status:
 + - [x] Ready: See the Software Coordinator ([Gregory O'Hagan](https://github.com/Gregory-OHagan)) if you would like to start this project.
 + - [ ] In progress: See the Project Lead for more information.
 +
 +### Project description:
 +The scope of the project is to assemble and program a gripper control system that consists of a small motor with electronics for gripper control. The goal is to configure the motor, use IMU data as feedback, and create a controls system for retrieving objects. A keen student may further develop this project in areas of fabricating an enclosure, or further software implementation for automation. Implementation of this project involves embedded programming with an Arduino, servo motor control, and handling i2c feedback from the IMU and commands from the I2C master.
 +
 +### Project constraints:
 + * Arduino code must handle two interrupts
 + * Must create a C++ class where the pins are specified
 + * Use motor control to orient the gripper
 + * IMU data models position
 + * Provide fault conditions for CPU feedback on its status
 +
 +### Required language:
 + * C++
 +
 +### Key skills:
 + * Microcontroller interrupts
 + * Arduino basics 
 +
 +### Class:
 +These functions are provided only as a template and can be modified to suit the needs of the program.
 +
 +#### read:
 + * Parameters:
 +   * None
 + * Returns:
 +   * the number of pulses that has occurred as a [signed long](https://learn.sparkfun.com/tutorials/data-types-in-arduino).
 + * Specifications:
 +   * Positive numbers are assumed to be forward rotation while negative are backwards rotation.
 +
 +#### last_read:
 +* Parameters:
 +  * None
 +* Returns:
 +  * the number of pulses that has occurred since the last read or last_read function as a [signed long](https://learn.sparkfun.com/tutorials/data-types-in-arduino).
 +* Specifications:
 +  * Positive numbers are assumed to be forward rotation while negative are backwards rotation.
 +