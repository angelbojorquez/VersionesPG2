#include <LiquidCrystal_I2C.h> // Libreria que controla el I2C
#include <Wire.h>

LiquidCrystal_I2C lcd(0x3f,16,2); 

void setup() {
  lcd.init();
  lcd.backlight();
  lcd.clear();
  lcd.setCursor(8,0);
  lcd.print("** PG2 **"); // Mensaje a despegar
  delay(3000);
}

void loop() { 
  for(int c=0; c<12; c++){
  lcd.scrollDisplayLeft();
  delay(400);
  }
  for(int c=0; c<12;c++){
  lcd.scrollDisplayRight();
  delay(400); 
  }
}
