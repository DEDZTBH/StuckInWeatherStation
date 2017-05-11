#include <Wire.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_BMP085_U.h>

#include <DHT.h>
#include <DHT_U.h>

#include "Adafruit_VEML6070.h"

#include <SPI.h>
#include <SD.h>

#define DHTTYPE DHT11
#define DHTPIN 14
//DHT dht(DHTPIN, DHTTYPE);
//
//Adafruit_BMP085_Unified bmp = Adafruit_BMP085_Unified(10085);
//
//Adafruit_VEML6070 uv = Adafruit_VEML6070();

Sd2Card card;
SdVolume volume;
SdFile root;

void setup() {
  Serial.begin(9600);
  Serial.println("\nInitializing...");
//  bmp.begin();
//  uv.begin(VEML6070_1_T);
  if(!SD.begin()){
      Serial.println("SD Card not working!!!");
    } else {
      Serial.println("SD Card initialized");
    } 
}

void loop() {
//  delay(1000);
//  float h = dht.readHumidity();
//  float t = dht.readTemperature();
//  Serial.println("DHT");
//  Serial.print("Humidity: ");
//  Serial.print(h);
//  Serial.print("; Temperature: ");
//  Serial.println(t); 
//
//  sensors_event_t event;
//  bmp.getEvent(&event);
//
//  Serial.println("BMP180");
//  if (event.pressure)
//  {
//    Serial.print("Pressure: "); 
//    Serial.print(event.pressure / 10); 
//    Serial.print(" kPa; ");
//
//    float temperature;
//    bmp.getTemperature(&temperature);
//    Serial.print("Temperature: ");
//    Serial.print(temperature);
//    Serial.print(" C; ");
//
//    float seaLevelPressure = SENSORS_PRESSURE_SEALEVELHPA;
//    Serial.print("Altitude: "); 
//    Serial.print(bmp.pressureToAltitude(seaLevelPressure,
//                                        event.pressure,
//                                        temperature)); 
//    Serial.println(" m");
//  }
//  else
//  {
//    Serial.println("Sensor error");
//  } 
//
//  Serial.println("VEML6070");
//  Serial.print("UV light level: ");
//  Serial.println(uv.readUV());
  
}
