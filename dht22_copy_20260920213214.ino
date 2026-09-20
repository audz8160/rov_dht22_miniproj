#include "DHT.h"

#define DHTPIN 4          // DATA wire connected to GPIO4
#define DHTTYPE DHT22     // We are using the DHT22 (AM2302)

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(115200);
  delay(1000);            // give the Serial Monitor time to open
  Serial.println("DHT22 test starting...");
  dht.begin();
}

void loop() {
  delay(2000);            // DHT22 needs at least 2 seconds between reads

  float h = dht.readHumidity();
  float t = dht.readTemperature();   // Celsius

  // Retry up to 3 times if the first read fails
  if (isnan(h) || isnan(t)) {
    delay(2000);
    h = dht.readHumidity();
    t = dht.readTemperature();
  }

  if (isnan(h) || isnan(t)) {
    Serial.println("Failed to read from DHT sensor! Check wiring and pull-up resistor.");
    return;
  }

  Serial.print("Humidity: ");
  Serial.print(h, 1);     // 1 decimal place
  Serial.print(" %  |  Temperature: ");
  Serial.print(t, 1);
  Serial.println(" °C");
}