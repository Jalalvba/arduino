#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
void setup() {
  Serial.begin(9600);
  Serial.println("setup started");
  lcd.init();
  Serial.println("lcd init done");
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("Hello Jalal");
  Serial.println("print done");
}
void loop() {}
