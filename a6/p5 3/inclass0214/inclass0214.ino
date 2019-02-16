void setup() {
  Serial.begin(9600);
}

void loop() {
  int button = digitalRead(A2);
  Serial.println(button);
  delay(50);
}
