void setup() {
 pinMode(D1,OUTPUT);
 pinMode(D2,OUTPUT);

}

void loop() {
  digitalWrite(D1,HIGH);
  digitalWrite(D2,LOW);
  delay(2000);
  digitalWrite(D1,LOW);
  digitalWrite(D2,HIGH);
  delay(2000);
  digitalWrite(D1,LOW);
  digitalWrite(D2,LOW);
  delay(1000);

}
