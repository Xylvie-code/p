int button = 0;

void setup()
{
  pinMode(1, INPUT);
  pinMode(11, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  button = digitalRead(1);

    Serial.println(button);

    if (button == HIGH)
    {
      digitalWrite(11, HIGH);
    }
    else
    {
      digitalWrite(11, LOW);
    }
}
