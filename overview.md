# Garbage Segregation System Overview

## Objective
The goal of this project is to automate the segregation of garbage into wet and dry categories using sensors and a servo motor controlled by an Arduino.

## Components Used
1. **IR Sensor**: Detects the presence of dry waste.
2. **Moisture Sensor**: Reads moisture content to identify wet waste.
3. **Servo Motor**: Used to rotate and direct waste to separate bins.
4. **Arduino**: Microcontroller that processes input from the sensors and controls the servo motor.

## How It Works
1. When an object is placed in front of the IR sensor, it detects the presence of the object. If detected, it assumes it's dry waste and rotates the servo motor to 90° to direct it to the dry waste bin.
2. If the moisture sensor detects high moisture content (above a threshold), the system categorizes the waste as wet and rotates the servo motor to 180°, directing it to the wet waste bin.
3. The servo resets to 0° when there is no waste detected.

## Future Expansion
This system can be expanded with machine learning to improve waste classification. Sensors for metal and plastic detection can also be added.
