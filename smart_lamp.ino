int motionSensor = 2;
int led = 3;
int buzzer = 4;

void setup() {
  pinMode(motionSensor, INPUT);
  pinMode(led, OUTPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int motion = digitalRead(motionSensor);
  if (motion == HIGH) {
    digitalWrite(led, HIGH);
    delay(1000);
    digitalWrite(buzzer, HIGH);
    delay(500);
    digitalWrite(buzzer, LOW);
  } else {
    digitalWrite(led, LOW);
  }
}
