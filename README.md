# ESP32 Environmental & Air Quality Monitor

A simple IoT project built with an ESP32 board to monitor real-time air quality, temperature, and humidity, displaying the data on an OLED screen.

## Features
- Air quality measurement using the MQ-135 gas sensor
- Temperature and humidity readings with the DHT11 sensor
- Live data visualization on a 0.96" I2C OLED display (SSD1306)

## Hardware Used
- ESP32 DevKit
- MQ-135 Air Quality Sensor
- DHT11 Temperature & Humidity Sensor
- 0.96" I2C OLED Display (128x64)
- Breadboard & Jumper Wires

## Wiring Connections

### OLED Display (I2C)
- SDA -> GPIO 25
- SCL -> GPIO 33
- VCC -> 3.3V
- GND -> GND

### MQ-135 Sensor (Gas)
- AO (Analog Output) -> GPIO 34
- VCC -> 5V
- GND -> GND

### DHT11 Sensor (Temperature / Humidity)
- S (Data) -> GPIO 14
- VCC -> 3.3V
- GND -> GND

## Libraries Required
Install the following libraries in Arduino IDE from the Library Manager:
- Adafruit SSD1306
- Adafruit GFX Library
- DHT sensor library (by Adafruit)

## How It Works
1. The ESP32 reads the analog value from the MQ-135 sensor and maps it to a percentage (0–100%).
2. It fetches temperature and humidity values from the DHT11 sensor.
3. All values are refreshed every 2 seconds and rendered on the OLED display.
