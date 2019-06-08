void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(D6)==LOW){
  Serial.println("Obstacle");
  }
  else{
  Serial.println("Clear");
  }
  delay(100);
}
