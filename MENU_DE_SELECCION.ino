/*
Fundacion Kinal
Centro educativo tecnico laboral Kinal
Perito en electronica
Quinto perito
Seccion: A
Curso: Taller de electronica digital y reparacion de computadoras I
Alumno: Carlos Argueta Serech
Carne: 2022335
Proyecto: Menu de Productos 
*/

#define adelante 2 // definir que pines se van a utilizar
#define atras 3 

int valor1 = 0;
int valor2 = 1;
int operacion = 1; // 1: suma, 2: resta

struct dato{ //datos del producto
  //estructurar los tipos de variantes que voy a usar
  char nombre[50];
  float precio;
  int stock;
  char reserva[50];
};

dato p1 = {"bolsa dulces de fresa",15.50,20,"50 en bodega local"};
dato p2 = {"bolsa dulces de chocolate",14.90,11,"70 unidades en bodega"};
dato p3 = {"bolsa dulces de limon",11.00,30,"17 unidades en almacen"};  
dato p4 = {"bolsa dulces de uva",12.60,33,"No hay en bodega"};

void setup() {
  Serial.begin(9600);
  //defino los pines como entradas :D
  pinMode(adelante, INPUT);
  pinMode(atras, INPUT);
  Serial.println("Menu");
}

void loop() {
  int lee1 = digitalRead(adelante); //Leo si tengo señal de parte de cada entrada
  int lee2 = digitalRead(atras);
  //sumo y resto
  if (lee1 == 1) {
    if (valor1 == 4) {
      valor1 = 0;
    }
    valor1++;
  }

  if (lee2 == 1) {
    if (valor1 == 1) {
      valor1 = 5;
    }
    valor1--;
  }

  if (valor1 != valor2) { // comparo las dos variables de los resultados para que se puedan ver en el monitor serial
    switch (valor1) {
      case 1:
        Serial.println(p1.nombre);
        Serial.print("El precio unitario es Q"); Serial.println(p1.precio);
        Serial.print("Hay "); Serial.print(p1.stock); Serial.println(" unidades en stock");
        Serial.println(p1.reserva);
        Serial.print("El precio de la caja Q"); Serial.println(p1.precio * 20); 
        Serial.println("_________________________________________________________");
        break;
      case 2:
        Serial.println(p2.nombre);
        Serial.print("El precio unitario es Q"); Serial.println(p2.precio);
        Serial.print("Hay "); Serial.print(p2.stock); Serial.println(" unidades en stock");
        Serial.println(p2.reserva);
        Serial.print("El precio de la caja Q"); Serial.println(p2.precio * 20);
        Serial.println("_________________________________________________________");
        break;
      case 3:
        Serial.println(p3.nombre);
        Serial.print("El precio unitario es Q"); Serial.println(p3.precio);
        Serial.print("Hay "); Serial.print(p3.stock); Serial.println(" unidades en stock");
        Serial.println(p3.reserva);
        Serial.print("El precio de la caja Q"); Serial.println(p3.precio * 20);
        Serial.println("_________________________________________________________");
        break;
      case 4:
        Serial.println(p4.nombre);
        Serial.print("El precio unitario es Q"); Serial.println(p4.precio);
        Serial.print("Hay "); Serial.print(p4.stock); Serial.println(" unidades en stock");
        Serial.println(p4.reserva);
        Serial.print("El precio de la caja Q"); Serial.println(p4.precio * 20);
        Serial.println("_________________________________________________________");
        break;
    }
    valor2 = valor1;
  }
  
  if (Serial.available() > 0) {
    operacion = Serial.parseInt(); // leer la operación 
  }}

    
  
