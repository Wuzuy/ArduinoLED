#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,10,5,4,3,2);

int backLight = 13;

void setup () {
  pinMode (backLight, OUTPUT);
  digitalWrite(backLight, HIGH);
  
  lcd.begin(16, 2);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.write("Carro da policia");
  
  delay(1500);
  lcd.setCursor(0, 1);
  lcd.write("(Simulacao)");
  delay(5000);
  Serial.begin(9600);
}
void loop(){
  delay(250);
  lcd.noDisplay();
  delay(250);
  lcd.display();
  delay(250);
  lcd.display();
}