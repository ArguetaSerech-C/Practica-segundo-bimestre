/*
  Fundacion Kinal
  Centro educativo tecnico laboral Kinal
  Perito en electronica
  Quinto perito
  Seccion: A
  Curso: Taller de electronica digital y reparacion de computadoras I
  Alumno: Carlos Argueta Serech
  Carne: 2022335
  Proyecto: Sensor de temperatura
*/


//Librerias
#include <LiquidCrystal_I2C.h>
#include <OneWire.h>
#include <DallasTemperature.h>
//defino el pin del sensor
#define sensor 2
//pines de los leds
#define L_ROJO  5
#define L_AZUL  7
#define L_AMARILLO  6
// controlar el sensor y lcd
OneWire ourWire(sensor);
DallasTemperature sensors(&ourWire);
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup()
//salidas para los leds
//iniciar lcd
{
  pinMode(L_ROJO, OUTPUT);
  pinMode(L_AZUL, OUTPUT);
  pinMode(L_AMARILLO, OUTPUT);
  lcd.init();
  lcd.backlight();
  Serial.begin(9600);
  sensors.begin();
}

void loop()

{
  //solicito los datos de la lectura del sensor en variables de tipo flotante
  sensors.requestTemperatures();
  float tempC = sensors.getTempCByIndex(0);
  float tempF = sensors.getTempFByIndex(0);
  //condicionales
  //cuando la temperatura sea mayor a 30 encendera led rojo
  if (tempC >= 30.00 && tempC <= 50.00)
  {
    digitalWrite(L_ROJO, HIGH);
    digitalWrite(L_AZUL, LOW);
    digitalWrite(L_AMARILLO, LOW);

    lcd.setCursor(0, 0);
    lcd.print("temp. C: ");
    lcd.print(tempC);
    lcd.setCursor(0, 1);
    lcd.print("temp. F: ");
    lcd.print(tempF );
  }
  //cuando la temperatura este en un rango de 15-30 se encendera led amarillo
  else if (tempC >= 15 && tempC <= 29)
  {
    digitalWrite(L_ROJO, LOW);
    digitalWrite(L_AZUL, LOW);
    digitalWrite(L_AMARILLO, HIGH);
    lcd.setCursor(0, 0);
    lcd.print("temp. C: ");
    lcd.print(tempC);
    lcd.setCursor(0, 1);
    lcd.print("temp. F: ");
    lcd.print(tempF );
  }
  //cuando la temperatura sea menor a 15 se encedera led azul
  else if (tempC >= -5 && tempC <= 14)
  {
    digitalWrite(L_ROJO, LOW);
    digitalWrite(L_AZUL, HIGH);
    digitalWrite(L_AMARILLO, LOW);
    lcd.setCursor(0, 0);
    lcd.print("temp. C: ");
    lcd.print(tempC);
    lcd.setCursor(0, 1);
    lcd.print("temp. F: ");
    lcd.print(tempF );
  }
}
