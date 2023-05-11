
#include <LiquidCrystal_I2C.h>


int medicion_Distancia(unsigned char _echoPinSensor, unsigned char _trigPinSensor);
int medicion_ultrasonico;

LiquidCrystal_I2C lcd(0x20, 16, 2); //

void setup() {

  pinMode(3, INPUT);
  pinMode(4, OUTPUT);
  lcd.init();
  lcd.backlight();
}

void loop() {

  medicion_ultrasonico = medicion_Distancia(3, 4);
  if (medicion_ultrasonico >= 20 && medicion_ultrasonico <= 200)
  {

    lcd.setCursor(2, 0);
    lcd.print("sistema de");

  }


}
int medicion_Distancia(unsigned char _echoPinSensor, unsigned char _trigPinSensor)
{
  int medicion;
  int duracion_echo;

  digitalWrite(_trigPinSensor, HIGH);
  delayMicroseconds(10);
  digitalWrite(_trigPinSensor, LOW);
  duracion_echo = pulseIn(_echoPinSensor, HIGH);
  medicion = duracion_echo / 59;
  return medicion;
}
