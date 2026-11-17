#include <Servo.h>

Servo myservo;

int potentiometer;
int output;

void setup()
{
  myservo.attach(6);
}

void loop()
{
  potentiometer = analogRead(A0);

    output = map(potentiometer, 0, 1023, 0, 180);

    myservo.write(output);
}
