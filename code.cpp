#include <Servo.h>

Servo myServo;

// Pin assignments
const int moistureSensorPin = A0; // Moisture sensor connected to A0
const int irSensorPin = 3;       // IR sensor connected to digital pin 3
const int servoPin = 9;          // Servo motor connected to digital pin 9

// Thresholds
const int moistureThreshold = 50; // Further reduced threshold for detecting wetness
const int irThreshold = LOW;       // Threshold for detecting object presence (dryness)

void setup() {
  // Initialize the servo motor
  myServo.attach(servoPin);
  
  // Initialize the IR sensor pin as input
  pinMode(irSensorPin, INPUT);
  
  // Start serial communication for debugging
  Serial.begin(9600);
  Serial.println("Setup complete. Waiting for sensor inputs...");
}

void loop() {
  // Read the IR sensor value
  int irValue = digitalRead(irSensorPin);
  
  // Read the moisture sensor value
  int moistureValue = analogRead(moistureSensorPin);
  
  // Debugging output
  Serial.print("Moisture: ");
  Serial.print(moistureValue);
  Serial.print("\tIR: ");
  Serial.println(irValue);
  
  // Check if IR sensor detects an object (dry waste)
  if (irValue == irThreshold) {
    // Rotate servo to 90 degrees
    myServo.write(90);
    Serial.println("Dry waste detected - Servo at 90 degrees");
  }
  // Check if moisture sensor detects wetness
  else if (moistureValue > moistureThreshold) {
    // Rotate servo to 180 degrees
    myServo.write(180);
    Serial.println("Wet waste detected - Servo at 180 degrees");
  }
  // Default case when neither condition is met
  else {
    // Rotate servo to default position (e.g., 0 degrees)
    myServo.write(0);
    Serial.println("No waste detected - Servo at 0 degrees");
  }

  // Small delay for stability
  delay(500);
}
