## C++ Style Guide

For consistency, code style and naming conventions should generally match the [Python guidelines](https://github.com/Uvic-Robotics-Club/Administrative/code_standards/python_standards.md). However, there are a few concerns specific to C++ programming:
 - Create a header (.h) file for each source (.cpp) file.
 - All headers must be protected against multiple inclusions using #ifndef guards
 
```
#ifndef TEST_FILE_H
#define TEST_FILE_H
...
#endif
```

 - The namespace “cv” is commonly used in files relating to image recognition. Other namespaces (including “std”) should be used with discretion.

