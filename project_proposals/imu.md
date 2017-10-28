# Rover Module: IMU Position and Motion Detection

### Project Lead:
TBA

### Project status:
 - [x] Ready: See the Software Coordinator ([Gregory O'Hagan](https://github.com/Gregory-OHagan)) or Electrical Coordinator (Matthew McCann) if you would like to start this project.
 - [ ] In progress: See the Project Lead for more information.

### Project description:
The purpose of this project is to build a module that communicates with an inertial mass unit (IMU) circuit fabricated by the electrical team.
For more details, see the [spec documents](https://drive.google.com/drive/folders/0B9K1Pk2jghQOaXJGUlFrck1PY2s)

### Project deliverables:
 * Use I2C to gather data from the IMU breakout board
 * Provide orientation, position and acceleration models
 * Set up the I2C network with multiple IMUs
 * Develop a system model

### Required language:
 * C++ (Arduino)

### Key skills:
 * I2C communication
 * Arduino basics

### Class:
These functions are provided only as a template and can be modified to suit the needs of the program. For where this will fit into the overall system, see the [class diagram](https://drive.google.com/file/d/0B6AtSNCj34-0V2FGU011Uk9NREE/view?usp=sharing).

#### read_positions:
 * Parameters:
   * double * x
   * double * y
   * double * z
 * Returns:
   * None
 * Specifications:
   * The total change in x, y, and z directions will be placed in the pointers
   * Measured in metres

#### read_velocities:
 * Parameters:
   * double * x
   * double * y
   * double * z
 * Returns:
   * None
 * Specifications:
   * The current x, y, and z speeds will be placed in the pointers.
   * Measured in m/s
   
   #### read_abs_angles:
 * Parameters:
   * Double * x
   * Double * y
   * Long * z
 * Returns:
   * None
 * Specifications:
   * The current angles in x, y and z directions will be placed in the pointers.
   * Measured in Degrees
   * Values must be in the range (0, 360]
   
   #### read_angular_velocity:
 * Parameters:
   * Double * x
   * Double * y
   * Double * z
 * Returns:
   * None
 * Specifications:
   * The total change in x, y and z directions since startup will be placed in the pointers.
   * Measured in degrees/second
