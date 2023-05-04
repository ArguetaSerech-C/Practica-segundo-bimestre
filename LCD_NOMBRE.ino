#include <LiquidCrystal.h>

LiquidCrystal Carlos_LCD(12,11,5,4,3,2);
#define RS 12
#define Enable 11
#define D4 5
#define D5 4
#define D6 3
#define d7 2
void setup() {
 Carlos_LCD.begin(16,2);

}

void loop() {
 Carlos_LCD.setCursor(0,0);
  Carlos_LCD.print("Carlos Argueta");
 Carlos_LCD.setCursor(0,1);
 Carlos_LCD.print("2022335");
}
