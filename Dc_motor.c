#define IN1 5
#define IN2 4

void setup()
{
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
}

void loop()
{
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);

    delay(2000);

    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);

    delay(2000);
}
