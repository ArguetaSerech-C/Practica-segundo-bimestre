#define rele1 2 // bomba de agua del suministro de agua para llenar el tinaco
#define rele2 3 // bomba de agua de llenado de tinaco
#define sensor 4 // transistor para deteccion automatica de agua
#define push 5 // funcion de interruptor para extraccion de agua del tinaco

// entradas y salidas :D
void setup()
{
  pinMode (rele1, OUTPUT);
  pinMode(rele2, OUTPUT);
  pinMode(push, INPUT);
  pinMode(sensor, INPUT);
}


void loop() {
  //guardar el estado de la lectura _____ en variable falsa/verdadera
  bool estado = digitalRead(push);
  bool estadoled = digitalRead(sensor);

  //entro al if si el boton esta en bajo
  if (estado == LOW)
    //mantengo la accion ejecuta si se cumple la condicion o no
    //! la niego para continuar la ejecucion en sentido contrario
  {
    digitalWrite(rele2,  !digitalRead(rele2) );
    delay(300);
  }

  //leo los estados del led que reaccionara como referencia al transistor usado como sensor
  //Actuo y acciono el rele(bomba de agua) dependiendo del estado del led de referencia
  if (estadoled == LOW)
  {
    digitalWrite(rele1, HIGH);
    delay(200);
  }
  if (estadoled == HIGH)
  {
    digitalWrite(rele1, LOW);
    delay(200);
  }
}
