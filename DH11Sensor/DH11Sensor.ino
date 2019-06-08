#include <DHT.h>
#define DHTPIN D5
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);
uint8_t temperature, humidity;

void setup() {
  Serial.begin(115200);
dht.begin();
delay(10);
Serial.println();
Serial.println();

}

void loop() {
temperature = dht.readTemperature();
humidity = dht.readHumidity();
delay(500);
Serial.print("Temperature Value is :");
Serial.print(temperature);
Serial.print("C");
Serial.print("  Humidity Value is :");
Serial.print(humidity);
Serial.println("%");
delay(500);
}
