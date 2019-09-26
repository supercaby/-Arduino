int redLed = 3;
int greenLed = 4;
void setup() {
  pinMode(redLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
}

void loop() {
  digitalWrite(redLed, HIGH);
  digitalWrite(greenLed, LOW);
  delay(50);
  digitalWrite(redLed, LOW);
  digitalWrite(greenLed, HIGH);
  delay(50);
}
