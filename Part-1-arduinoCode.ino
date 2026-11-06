
#include <Servo.h>

Servo myServo;

const int servoPin = 9;

void setup() {
  myServo.attach(servoPin);
  myServo.write(90);  // Start at the centre
  delay(1000);
}

void loop() {

  // Move from 0 to 180 degrees
  for (int angle = 0; angle <= 180; angle++) {
    myServo.write(angle);
    delay(15);
  }

  delay(500);

  // Move from 180 to 0 degrees
  for (int angle = 180; angle >= 0; angle--) {
    myServo.write(angle);
    delay(15);
  }

  delay(500);
}
