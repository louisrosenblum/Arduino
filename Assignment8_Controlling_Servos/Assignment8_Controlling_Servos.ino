#include <Servo.h>
Servo servoLeft;
Servo servoRight;

void setup() {
  Serial.begin(9600);
  servoLeft.attach(13);
  servoRight.attach(10);
}

void loop() {
  servoRight.writeMicroseconds(1500);
  servoLeft.writeMicroseconds(1500); 
  Serial.print("Turning left servo clockwise for 1 second\n");
  servoLeft.writeMicroseconds(1300);
  delay(1000);
  servoLeft.writeMicroseconds(1500);
  delay(1000);
  Serial.print("Turning left servo counter-clockwise for 1 second\n");
  servoLeft.writeMicroseconds(1700);
  delay(1000);
  servoLeft.writeMicroseconds(1500);
  delay(1000);
  Serial.print("Turning right servo clockwise for 1 second\n");
  servoRight.writeMicroseconds(1300);
  delay(1000);
  servoRight.writeMicroseconds(1500);
  delay(1000);
  Serial.print("Turning left servo counter-clockwise for 1 second\n");
  servoRight.writeMicroseconds(1700);
  delay(1000);
  servoRight.writeMicroseconds(1500);
  delay(1000);
  Serial.print("Turning both servos clockwise for 1 second\n");
  servoLeft.writeMicroseconds(1300);
  servoRight.writeMicroseconds(1300);
  delay(1000);
  servoLeft.writeMicroseconds(1500);
  servoRight.writeMicroseconds(1500);
  delay(1000);
  Serial.print("Turning both servos counter-clockwise for 1 second\n");
  servoLeft.writeMicroseconds(1700);
  servoRight.writeMicroseconds(1700);
  delay(1000);
  servoLeft.writeMicroseconds(1500);
  servoRight.writeMicroseconds(1500);
  delay(1000);
}
