/**
 * @file main.cpp
 * @brief Embedded Temperature and Humidity Monitoring using DHT11
 * @author CHARVI
 * @date 2026-01-30
 *
 * @details
 * This program reads environmental data from the DHT11 sensor
 * and displays temperature and humidity values on Serial Monitor.
 */
#include <Arduino.h>

#include <DHT.h>

#define DHTPIN 2      //DHT11 connected to 2

#define DHTTYPE DHT11     //Sensor Type

DHT dht(DHTPIN, DHTTYPE);
/**
 * @brief Initialize peripherals and Serial output.
 *
 * Sets up Serial at 9600 baud, initializes the DHT sensor library,
 * and prints a startup banner to the Serial Monitor.
 *
 * This function is called once by the Arduino core during boot.
 */
void setup() {
    Serial.begin(9600);
    dht.begin();
    Serial.println("DHT11 Sensor Initialized");
}
void loop() {
    float humidity = dht.readHumidity();
    float temperature = dht.readTemperature();   //Celsius
    if (isnan(humidity)|| isnan(temperature))
    {
        Serial.println("Failed to read from DHT sensor!");
        delay(2000);
        return;
    }
    Serial.print("Humidity: ");
    Serial.println(humidity);
    Serial.print(" % | ");
    Serial.print("Temperature: ");
    Serial.println(temperature);
    Serial.print(" °C");
    delay(1000);

}



