## Arduino Style Guide

For consistency, code style and naming conventions should generally match the [Python guidelines](https://github.com/Uvic-Robotics-Club/Administrative/code_standards/python_standards.md). 

However, there are a few concerns specific to arduino programming:
 - All pin numbers should be defined at the top of the program using #define. These names should be short and descriptive, in all caps with words separated by underscores. The pin number should NOT be defined using variables like int or char.
 - Digital names will be just the name (ex: LED_PWR). Analog names will start with “A_” (ex: A_TEMP1).
 - All pieces that may need to be replicated (i.e. motor drivers) will be created as objects. The constructors of these modules will take pin numbers as arguments
 
 Example of what NOT to do:
 - #define PIN_1
 - #define A_PIN_1
 - int pin1 = 1;


