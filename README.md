# ESP32-C3 Joystick Reader

This project reads analog and digital input from a joystick module using an ESP32-C3 DevKitM-1 board. It captures horizontal and vertical movement via analog pins and detects button presses through a digital input. The data is printed to the Serial Monitor for real-time feedback.

## Hardware Overview

| Joystick Signal | ESP32-C3 GPIO | Type         | Description                  |
|-----------------|---------------|--------------|------------------------------|
| VRX (X-axis)    | GPIO1         | Analog Input | Horizontal movement          |
| VRY (Y-axis)    | GPIO2         | Analog Input | Vertical movement            |
| SW (Button)     | GPIO4         | Digital Input| Press detection (active LOW) |

## Project Features

- Real-time joystick position tracking
- Button press detection with debounce-friendly logic
- Serial output via USB CDC at 115200 baud
- Compatible with PlatformIO and Arduino framework

## How to Use

1. Wire the joystick module to the specified GPIO pins.
2. Flash the project to your ESP32-C3 DevKitM-1 using PlatformIO.
3. Open the Serial Monitor at 115200 baud.
4. Move the joystick and press the button to observe live readings.

## Serial Output Format

Example:
X: 512 | Y: 498 | Button: Released X: 520 | Y: 510 | Button: Pressed