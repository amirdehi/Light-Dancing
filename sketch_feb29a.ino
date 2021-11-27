const int ledLine1 = 13;
const int ledLine2 = 12;
const int ledLine3 = 11;
const int ledLine4 = 10;
const int ledLine5 = 9;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledLine1, OUTPUT);
  pinMode(ledLine2, OUTPUT);
  pinMode(ledLine3, OUTPUT);
  pinMode(ledLine4, OUTPUT);
  pinMode(ledLine5, OUTPUT);

  digitalWrite(ledLine1, HIGH);
  delay(40);
  digitalWrite(ledLine2, HIGH);
  delay(40);
  digitalWrite(ledLine3, HIGH);
  delay(40);
  digitalWrite(ledLine4, HIGH);
  delay(40);
  digitalWrite(ledLine5, HIGH);
  delay(40);
  digitalWrite(ledLine1, LOW);
  delay(40);
  digitalWrite(ledLine2, LOW);
  delay(40);
  digitalWrite(ledLine3, LOW);
  delay(40);
  digitalWrite(ledLine4, LOW);
  delay(40);
  digitalWrite(ledLine5, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
    digitalWrite(ledLine1, HIGH);
    delay(50);
    digitalWrite(ledLine2, HIGH);
    delay(50);
    digitalWrite(ledLine3, HIGH);
    delay(50);
    digitalWrite(ledLine4, HIGH);
    delay(50);
    digitalWrite(ledLine5, HIGH);
    delay(50);
    digitalWrite(ledLine1, LOW);
    delay(50);
    digitalWrite(ledLine2, LOW);
    delay(50);
    digitalWrite(ledLine3, LOW);
    delay(50);
    digitalWrite(ledLine4, LOW);
    delay(50);
    digitalWrite(ledLine5, LOW);
    delay(50);
    digitalWrite(ledLine5, HIGH);
    delay(50);
    digitalWrite(ledLine4, HIGH);
    delay(50);
    digitalWrite(ledLine3, HIGH);
    delay(50);
    digitalWrite(ledLine2, HIGH);
    delay(50);
    digitalWrite(ledLine1, HIGH);
    delay(50);
    digitalWrite(ledLine5, LOW);
    delay(50);
    digitalWrite(ledLine4, LOW);
    delay(50);
    digitalWrite(ledLine3, LOW);
    delay(50);
    digitalWrite(ledLine2, LOW);
    delay(50);
    digitalWrite(ledLine1, LOW);
    delay(50);
}
