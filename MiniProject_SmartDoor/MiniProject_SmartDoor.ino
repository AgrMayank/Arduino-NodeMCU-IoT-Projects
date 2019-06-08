int val;
int buzzer = D1 ;
void setup ()
{
  Serial.begin(115200);
  pinMode (buzzer, OUTPUT) ;
  pinMode(D5,OUTPUT);
  pinMode(D6,OUTPUT);
}
void loop ()
{
val=analogRead(A0);
Serial.println(val);
if(val>700)
{
  digitalWrite(D5,LOW);
  digitalWrite(D6,HIGH);
  analogWrite(buzzer, 0); 
}
else
{
  digitalWrite(D5,HIGH);
  digitalWrite(D6,LOW);
  analogWrite(buzzer, 128);
}
}
