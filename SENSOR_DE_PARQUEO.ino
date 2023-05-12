/*
Fundacion Kinal
Centro educativo tecnico laboral Kinal
Perito en electronica
Quinto perito
Seccion: A
Curso: Taller de electronica digital y reparacion de computadoras I
Alumno: Carlos Argueta Serech
Carne: 2022335
Proyecto: Sensor de Parqueo 
*/




#include <LiquidCrystal_I2C.h>

//Definicion de los pines
int medicion_Distancia(unsigned char _echoPinSensor, unsigned char _trigPinSensor);
int medicion_ultrasonico;

LiquidCrystal_I2C lcd(0x27, 16, 2);
//caracter para llenar un cuadro
byte caracter[] = {
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111,
  B11111
};


void setup() {
  //salidas y entradas del sensor ultrasonico
  pinMode(3, INPUT);
  pinMode(4, OUTPUT);
  lcd.createChar(1, caracter); //nombre del caracter = 1
  //iniciar el lcd
  lcd.init();
  lcd.backlight();
}

void loop() {
  //condicionales tomando de base el valode de le medicion
  medicion_ultrasonico = medicion_Distancia(3, 4);
  if (medicion_ultrasonico >= 50 && medicion_ultrasonico <= 100)
  {
    delay(500);
    lcd.setCursor(7, 0);
    lcd.print("50");
    lcd.setCursor(3, 1);
    lcd.print("Esta libre");



    lcd.setCursor(0, 0);
    lcd.write(1);
    lcd.setCursor(1, 0);
    lcd.write(1);
    lcd.setCursor(2, 0);
    lcd.write(1);
    lcd.setCursor(13, 0);
    lcd.write(1);
    lcd.setCursor(14, 0);
    lcd.write(1);
    lcd.setCursor(15, 0);
    lcd.write(1);
    delay(500);
    lcd.clear();


  }
  if (medicion_ultrasonico >= 30 && medicion_ultrasonico <= 49)
  {
    delay(500);

    lcd.setCursor(7, 0);
    lcd.print("30");
    lcd.setCursor(2, 1);
    lcd.print("Con cuidado");


    lcd.setCursor(0, 0);
    lcd.write(1);
    lcd.setCursor(1, 0);
    lcd.write(1);
    lcd.setCursor(2, 0);
    lcd.write(1);
    lcd.setCursor(3, 0);
    lcd.write(1);
    lcd.setCursor(4, 0);
    lcd.write(1);
    lcd.setCursor(11, 0);
    lcd.write(1);
    lcd.setCursor(12, 0);
    lcd.write(1);
    lcd.setCursor(13, 0);
    lcd.write(1);
    lcd.setCursor(14, 0);
    lcd.write(1);
    lcd.setCursor(15, 0);
    lcd.write(1);
    delay(500);
    lcd.clear();


  }
  if (medicion_ultrasonico >= 10 && medicion_ultrasonico <= 29)
  {
    delay(500);

    lcd.setCursor(7, 0);
    lcd.print("10");
    lcd.setCursor(5, 1);
    lcd.print("ALTO!");


    lcd.setCursor(0, 0);
    lcd.write(1);
    lcd.setCursor(1, 0);
    lcd.write(1);
    lcd.setCursor(2, 0);
    lcd.write(1);
    lcd.setCursor(3, 0);
    lcd.write(1);
    lcd.setCursor(4, 0);
    lcd.write(1);
    lcd.setCursor(5, 0);
    lcd.write(1);
    lcd.setCursor(6, 0);
    lcd.write(1);
    lcd.setCursor(9, 0);
    lcd.write(1);
    lcd.setCursor(10, 0);
    lcd.write(1);
    lcd.setCursor(11, 0);
    lcd.write(1);
    lcd.setCursor(12, 0);
    lcd.write(1);
    lcd.setCursor(13, 0);
    lcd.write(1);
    lcd.setCursor(14, 0);
    lcd.write(1);
    lcd.setCursor(15, 0);
    lcd.write(1);
    delay(500);
    lcd.clear();

  }
}
//funcion que devolvera el valor de la distancia = medicion
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
