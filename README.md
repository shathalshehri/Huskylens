# HuskyLens Functions and LED Control

This repository demonstrates the use of the HuskyLens AI machine vision sensor for various functions, including face detection, line tracking, and object detection. Additionally, it includes an example of how to control an LED based on face detection results using Arduino.

## HuskyLens Functions

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

### Code

- **Code File:** [HUSKYLENS_I2C.ino](https://github.com/shathalshehri/Huskylens/blob/main/HUSKYLENS_I2C.ino)

### LED Control Demo
- **Demo:** ![LED Control](https://github.com/shathalshehri/Huskylens/blob/main/HuskylensWithArduino.gif)

### Notes
- Ensure the HuskyLens is set to I2C protocol mode.
- Verify the connections between the HuskyLens and Arduino.

## License

This project is licensed under the GNU Lesser General Public License. See [LICENSE](LICENSE) for details.
