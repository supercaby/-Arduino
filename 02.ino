int ledPin = 13;
int buttonPin = 2;
void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  if (digitalRead(buttonPin) == 1) {
    digitalWrite(ledPin, 1);
  }
  else {
    digitalWrite(ledPin, 0);
  }
}
