#include <Servo.h>

// Pin Definitions
const int rainSensorPin = 2; // Rain sensor  pin
const int buzzerPin = 3;     // Buzzer pin
const int servoPin = 4;      // Servo motor pin

Servo clothesServo;

// Variables
bool isRaining = false;      // Keeps track of rain status
int rainValue = 0;           // Stores rain sensor value

// Function to move the servo slowly
void moveServoSmoothly(int startAngle, int endAngle, int stepDelay) {
  if (startAngle < endAngle) {
    for (int angle = startAngle; angle <= endAngle; angle++) {
      clothesServo.write(angle);
      delay(stepDelay); // Delay between each step
    }
  } else {
    for (int angle = startAngle; angle >= endAngle; angle--) {
      clothesServo.write(angle);
      delay(stepDelay); // Delay between each step
    }
  }
}

void setup() {
  pinMode(rainSensorPin, INPUT);
  pinMode(buzzerPin, OUTPUT);

  clothesServo.attach(servoPin);
  clothesServo.write(92); // Initial position (drying position)
  
  Serial.begin(9600);    // For debugging
}

void loop() {
  rainValue = digitalRead(rainSensorPin);
  
  if (rainValue == LOW) { // LOW indicates rain detected
    if (!isRaining) {
      isRaining = true;
      digitalWrite(buzzerPin, HIGH);  // Turn on the buzzer
      moveServoSmoothly(92, 0, 15);  // Move clothes to a covered position slowly
      delay(1000);                   // Buzzer ON for 1 second
      digitalWrite(buzzerPin, LOW);  // Turn off the buzzer
    }
  } else { // No rain detected
    if (isRaining) {
      isRaining = false;
      moveServoSmoothly(0, 92, 15);  // Move clothes back to drying position slowly
    }
  }
  
  delay(100); // Small delay to stabilize sensor readings
}
