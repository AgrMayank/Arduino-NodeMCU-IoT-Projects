int buzzer = D1 ;
void setup ()
{
  pinMode (buzzer, OUTPUT) ;
}
void loop ()
{
      digitalWrite (buzzer, HIGH) ;
      delayMicroseconds(500); ;
      digitalWrite (buzzer, LOW) ;
      delayMicroseconds(500); ;
}
