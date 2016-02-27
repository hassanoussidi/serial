

/***********************************************
**               escribir                     **
**            "Hello world"                   **
**            en la pantalla                  **
***********************************************/

//******  Includes  *****************************



void setup() // 
{
  Serial.begin(9600); // la velocidad de comunicacion entre el arduino y el ordenador
  Serial.println("hello world!"); // muestra "hello world" en la pantalla con un salto de linea.
}



void loop()
{

}

