#include <Servo.h>

const int potPin = A0;

Servo myServo;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  myServo.attach(9);
}

void loop() {
  // put your main code here, to run repeatedly:

  int potVal = analogRead(potPin);

  Serial.print("potVal: ");
  Serial.print(potVal);
  //Serial.println();

  int angle = map(potVal, 0, 1023, 0, 179);
  myServo.write(angle);

  Serial.print(", angle: ");
  Serial.print(angle);
  Serial.println();

  delay(15);
}

