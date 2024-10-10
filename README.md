# Garbage-Segregation-System

This project demonstrates an automated garbage segregation system using an Arduino, IR sensor, moisture sensor, and servo motor. The system differentiates between dry and wet waste and segregates them accordingly by rotating a servo motor to predefined positions.

## Features
- **IR Sensor**: Detects the presence of an object (dry waste).
- **Moisture Sensor**: Determines the moisture level (wet waste).
- **Servo Motor**: Rotates to different angles to direct waste into separate bins.

## Project Overview
The system automatically classifies garbage as dry or wet based on sensor input and directs it to different bins using a servo motor.

## Components Used
- **IR Sensor**: For detecting object presence (used for dry waste detection).
- **Moisture Sensor**: Detects moisture content in the waste to identify wet waste.
- **Servo Motor**: Rotates to segregate the waste.
- **Arduino**: Controls the sensors and servo motor.

## Code Explanation
- **Moisture Sensor**: Reads the analog value from the moisture sensor. If the value exceeds the threshold, it detects wet waste.
- **IR Sensor**: Reads digital signals from the IR sensor. If it detects an object, it assumes dry waste.
- **Servo Motor**: The servo rotates to 90° for dry waste and 180° for wet waste. It resets to 0° when no waste is detected.


