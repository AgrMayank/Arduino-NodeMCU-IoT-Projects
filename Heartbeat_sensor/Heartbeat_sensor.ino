void setup(){
  Serial.begin(115200);
  sig = analogRead(0);
}
void loop(){
  val = analogRead(A0);
  sig = (alpha*val)+((1-alpha)*sig);
  Serial.println(sig);
  delay(10);
}
