#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x20, 16, 2);

int temperaturesensor;

void setup()
{
  Serial.begin(9600);
  lcd.init();
  lcd.backlight();
}

void loop()
{
  temperaturesensor = map(analogRead(A0) - 20 * 3.04,
               0, 1023, -20, 120);

    Serial.println(temperaturesensor);

    lcd.setCursor(0, 1);
    lcd.print("Temp=");

    lcd.clear();

    lcd.setCursor(8, 0);
    lcd.print(temperaturesensor);

    lcd.setCursor(0, 0);

    delay(300);
}
