/*
Fundacion Kinal
Centro educativo tecnico laboral Kinal
Perito en electronica
Quinto perito
Seccion: A
Curso: Taller de electronica digital y reparacion de computadoras I
Alumno: Carlos Argueta Serech
Carne: 2022335
Proyecto: BOMBA DE AGUA 
*/



#define Rele 3 //rele que se usara como interruptor para la bomba de agua
#define sensor 4 // led 1 "lleno" se encendera usando a un transistor como sensor
#define LED_V 5 //Led que se mantendra encendido mientras este vacio el recipiente

void setup() {
  // Define los pines como entradas o salidas
  pinMode(Rele, OUTPUT);
  pinMode(LED_V,OUTPUT);
  pinMode(sensor,INPUT);

}

void loop() {
  bool estadoled = digitalRead(sensor); //leer el transistor y guardar en la variable
  if(estadoled ==HIGH)
{
  digitalWrite(Rele,LOW);
  digitalWrite(LED_V,HIGH);
 }
 if(estadoled==LOW)
 {
  digitalWrite(Rele,HIGH);
  digitalWrite(LED_V,LOW);
 } }
