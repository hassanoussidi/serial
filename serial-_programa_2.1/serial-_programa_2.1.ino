/***********************************************
            
        Operaciónes matemáticas basicas
             
***********************************************/

//******  Includes  *****************************

//******  Variables  ****************************

int a = 5;
int b = 10;
int c = 20;


//***************  SETUP   ****************************************
void setup()
{
  Serial.begin(9600); //abre el Puerto serie, configurando la velocidad en 9600 bps

  Serial.println("Conceptos matematicos basicos:");
  
  Serial.print("a = ");
  Serial.println(a);
  Serial.print("b = ");
  Serial.println(b);
  Serial.print("c = ");
  Serial.println(c);

  Serial.print("a + b = ");       // sumar
  Serial.println(a + b);

  Serial.print("a * c = ");       // multiplicar
  Serial.println(a * c);

  Serial.print("c / b = ");       // dividir
  Serial.println(c / b);

  Serial.print("c % b = ");       // modulo
  Serial.println(c % b);

  Serial.print("b - c = ");       // restar
  Serial.println(b - c);
}

//*************    LOOP   ******************************************
void loop()  // loop vacio para que no se repita la secuencia  
{
}


