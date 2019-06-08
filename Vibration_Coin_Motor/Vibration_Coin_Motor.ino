void setup() {
  pinMode(D7,INPUT);
  pinMode(D5,OUTPUT);
}

void loop() {
  if(digitalRead(D7)==HIGH)
  digitalWrite(D5,HIGH);
  else
  digitalWrite(D5,LOW);
}
