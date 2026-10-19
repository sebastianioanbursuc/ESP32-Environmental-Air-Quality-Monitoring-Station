#include <Wire.h>
#include <Adafruit_SSD1306.h>
#include "DHT.h"

#define I2C_SDA 25
#define I2C_SCL 33
#define MQ135_PIN 34

Adafruit_SSD1306 display(128, 64, &Wire, -1);

#define DHTPIN 14     // Pinul unde ai legat semnalul (S)
#define DHTTYPE DHT11 // Tipul senzorului

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Wire.begin(I2C_SDA, I2C_SCL);
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  display.setTextColor(WHITE);
  dht.begin();
}

void loop() {
  int citire = analogRead(MQ135_PIN);
  int procent = map(citire, 0, 4095, 0, 100); // Convertește scara 0-4095 în 0-100%
  float temp = dht.readTemperature();
  float umid = dht.readHumidity();
  display.clearDisplay();
  
  display.setTextSize(1);
  display.setCursor(0, 0);
  display.print("Gaz in aer: ");

  display.setTextSize(1);
  display.setCursor(70, 0);
  display.print(procent);
  display.print("%");

  display.setTextSize(1);
  display.setCursor(0, 20);
  display.print("Temperatura:");
  display.print(temp);
  display.print("C");
  
  display.setTextSize(1);
  display.setCursor(0, 40);
  display.print("Umiditatea :");
  display.print(umid);
  display.print("%");


  display.display();
  delay(1000);
}