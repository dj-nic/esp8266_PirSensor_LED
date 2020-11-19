
const int PIR = D2;
int PIRState = 0;

void setup() {
  pinMode(PIR, INPUT);
  pinMode(D3, OUTPUT);
  Serial.begin (115200);
  delay(2000);
  Serial.println (" ");
  Serial.println ("ON");

  digitalWrite(D2, LOW); // LED aus
}

void loop() {

  PIRState = digitalRead(PIR);

  if (PIRState == HIGH) {
    Serial.println (PIR, DEC);
    Serial.println ("triggered");
    digitalWrite(D3, HIGH) ;  // LED an
    delay (100); // delay 0,1 sekunden
    digitalWrite(D3, LOW); // LED aus
    delay(100);
  } else { // oder
    Serial.println (PIR, DEC);
    Serial.println ("active");
    digitalWrite(D3, HIGH);
    delay(50);
    digitalWrite(D3, LOW);
    delay(2000);

  }
}
