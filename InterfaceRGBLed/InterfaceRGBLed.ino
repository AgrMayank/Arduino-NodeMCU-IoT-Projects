void setup() {
  // put your setup code here, to run once:

pinMode(D5,OUTPUT);

pinMode(D6,OUTPUT);

pinMode(D7,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(D5,HIGH);

  digitalWrite(D6,LOW);

  digitalWrite(D7,LOW);

  delay(1000);

  digitalWrite(D5,LOW);

  digitalWrite(D6,HIGH);

  digitalWrite(D7,LOW);

  delay(1000);

  digitalWrite(D5,LOW);

  digitalWrite(D6,LOW);

  digitalWrite(D7,HIGH);

  delay(1000);

  // Custom code
  digitalWrite(D5,HIGH);

  digitalWrite(D6,HIGH);

  digitalWrite(D7,LOW);

  delay(1000);
  
  digitalWrite(D5,LOW);

  digitalWrite(D6,HIGH);

  digitalWrite(D7,HIGH);

  delay(1000);
  
  digitalWrite(D5,HIGH);

  digitalWrite(D6,LOW);

  digitalWrite(D7,HIGH);

  delay(1000);
  
  digitalWrite(D5,HIGH);

  digitalWrite(D6,HIGH);

  digitalWrite(D7,HIGH);

  delay(1000);
}
