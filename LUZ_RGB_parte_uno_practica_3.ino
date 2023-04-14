/*
Fundacion Kinal
Centro educativo tecnico laboral Kinal
Perito en electronica
Quinto perito
Seccion: A
Curso: Taller de electronica digital y reparacion de computadoras I
Alumno: Carlos Argueta Serech
Carne: 2022335
Proyecto: LUZ RGB
*/


#define Boton1 2 //definir valores de cada pin
#define Boton2 3
#define R 4
#define V 5
#define A 6

void setup() {
  pinMode(Boton1, INPUT);// definir los pines como entrada o salida
  pinMode(Boton2, INPUT);
  pinMode(R, OUTPUT);
  pinMode(V, OUTPUT);
  pinMode(A, OUTPUT);
}


void loop()
//Condicionar una comparacion entre el boton 1 y 2, ambos comparados por sus valores 
{
  if (digitalRead(Boton1) == LOW && digitalRead(Boton2) == LOW) {
    digitalWrite(R, HIGH);
    delay(500);
    digitalWrite(R, LOW);
    
    digitalWrite(V, HIGH);
    delay(500);
    digitalWrite(V, LOW);

    digitalWrite(A, HIGH);
    delay(500);
    digitalWrite(A, LOW);
  }

  if (digitalRead(Boton1) == HIGH && digitalRead(Boton2) == LOW) {
    digitalWrite(R, HIGH);
    digitalWrite(V, HIGH);
    delay(1000);
    digitalWrite(R, LOW);
    digitalWrite(V, LOW);
    
}
  if (digitalRead(Boton1) == LOW && digitalRead(Boton2) == HIGH) {
    digitalWrite(V, HIGH);
    digitalWrite(A, HIGH);
     delay(1000);
     digitalWrite(V, LOW);
    digitalWrite(A, LOW);
}
if (digitalRead(Boton1) == HIGH && digitalRead(Boton2) == HIGH) {
    digitalWrite(R, HIGH);
    digitalWrite(A, HIGH);
     delay(1000);
         digitalWrite(R, LOW);
    digitalWrite(A, LOW);
}

}
