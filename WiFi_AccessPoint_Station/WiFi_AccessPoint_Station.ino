#include <ESP8266WiFi.h>

const char *ap_ssid = "NodeMCU Wifi";
const char *ap_password = "12345678";

const char *sta_ssid = "Nokia2.1"; 
const char *sta_password = "Dinesh123456";

void setup() {
  Serial.begin(115200);
  Serial.println();
  WiFi.mode(WIFI_AP_STA);
  
  Serial.print("Configuring access point...");
  WiFi.softAP(ap_ssid, ap_password);

  IPAddress myIP = WiFi.softAPIP();
  Serial.print("AP IP address: ");
  Serial.println(myIP);

  Serial.println();
  Serial.print("Connecting to ");
  Serial.println(sta_ssid);
  WiFi.begin(sta_ssid, sta_password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("");
  Serial.println("WiFi connected");
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());
}

void loop() {
}
