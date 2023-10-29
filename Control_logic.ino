#include <LiquidCrystal.h>
const int temperature = A0;

int cooler = 6;
int heater = 7;
float temp;
LiquidCrystal lcd(8,9,10,11,12,13);
void setup() {
  // put your setup code here, to run once:
  lcd.begin(20,4);

  pinMode(temperature, INPUT);
  pinMode(cooler, OUTPUT);
  pinMode(heater, OUTPUT);
  lcd.print("Controller");
  lcd.print("Started");
  delay(1000);
  lcd.clear();
}

void loop() {
  // put your main code here, to run repeatedly:
temp = analogRead(temperature);
temp = (temp*5000)/1023;
temp = temp/10;

lcd.print("Desired Temp = 32");

lcd.setCursor(0,1);
lcd.print("Current Temp = ");
lcd.print(temp);

if(temp>32)
{
  digitalWrite(cooler,HIGH);
  digitalWrite(heater,LOW);
  lcd.setCursor(0,2);
  lcd.print("State : Cooling");
  lcd.setCursor(0,3);
  lcd.print("Cooler On");
}
if(temp<32)
{
  digitalWrite(heater,HIGH);
  digitalWrite(cooler,LOW);
  lcd.setCursor(0,2);
  lcd.print("State : Heating");
  lcd.setCursor(0,3);
  lcd.print("Heater On");
}
if(temp == 32)
{
  digitalWrite(heater,LOW);
  digitalWrite(cooler,LOW);
  lcd.setCursor(0,2);
  lcd.print("State : Normal");
  lcd.setCursor(0,3);
  lcd.print("No Operation");
}
delay(1000);
lcd.clear();
}
