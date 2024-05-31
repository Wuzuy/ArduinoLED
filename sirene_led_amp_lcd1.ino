#include <stdio.h>
#include <LiquidCrystal.h>

LiquidCrystal lcd(6,5,4,3,2,1,0);

int pinoR = 11;
int pinoB = 10;
int pinoG = 9;
int backLight = 8;


#define COMMON_CATODE
void setup (){
  
  pinMode(pinoR, OUTPUT);
  pinMode(pinoG, OUTPUT);
  pinMode(pinoB, OUTPUT);
  pinMode(backLight, OUTPUT);
  digitalWrite(backLight, HIGH); 
  setColor(255, 255, 255);
  delay(6500);
}
void setColor(int vermelho, int verde, int azul){
  analogWrite(pinoR, vermelho);
  analogWrite(pinoG, verde);
  analogWrite(pinoB, azul);
}
void loop(){
  delay(500);
  setColor(0,0,255);
  delay(500);
  setColor(255,0,0);
}