void setup() {
  pinMode(6, INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  int pinValue = digitalRead(6);
  if (pinValue == LOW) {
    Serial.println("it's 2023");
  } else if (pinValue == HIGH) {
    Serial.println("Hello World");
  }
  delay(1000);
}
