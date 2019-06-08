void setup() 
{
  Serial.begin(115200);
}

void loop() 
{
  if(digitalRead(D7)==LOW)
  {
    Serial.println("Bright");
  }
  else
  {
    Serial.println("Dark");
  }
delay(100);
}
