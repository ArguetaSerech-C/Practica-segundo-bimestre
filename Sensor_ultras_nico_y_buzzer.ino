/*
   Fundación Kinal
   Centro educativo tecnico laboral Kinal
   quinto perito
   Quinto electronica
   Código técnico: PE5BV
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: practica 5/ Sensor ultrasónico y buzzer
   Dev: Prof. Carlos Argueta Serech
   Fecha: 28/04/23
*/

//Sensor
const int trigPin = 3;
const int echoPin = 4;

//buzzer y sus espesificaciones en variables
int buzzerPin = 2;
long duration;
int distance;
int duracion = 500;
int retardo = 700;

//Tonos , notas
int do_ = 523.25;
int re = 587.33;
int mi = 659.26;
int fa = 698.46;
int sol = 783.99;
int la = 880.00;
int si = 987.77;

//salidas/entradas
void setup()
{
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
}

void loop()
{
  //tiempo y lector del sensor
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;
  // distancia comparada con la anterior
  //nota DO
  if (distance <= 5 && distance >= 0)
  {
    tone(buzzerPin, do_, duracion);
    delay(retardo);
  }
  //nota RE
  if (distance <= 10 && distance >= 6)
  {
    tone(buzzerPin, re, duracion);
    delay(retardo);
  }
  //nota MI
  if (distance <= 15 && distance >= 11)
  {
    tone(buzzerPin, mi, duracion);
    delay(retardo);
  }
  //nota FA
  if (distance <= 20 && distance >= 16)
  {
    tone(buzzerPin, fa, duracion);
    delay(retardo);
  }
  //nota SOL
  if (distance <= 25 && distance >= 21)
  {
    tone(buzzerPin, sol, duracion);
    delay(retardo);
  }//nota LA
  if (distance <= 30 && distance >= 26)
  {
    tone(buzzerPin, la, duracion);
    delay(retardo);
  }
  //nota si
  if (distance <= 35 && distance >= 31)
  {
    tone(buzzerPin, si, duracion);
    delay(retardo);
  }
}
