# HuskyLens Functions and LED Control

This repository demonstrates the use of the HuskyLens AI machine vision sensor for various functions, including face detection, line tracking, and object detection. Additionally, it includes an example of how to control an LED based on face detection results using Arduino.

## HuskyLens Functions
This repository demonstrates the capabilities of the HuskyLens AI machine vision sensor, showcasing various functionalities including:

**1. Face Detection:** Identifies human faces and provides coordinates.
**2. Object Tracking:** Tracks moving objects based on color or shape.
**3. Object Recognition:** Recognizes and identifies specific objects from a set of predefined objects.
**4. Line Tracking:** Follows lines on a surface using visual sensors.
**5. Color Recognition:** Recognizes and identifies colors in the camera's field of view.
**6. Tag Detection:** Detects and identifies tags or markers from a set of predefined tags.
**7. Object Classification:** Classifies objects into different categories based on predefined classes.


### Face Detection
- **Demo:**
   ![Face Detection](https://github.com/shathalshehri/Huskylens/blob/main/facedetection.gif)

### Line Tracking
- **Image:**
   ![Line Tracking](https://github.com/shathalshehri/Huskylens/blob/main/linetracking.jpeg)

### Object Detection
- **Images:**
  - ![Object Detection 1](https://github.com/shathalshehri/Huskylens/blob/main/objectdetection.jpeg)
  - ![Object Detection 2](https://github.com/shathalshehri/Huskylens/blob/main/objectdeetection2.png)

### Tag Detection
- **Demo:** ![Tag Detection](https://github.com/shathalshehri/Huskylens/blob/main/tagdetection.gif)

## Arduino Code for LED Control Based on Face Detection

This example shows how to use the HuskyLens sensor to detect faces and control an LED with Arduino. When a face is detected, the LED will turn on.
### Steps to Download the HuskyLens Library on macOS

1. **Open the Arduino IDE:**
   Launch the Arduino IDE on your macOS system.

2. **Open Library Manager:**
   - Go to `Sketch` > `Include Library` > `Manage Libraries...`

3. **Search for HuskyLens Library:**
   - In the Library Manager window, type "HuskyLens" in the search bar.

4. **Install the Library:**
   - Find the "HuskyLens" library in the search results.
   - Click on the "Install" button next to the library entry.

5. **Close the Library Manager:**
   - Once the installation is complete, close the Library Manager.

6. **Include the Library in Your Sketch:**
   - Add `#include "HUSKYLENS.h"` to the top of your Arduino sketch to include the HuskyLens library.
### Additional Resources
- **HuskyLens Library Download and Documentation:** [HuskyLens Wiki](https://wiki.dfrobot.com/HUSKYLENS_V1.0_SKU_SEN0305_SEN0336#target_0)

### Code

- **Code File:** [HUSKYLENS_I2C.ino](https://github.com/shathalshehri/Huskylens/blob/main/HUSKYLENS_I2C.ino)

### LED Control Demo
- **Demo:** ![LED Control](https://github.com/shathalshehri/Huskylens/blob/main/HuskylensWithArduino.gif)

### Notes
- Ensure the HuskyLens is set to I2C protocol mode.
- Verify the connections between the HuskyLens and Arduino.

## License

This project is licensed under the GNU Lesser General Public License. See [LICENSE](LICENSE) for details.
