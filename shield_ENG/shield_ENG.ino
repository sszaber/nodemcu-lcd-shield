#define SELECT_KEY   1
#define LEFT_KEY     2
#define DOWN_KEY     3
#define UP_KEY       4
#define RIGHT_KEY    5

#include <LiquidCrystal.h>
const int rs=D1, en=D2, d4=D4, d5=D5, d6=D6, d7=D7;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7); //select the pins used on the LCD panel

int menuPos = 0;

String menuLines[6] =
{
  "Settings",
  "Reset",
  "Main Site",
  "Server IP",
  "Get Data",
  "Return"
};

void setup() {

  lcd.begin( 16, 2 );
  
}

void loop() {

   lcd.clear();
   lcd.print(">"); lcd.print( menuLines[ menuPos ] );
   lcd.setCursor(0, 1); lcd.print( menuLines[ menuPos + 1] );

   if( getKeyID() == UP_KEY ) menuPos--;
   if( getKeyID() == DOWN_KEY ) menuPos++;

   if( menuPos < 0 ) menuPos = 0;
   if( menuPos > 5 ) menuPos = 5;

   delay(100);
  

}

int getKeyID()
{
  int aRead = analogRead( A0 );

  if( aRead > 500 ) return 0;                //no key is pressed
  if( aRead > 420  ) return SELECT_KEY;      //select key 
  if( aRead > 350  ) return LEFT_KEY;        //left key
  if( aRead > 300  ) return DOWN_KEY;        //right key
  if( aRead > 150   ) return UP_KEY;         //up key
  if( aRead < 30   ) return RIGHT_KEY;       //right key

return 0;
}

