int val;
void setup() 
{
  Serial.begin(115200);
  pinMode(D5,OUTPUT);
  pinMode(D6,OUTPUT);
}

void loop() 
{
val=analogRead(A0);
Serial.println(val);
if(val>900)
{
digitalWrite(D5,LOW);
digitalWrite(D6,HIGH);
}
else
{
digitalWrite(D5,HIGH);
digitalWrite(D6,LOW);
}
}
