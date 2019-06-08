#include <Wire.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_ADXL345_U.h>
Adafruit_ADXL345_Unified accel = Adafruit_ADXL345_Unified(12345);

void setup() 
{
  Serial.begin(115200);  
  if(!accel.begin())
  {
    Serial.println("Ooops, no ADXL345 detected ... Check your wiring!");
    while(1);//reset the board
  }
  accel.setRange(ADXL345_RANGE_4_G);
}

void loop() 
{
  sensors_event_t event; 
  accel.getEvent(&event);
 
  Serial.print((event.acceleration.x)/9.8); Serial.print(",");
  Serial.print((event.acceleration.y)/9.8); Serial.print(",");
  Serial.println((event.acceleration.z)/9.8);
  delay(10);
}
