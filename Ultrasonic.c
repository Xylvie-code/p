#define trigPin 6
#define echoPin 5

#define led1 8
#define led2 9
#define led3 10

long duration;
int val;

void setup()
{
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

    pinMode(led1, OUTPUT);
    pinMode(led2, OUTPUT);
    pinMode(led3, OUTPUT);

    Serial.begin(9600);
}

void loop()
{
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);

    duration = pulseIn(echoPin, HIGH);
    val = duration * 0.034 / 2;

    Serial.println(val);

    if (val <= 50)
      digitalWrite(led1, HIGH);
    else
      digitalWrite(led1, LOW);

    if (val <= 75)
      digitalWrite(led2, HIGH);
    else
      digitalWrite(led2, LOW);

    if (val <= 100)
      digitalWrite(led3, HIGH);
    else
      digitalWrite(led3, LOW);

    delay(100);
}
