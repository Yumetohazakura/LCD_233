#include <LiquidCrystal.h>
int sensorValue = 0;

// initialize the library with the numbers of the interface pins
const int rs = 3, en = 2, d4 = 1, d5 = 4, d6 = 6, d7 = 8;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() 
{
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  Serial.begin(9600);
  lcd.begin(16,2);
  lcd.print("Starting System");
    delay(1000);
    lcd.clear();
    lcd.print("System On");
    delay(1500);  
  
lcd.clear();

}

void loop() 
{
lcd.setCursor(0,0);
lcd.print("  DIY Inventor");
    

  sensorValue = analogRead(A0);
  Serial.println(sensorValue);

lcd.setCursor(0,1);
lcd.print(sensorValue);
lcd.setCursor(4,1);
lcd.print("Sensor Value");
  

  delay(500);
  lcd.clear();
}
