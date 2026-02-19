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
#define DHTTYPE DHT11 //Sensor Type

