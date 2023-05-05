/*
  Fundacion Kinal
  Centro educativo tecnico laboral Kinal
  Perito en electronica
  Quinto perito
  Seccion: A
  Curso: Taller de electronica digital y reparacion de computadoras I
  Alumno: Carlos Argueta Serech
  Carne: 2022335
  Proyecto: contador aforo
*/

#include <LiquidCrystal.h> // libreria para LCD
// directivas de procesador
// pines de lcd
#define RS  12
#define Enable 11
#define D4 5
#define D5 4
#define D6 3
#define D7 2

//pines de sensor
//variables de operacion y valores de buzzer
const int trigPin = 10;
const int echoPin = 9;
const int cantidad = 20;
long duration;
int distance;
int buzzerPin = 7;
int duracion = 500;
int retardo = 700;
int sonido = 987.77;
int operacion = 0;

int intermedio = 200; // tiempo de delay
//orden de pines
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

//Dibujos en un cuadro lcd
byte animacion1[] = //persona con brazos abajo
{
  B01110,
  B01110,
  B01110,
  B00100,
  B11111,
  B00100,
  B01010,
  B10001
};

byte animacion2[] = //persona con brazos arriba
{
  B01110,
  B01110,
  B11111,
  B10101,
  B01110,
  B00100,
  B00100,
  B01010
};
byte imagen1[] = //flecha hacia abajo
{
  B01110,
  B01110,
  B01110,
  B01110,
  B01110,
  B11111,
  B01110,
  B00100
};


void setup()
//entrada y salida del sensor
{
  pinMode(9, INPUT);
  pinMode(10, OUTPUT);
  lcd.begin(16, 2);
  //"nombre" de los dibujos
  lcd.createChar(2, animacion1);
  lcd.createChar(1, animacion2);
  lcd.createChar(3, imagen1);
}

void loop()
//parametros del sensor
{
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;
  Serial.print(String(distance));
  Serial.println(" cm");
  delay(100);
  //operacion de para el avance
  if (distance <= cantidad && distance > 0) {
    operacion++;
  }
  if (operacion >= 700) operacion = 0;
  Serial.print(operacion);
  //operacion subira el contador conforme detecte algo en la entrada del sensor


  // accion al resultado de la operacion y deteccion en el sensor
  //numeracion de personas
  switch (operacion) {
    case 0:
      digitalWrite(buzzerPin, LOW);
      delay(500);
      lcd.setCursor(3, 0);
      lcd.print("Contador De");
      lcd.setCursor(4, 3);
      lcd.print("Personas");
      delay(1000);
      lcd.clear();
      break;

    case 1:
      digitalWrite(buzzerPin, LOW);
      lcd.setCursor(0, 0);
      lcd.print("NO. personas:1");
      delay(intermedio);
      break;

    case 2:
      digitalWrite(buzzerPin, LOW);
      lcd.setCursor(0, 0);
      lcd.print("NO. personas:2");
      delay(intermedio);
      break;

    case 3:
      digitalWrite(buzzerPin, LOW);
      lcd.setCursor(0, 0);
      lcd.print("NO. personas:3");
      delay(intermedio);
      break;

    case 4:
      digitalWrite(buzzerPin, LOW);
      lcd.setCursor(0, 0);
      lcd.print("NO. personas:4");
      delay(intermedio);
      break;

    case 5:
      digitalWrite(buzzerPin, LOW);
      lcd.setCursor(0, 0);
      lcd.print("NO. personas:5");
      delay(intermedio);
      break;

    case 6:
      digitalWrite(buzzerPin, LOW);
      lcd.setCursor(0, 0);
      lcd.print("NO. personas:6");
      delay(intermedio);
      break;

    case 7:
      digitalWrite(buzzerPin, LOW);
      lcd.setCursor(0, 0);
      lcd.print("NO. personas:7");
      delay(intermedio);
      break;

    case 8:
      digitalWrite(buzzerPin, LOW);
      lcd.setCursor(0, 0);
      lcd.print("NO. personas:8");
      delay(intermedio);
      break;

    case 9:
      digitalWrite(buzzerPin, LOW);
      lcd.setCursor(0, 0);
      lcd.print("NO. personas:9");
      delay(intermedio);
      break;

    case 10:
      digitalWrite(buzzerPin, LOW);
      lcd.setCursor(0, 0);
      lcd.print("NO. personas:10");
      delay(intermedio);
      break;

    case 11:
      digitalWrite(buzzerPin, LOW);
      lcd.setCursor(0, 0);
      lcd.print("NO. personas:11");
      delay(intermedio);
      break;

    case 12:
      digitalWrite(buzzerPin, LOW);
      lcd.setCursor(0, 0);
      lcd.print("NO. personas:12");
      delay(intermedio);
      break;

    case 13:
      digitalWrite(buzzerPin, LOW);
      lcd.setCursor(0, 0);
      lcd.print("NO. personas:13");
      delay(intermedio);
      break;

    case 14:
      digitalWrite(buzzerPin, LOW);
      lcd.setCursor(0, 0);
      lcd.print("NO. personas:14");
      delay(intermedio);
      break;

    case 15:
      digitalWrite(buzzerPin, LOW);
      lcd.setCursor(0, 0);
      lcd.print("NO. personas:15");
      delay(intermedio);
      break;

    case 16:
      digitalWrite(buzzerPin, LOW);
      lcd.setCursor(0, 0);
      lcd.print("NO. personas:16");
      delay(intermedio);
      lcd.clear();
      break;


    case 17:
      digitalWrite(buzzerPin, LOW);
      lcd.setCursor(1, 0);
      lcd.print("Aforo maximo");
      lcd.setCursor(14, 0);
      lcd.write(3);
      lcd.setCursor(4, 2);
      lcd.print("Lleno");
      delay(intermedio);

      break;
  }
  //Accion para ejecutar en el maximo del aforo
  if (operacion >= 17)
  {
    tone(buzzerPin, sonido, duracion);
    lcd.setCursor(9, 2);
    lcd.write(1);
    delay(250);
    lcd.setCursor(9, 2);
    lcd.write(2);
    delay(250);
  }

}
