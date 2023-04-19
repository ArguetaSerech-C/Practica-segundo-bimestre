/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AM / EB5AV 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: bomba de agua "prueba"
   Dev: Carlos Argueta Serech
   Fecha: 18 de abril
*/

#define Estado_LED 3 // sevira para leer el estado del led 
#define RELE 4 // dependera del estado del led al igual que el pin 5
#define LED 5



void setup()
{
  //definir entradas y salidas
  pinMode(Estado_LED, INPUT);
  pinMode(RELE, OUTPUT);
  pinMode(LED, OUTPUT);
  
}


void loop()
//funcionamiento a partir de la lectura del circuito en fisico 
{
  bool estado1 = digitalRead(Estado_LED);
  if(estado1 ==LOW)
  {
    digitalWrite(RELE,HIGH);
    digitalWrite(LED,LOW);
    
  }
   if(estado1 ==HIGH)
  {
    digitalWrite(RELE,LOW);
    digitalWrite(LED,HIGH);
  }
 
  }
