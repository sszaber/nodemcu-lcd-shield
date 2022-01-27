#include <LiquidCrystal.h>
const int rs=D1, en=D2, d4=D4, d5=D5, d6=D6, d7=D7;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7); //select the pins used on the LCD panel

void setup(){
  
   lcd.begin(16, 2);
   lcd.clear();  
}
 
void loop(){

 lcd.setCursor(0,1);
 lcd.clear();
 lcd.print(analogRead(A0)); //read anolog pin A0
 delay(100);

}
 
