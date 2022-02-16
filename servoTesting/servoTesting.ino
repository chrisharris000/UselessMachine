#include <Servo.h>
int servoPin = 9;
Servo lidServo;

void setup() {
  // put your setup code here, to run once:
  lidServo.attach(servoPin);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_BUILTIN, HIGH);
  lidServo.write(0);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  
  lidServo.write(90);
  delay(1000);
  digitalWrite(LED_BUILTIN, HIGH);
  
  lidServo.write(180);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
}
