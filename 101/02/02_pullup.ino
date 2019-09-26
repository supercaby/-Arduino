int ledPin = 13;
int buttonPin = 2;
void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);//设置端口上拉
}

void loop() {
  if (digitalRead(buttonPin) == 0) {
    digitalWrite(ledPin, 1);
  }
  else {
    digitalWrite(ledPin, 0);
  }
}
