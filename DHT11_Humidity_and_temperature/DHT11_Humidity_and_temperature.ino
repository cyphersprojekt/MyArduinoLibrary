#include <DHT.h>
#include <DHT_U.h>

int sensor = 2;
int temperature;
int humidity;

DHT dht(sensor, DHT11);

void setup() {
  
  Serial.begin(9600);
  dht.begin();
  
}

void loop() {

  temperature = dht.readTemperature();
  humidity = dht.readHumidity();

  Serial.print("Temperature: ");
  Serial.println(temperature);

  Serial.print("Humidity: ");
  Serial.println(humidity);

  delay(1000);

}
