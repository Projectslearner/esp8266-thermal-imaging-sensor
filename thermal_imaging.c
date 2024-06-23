/*
    Project name : ESP8266 Thermal Imaging Sensor
    Modified Date: 20-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/esp8266-thermal-imaging-sensor
*/

#include <Wire.h>  // Include Wire library for I2C communication

// I2C address of the thermal sensor module
#define SENSOR_ADDRESS 0x5A  // Replace with your sensor's I2C address

void setup() {
  Serial.begin(9600);  // Initialize serial communication for debugging
  Wire.begin();  // Initialize I2C communication
}

void loop() {
  // Request 2 bytes of temperature data from the sensor
  Wire.requestFrom(SENSOR_ADDRESS, 2);

  // Read the temperature data
  if (Wire.available() == 2) {
    byte msb = Wire.read();  // Most significant byte
    byte lsb = Wire.read();  // Least significant byte

    // Combine bytes to get the temperature value
    int temperature = (msb << 8) | lsb;

    // Convert to Celsius (assuming the sensor provides raw temperature values)
    float tempC = temperature / 10.0;  // Adjust based on sensor's specific scaling

    // Print temperature to Serial Monitor
    Serial.print("Temperature: ");
    Serial.print(tempC);
    Serial.println(" °C");
  }

  delay(2000);  // Wait before taking the next reading
}
