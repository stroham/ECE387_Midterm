
# include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);
const int switchPin = 6;
int switchState = 0;
void setup() {
  lcd.begin(16,2);


 
}

void loop() {
switchState = digitalRead(switchPin);
int k = 0;
int pos = 0; 

if(switchState ==LOW){
  for (k = 0; k<16; k++){
    switchState = digitalRead(switchPin);
    if(switchState == LOW){
    lcd.setCursor(8,1);
    lcd.print ("^");
    lcd.setCursor(k,0);
    lcd.print("*");
    delay(50);
    lcd.clear();
    delay(50);
    pos = k;}}
}
     if (switchState == HIGH && pos == 8){
      lcd.setCursor(0,0);
      lcd.print("Winner");
      delay(2000); 
    }
    if(switchState == HIGH && pos!=8){
       lcd.setCursor(0,0);
       lcd.print("Try Again");
       delay(2000);
    }
  switchState = digitalRead(switchPin);
  if(switchState == LOW){
  for (k = 15; k>=0; k--){
    switchState = digitalRead(switchPin);
    if(switchState == LOW){
    lcd.setCursor(8,1);
    lcd.print ("^");
    lcd.setCursor(k,0);
    lcd.print("*");
    delay(50);
    lcd.clear();
    delay(50);
    pos = k;}}
  }
     if (switchState == HIGH &&pos == 8){
      lcd.setCursor(0,0);
      lcd.print("Winner");
      delay(2000); 
    }
    if(switchState==HIGH && pos !=8){
       lcd.setCursor(0,0);
       lcd.print("Try Again");
       delay(2000);
    }
   

    k = 0;
 
}
