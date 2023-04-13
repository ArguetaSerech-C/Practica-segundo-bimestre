/*
Fundacion Kinal
Centro educativo tecnico laboral Kinal
Perito en electronica
Quinto perito
Seccion: A
Curso: Taller de electronica digital y reparacion de computadoras I
Alumno: Carlos Argueta Serech
Carne: 2022335
Proyecto: 
*/


#define led1 2
#define led2 3
#define led3 4
#define led4 5
#define led5 6
#define led6 7
#define led7 8
#define led8 9
#define led9 10
#define led10 11

int T = 50;
int T2 = 10;
int T3 = 85;
void setup ()
{
pinMode (led1,OUTPUT);
pinMode (led2,OUTPUT);
pinMode (led3,OUTPUT);
pinMode (led4,OUTPUT);
pinMode (led5,OUTPUT);
pinMode (led6,OUTPUT);
pinMode (led7,OUTPUT);
pinMode (led8,OUTPUT);
pinMode (led9,OUTPUT);
pinMode (led10,OUTPUT);

}

void loop() {

//1...
digitalWrite(led1,HIGH);
delay(T);
digitalWrite(led1,LOW);
delay(T2);
delay(T);
//...2...
digitalWrite(led2,HIGH);
delay(T);
digitalWrite(led2,LOW);
delay(T2);
delay(T);
//...3...
digitalWrite(led3,HIGH);
delay(T);
digitalWrite(led3,LOW);
delay(T2);
delay(T);
//...4...
digitalWrite(led4,HIGH);
delay(T);
digitalWrite(led4,LOW);
delay(T2);
delay(T);
//...5...
digitalWrite(led5,HIGH);
delay(T);
digitalWrite(led5,LOW);
delay(T2);
delay(T);
//...6...
digitalWrite(led6,HIGH);
delay(T);
digitalWrite(led6,LOW);
delay(T2);
delay(T);
//...7...
digitalWrite(led7,HIGH);
delay(T);
digitalWrite(led7,LOW);
delay(T2);
delay(T);
//...8...
digitalWrite(led8,HIGH);
delay(T);
digitalWrite(led8,LOW);
delay(T2);
delay(T);
//...9...
digitalWrite(led9,HIGH);
delay(T);
digitalWrite(led9,LOW);
delay(T2);
delay(T);
//...10...
digitalWrite(led10,HIGH);
delay(T);
digitalWrite(led10,LOW);
delay(T2);
delay(T);
//inverso
//...9...
digitalWrite(led9,HIGH);
delay(T);
digitalWrite(led9,LOW);
delay(T2);
delay(T);
//...8...
digitalWrite(led8,HIGH);
delay(T);
digitalWrite(led8,LOW);
delay(T2);
delay(T);
//...7...
digitalWrite(led7,HIGH);
delay(T);
digitalWrite(led7,LOW);
delay(T2);
delay(T);
//...6...
digitalWrite(led6,HIGH);
delay(T);
digitalWrite(led6,LOW);
delay(T2);
delay(T);
//...5...
digitalWrite(led5,HIGH);
delay(T);
digitalWrite(led5,LOW);
delay(T2);
delay(T);
//...4...
digitalWrite(led4,HIGH);
delay(T);
digitalWrite(led4,LOW);
delay(T2);
delay(T);
//...3...
digitalWrite(led3,HIGH);
delay(T);
digitalWrite(led3,LOW);
delay(T2);
delay(T);
//...2...
digitalWrite(led2,HIGH);
delay(T);
digitalWrite(led2,LOW);
delay(T2);
delay(T);
}
