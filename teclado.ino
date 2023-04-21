/*
Fundacion Kinal
Centro educativo tecnico laboral Kinal
Perito en electronica
Quinto perito
Seccion: A
Curso: Taller de electronica digital y reparacion de computadoras I
Alumno: Carlos Argueta Serech
Carne: 2022335
Proyecto: Teclado matricial
*/


//Librerias
#include <Keypad.h>    //Libreria que me permite usar el teclado matricial.

//Macros o directivas de preprocesador
#define filas_teclado 4   //cantidad de filas que posee el teclado matricial.
#define columnas_teclado 4 //cantidad de columnas que posee el teclado matricial.
#define f1_teclado 9  //pin2 conectado a la fila 1
#define f2_teclado 8  //pin3 conectado a la fila 2
#define f3_teclado 7  //pin4 conectado a la fila 3
#define f4_teclado 6  //pin5 conectado a la fila 4
#define c1_teclado 5  //pin6 conectado a la columna 1
#define c2_teclado 4  //pin7 conectado a la columna 2
#define c3_teclado 3  //pin8 conectado a la columna 3
#define c4_teclado 2  //pin9 conectado a la columna 4
#define c A5
#define d A4
#define e A3 
#define b A2
#define a A1
#define f 10
#define g 11
int l;


//Creo una matriz led con la disposicion fisica de las teclas
char keys[filas_teclado][columnas_teclado] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

//Arreglos en los que defino los pines a utilizar, tanto para las columnas como para las filas
byte pines_filas[filas_teclado] = {f1_teclado,f2_teclado,f3_teclado,f4_teclado};
byte pines_columnas[columnas_teclado] = {c1_teclado,c2_teclado,c3_teclado,c4_teclado};


//Creo el constructor para poder usar el teclado matricial.
Keypad teclado_profe = Keypad( makeKeymap(keys), pines_filas, pines_columnas, filas_teclado,columnas_teclado);

void setup() 
{
  Serial.begin(9600);    
  Serial.println("Prueba Del teclado Matricial god");   //Envio de mensaje
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  
  if(l==0);
  {
digitalWrite(a, HIGH);
digitalWrite(b, HIGH);
digitalWrite(c, HIGH);
digitalWrite(d, HIGH);
digitalWrite(e, HIGH);
digitalWrite(f, HIGH);
digitalWrite(g, LOW); 

 

  }
  



}

void loop() 
{
 
  
 int l;

  
    
  
  
  char tecla = teclado_profe.getKey();  //Obtengo la tecla seleccionada

  
  //Si alguna tecla fue presionada
  if(tecla)
  {
    Serial.print("La tecla presionada es: ");   //Envio el mensaje
    Serial.println(tecla);    //Muestro por la terminal la tecla presionada
l=tecla;
  Serial.println(l);
  }
    
 

  
  
  if(tecla){
  if(l==49)
  // 1
    {
    digitalWrite(a, LOW);     
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
    delay(500);
    digitalWrite(a, HIGH);    
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, LOW);
    
  }
     if(l==50)
     // 2
  {
    digitalWrite(a, HIGH);  
    digitalWrite(b, HIGH);
    digitalWrite(c, LOW);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, LOW);
    digitalWrite(g, HIGH);
    delay(500);
    digitalWrite(a, HIGH);     
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, LOW);
    
}
       if(l==51)
       // 3
  {
    digitalWrite(a, HIGH); 
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, HIGH);
    delay(500);
    digitalWrite(a, HIGH);     
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, LOW);
    
}

    
    if(l==52)
    // 4
  {
    digitalWrite(a, LOW); 
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
    delay(500);
    digitalWrite(a, HIGH);     
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, LOW);
    
}
           if(l==53)
           //  5
  {
    digitalWrite(a, HIGH); 
    digitalWrite(b, LOW);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, LOW);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
    delay(500);
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, LOW);
    
}
           if(l==54)
           // 6
  {
    digitalWrite(a, HIGH); 
    digitalWrite(b, LOW);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
    delay(500);
    digitalWrite(a, HIGH);    
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, LOW);
    
}
           if(l==55)
           //7
  {
    digitalWrite(a, HIGH); 
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
    delay(500);
    digitalWrite(a, HIGH);     
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, LOW);
    
}
           if(l==56)
           //  8
  {
    digitalWrite(a, HIGH); 
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
    delay(500);
    digitalWrite(a, HIGH);     
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, LOW);
    
}
  
           if(l==57)
           // 9
  {
    digitalWrite(a, HIGH); 
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
    delay(500);
    digitalWrite(a, HIGH);    
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, LOW);
    
}
             if(l==65)
             // A
  {
    digitalWrite(a, HIGH);  
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, LOW);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
    delay(500);
    digitalWrite(a, HIGH);   
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, LOW);
    
}
               if(l==66)
               // b
  {
    digitalWrite(a, LOW); 
    digitalWrite(b, LOW);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
    delay(500);
    digitalWrite(a, HIGH);    
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, LOW);
    
}
 
  if(l==67)
  // c
  {
    digitalWrite(a, LOW); 
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, LOW);
    digitalWrite(g, HIGH);
    delay(500);
    digitalWrite(a, HIGH);    
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, LOW);
    
}
                if(l==68) 
         //d
  {
    digitalWrite(a, LOW); 
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, LOW);
    digitalWrite(g, HIGH);
    delay(500);
    digitalWrite(a, HIGH);     
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, LOW);
    
}
                  if(l==42) 
      // e            
  {
    digitalWrite(a, HIGH); 
    digitalWrite(b, HIGH);
    digitalWrite(c, LOW);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
    delay(500);
    digitalWrite(a, HIGH);     
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, LOW);
    
}
                    if(l==35)
   // f                  
  {
    digitalWrite(a, HIGH); 
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
    delay(500);
    digitalWrite(a, HIGH);   
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, LOW);
    

                    }                 
  
                    } 

}
 
