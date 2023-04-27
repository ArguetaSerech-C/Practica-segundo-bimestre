/*
Fundacion Kinal
Centro educativo tecnico laboral Kinal
Perito en electronica
Quinto perito
Seccion: A
Curso: Taller de electronica digital y reparacion de computadoras I
Alumno: Carlos Argueta Serech
Carne: 2022335
Proyecto: Practica 4 / Diseño de Firmware
*/

#define rele 2 //activador de rele
#define c 3
#define e 4 
#define d 5
#define b 7
#define a 6
#define f 8
#define g 9

const int trigPin = 11;
const int echoPin = 12;
const int cantidad = 20;
int suma=0;
int V = 260; // variable para delay

long duration;
int distance;

void setup() {
  pinMode(trigPin, OUTPUT); 
  pinMode(echoPin, INPUT); 
  Serial.begin(9600); 
  pinMode(rele, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(d, OUTPUT);
  
  
  

}
  
  void loop() { //medir
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
    
  duration = pulseIn(echoPin, HIGH);
    
  distance= duration*0.034/2;
   
  Serial.print(String(distance));
  Serial.println(" cm");
    
    delay(100); //suma para el contador, sube dependiendo del sensor
    
     if (distance <= cantidad && distance > 0) {
       
     suma++;
     }  
     if(suma>=1000) suma=0;
     delay(100);
     
    
    
    switch(suma){
      case 0: //numero 0
      digitalWrite(rele, LOW),
      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, HIGH);
      digitalWrite(e, HIGH);
      digitalWrite(f, HIGH);
      digitalWrite(g, LOW);
      break;
      
     
     case 1: //numero 1
      digitalWrite(rele, LOW);
      digitalWrite(a, LOW);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, LOW);
      digitalWrite(e, LOW);
      digitalWrite(f, LOW);
      digitalWrite(g, LOW);
      delay(V);
      
      break;
      
      case 2: //numero 2
      digitalWrite(rele, LOW);
      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, LOW);
      digitalWrite(d, HIGH);
      digitalWrite(e, HIGH);
      digitalWrite(f, LOW);
      digitalWrite(g, HIGH);
      delay(V);
  
      break;
    
      case 3: //numero 3
      digitalWrite(rele, LOW);
      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, HIGH);
      digitalWrite(e, LOW);
      digitalWrite(f, LOW);
      digitalWrite(g, HIGH);
      delay(V);
     
      break;
      
      case 4: //numero 4
      digitalWrite(rele, LOW);
      digitalWrite(a, LOW);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, LOW);
      digitalWrite(e, LOW);
      digitalWrite(f, HIGH);
      digitalWrite(g, HIGH);
      delay(V);
      break;
      
      case 5: //numero 5
      digitalWrite(rele, LOW);
      digitalWrite(a, HIGH);
      digitalWrite(b, LOW);
      digitalWrite(c, HIGH);
      digitalWrite(d, HIGH);
      digitalWrite(e, LOW);
      digitalWrite(f, HIGH);
      digitalWrite(g, HIGH);
      delay(V);
      break;
      
      case 6: //numero 6
      digitalWrite(rele, LOW);
      digitalWrite(a, HIGH);
      digitalWrite(b, LOW);
      digitalWrite(c, HIGH);
      digitalWrite(d, HIGH);
      digitalWrite(e, HIGH);
      digitalWrite(f, HIGH);
      digitalWrite(g, HIGH);
      delay(V);
      break;
      
      case 7: //numero 7
      digitalWrite(rele, LOW);
      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, LOW);
      digitalWrite(e, LOW);
      digitalWrite(f, LOW);
      digitalWrite(g, LOW);
      delay(V);
      break;
      
      
      case 8: //numero 8
      digitalWrite(rele, LOW);
      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, HIGH);
      digitalWrite(e, HIGH);
      digitalWrite(f, HIGH);
      digitalWrite(g, HIGH);
      delay(V);
      break;
      
      case 9: //numero 9
      digitalWrite(rele, LOW);
      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, LOW);
      digitalWrite(e, LOW);
      digitalWrite(f, HIGH);
      digitalWrite(g, HIGH);
      delay(V);
      break;
      
      case 10: //numero 10 no aparece en el display, sirve para activar el foco
      digitalWrite(rele, HIGH);
      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, LOW);
      digitalWrite(e, LOW);
      digitalWrite(f, HIGH);
      digitalWrite(g, HIGH);
      break;
      
      delay(V);
      
}
}
