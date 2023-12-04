# Servo Control using Joystick Readme

This Arduino code allows you to control two servo motors using a joystick. The position of the joystick along the X-axis is mapped to the rotation angle of `servo1`, and the position along the Y-axis is mapped to the rotation angle of `servo2`. As the joystick moves, the corresponding servo motors adjust their positions accordingly.

## Hardware Setup

- Connect the X-axis of the joystick to analog pin 0 (represented by `joyX` in the code).
- Connect the Y-axis of the joystick to analog pin 1 (represented by `joyY` in the code).
- Connect `servo1` to digital pin 3.
- Connect `servo2` to digital pin 5.

## Dependencies

This code uses the `Servo` library, which is a standard library for Arduino servo motor control.

## Instructions

1. Upload the code to your Arduino board.
2. Ensure that the joystick and servo motors are connected correctly to the specified pins.
3. Power up your Arduino.

## Usage

As you move the joystick along its X-axis, `servo1` will rotate proportionally. Similarly, moving the joystick along its Y-axis will adjust the position of `servo2`.

**Note:** Ensure that the servo motors can handle the specified angle range (0 to 180 degrees) without any mechanical issues.

## Troubleshooting

If the servo motors are not responding as expected, check the following:

- Wiring: Ensure all connections are secure and correct.
- Calibration: Adjust the map values (`map(servoVal, 0, 1023, 0, 180)`) if the servo motors are not reaching their full range.

## License

This code is provided under the [MIT License](https://opensource.org/licenses/MIT). Feel free to modify and distribute it for your projects. Refer to the LICENSE file for more details.

## Author

Alper Erdoğan

If you have any questions or issues, please contact.
