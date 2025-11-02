#include <Arduino.h>

// Joystick pin assignments
#define VRX_PIN 1   // X-axis analog
#define VRY_PIN 2   // Y-axis analog
#define SW_PIN 4    // Button (digital input)

void setup() {
  Serial.begin(115200);
  pinMode(SW_PIN, INPUT_PULLUP); // Joystick button is active LOW
}

void loop() {
  int xVal = analogRead(VRX_PIN);
  int yVal = analogRead(VRY_PIN);
  bool buttonPressed = digitalRead(SW_PIN) == LOW;

  Serial.print("X: "); Serial.print(xVal);
  Serial.print(" | Y: "); Serial.print(yVal);
  Serial.print(" | Button: "); Serial.println(buttonPressed ? "Pressed" : "Released");

  delay(200);
}
