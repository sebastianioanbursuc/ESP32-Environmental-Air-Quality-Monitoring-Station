**ESP32 Air Quality, Temperature and Humidity Monitor**
Simple project made with an ESP32 board, a gas sensor, a temperature and humidity sensor, and a small OLED display.

**Components Used:**
1.ESP32 DevKit Board
2.MQ-135 Gas Sensor
3.DHT11 Temperature and Humidity Sensor
4.0.96 inch I2C OLED Display (128x64)
5.Breadboard and Jumper Wires

**Wiring Connections**
OLED Display (I2C):
-SDA -> GPIO 25
-SCL -> GPIO 33
-VCC -> 3.3V
-GND -> GND

**MQ-135 Sensor (Gas):**
-AO (Analog Out) -> GPIO 34
-VCC -> 5V
-GND -> GND

**DHT11 Sensor (Temperature / Humidity):**
-S (Data) -> GPIO 14
-VCC -> 3.3V
-GND -> GND

**Libraries Used in Arduino IDE**
To run the code, install these libraries from Library Manager:
-Adafruit SSD1306
-Adafruit GFX Library
-DHT sensor library by Adafruit
