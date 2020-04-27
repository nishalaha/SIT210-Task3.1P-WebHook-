#include "Adafruit_DHT.h" 
#define DHTPIN 13
#define DHTTYPE DHT11

int temp;
DHT dht(DHTPIN, DHTTYPE);

void setup() {
    dht.begin();
}

void loop() {
  temp = dht.getTempFarenheit();
  Particle.publish("temp", String(temp), PRIVATE);
  delay(1000);
}
