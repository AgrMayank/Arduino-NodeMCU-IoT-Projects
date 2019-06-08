int delay_time=5;
int redPin=D5;
int greenPin=D6;
int bluePin=D7;
void setup() {
  pinMode(redPin,OUTPUT);
  pinMode(greenPin,OUTPUT);
  pinMode(bluePin,OUTPUT);
}

void loop() {
  for(int i=0;i<255;i++)
  {
    analogWrite(redPin,i);
    analogWrite(greenPin,0);
    analogWrite(bluePin,0);
    delay(delay_time);
  }
  for(int i=255;i>0;i--)
  {
    analogWrite(redPin,i);
    analogWrite(greenPin,0);
    analogWrite(bluePin,0);
    delay(delay_time);
  }                     //Fade RED on and off
  
  for(int i=0;i<255;i++)
  {
    analogWrite(redPin,0);
    analogWrite(greenPin,i);
    analogWrite(bluePin,0);
    delay(delay_time);
  }
  for(int i=255;i>0;i--)
  {
    analogWrite(redPin,0);
    analogWrite(greenPin,i);
    analogWrite(bluePin,0);
    delay(delay_time);
  }                     //Fade GREEN on and off

  
  for(int i=0;i<255;i++)
  {
    analogWrite(redPin,0);
    analogWrite(greenPin,0);
    analogWrite(bluePin,i);
    delay(delay_time);
  }
  for(int i=255;i>0;i--)
  {
    analogWrite(redPin,0);
    analogWrite(greenPin,0);
    analogWrite(bluePin,i);
    delay(delay_time);
  }                     //Fade BLUE on and off

  for(int i=255;i>0;i--)
  {
    analogWrite(redPin,i);
    analogWrite(greenPin,i);
    analogWrite(bluePin,i);
    delay(delay_time);
  }
  
  for(int i=255;i>0;i--)
  {
    analogWrite(redPin,0);
    analogWrite(greenPin,i);
    analogWrite(bluePin,i);
    delay(delay_time);
  }
  
  for(int i=255;i>0;i--)
  {
    analogWrite(redPin,i);
    analogWrite(greenPin,0);
    analogWrite(bluePin,i);
    delay(delay_time);
  }
  
  for(int i=255;i>0;i--)
  {
    analogWrite(redPin,i);
    analogWrite(greenPin,i);
    analogWrite(bluePin,0);
    delay(delay_time);
  }
}
