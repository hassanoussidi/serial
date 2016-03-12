/***********************************************
               mosrar "Hello world"                      
             cada 1s horizontalmente            
                 en la pantalla                 
***********************************************/

//******  Includes  *****************************

//******  Variables  ****************************




//******  Setup  ********************************
void setup()
{
  Serial.begin(9600); // // abre el Puerto serie, configurando la velocidad en 9600 bps
}  

//******  Loop  *********************************
void loop()
{
  Serial.print("Hello world!");  // visualiza "Hello world" en la pantalla 
  delay(1000);// repite "hello world" cada 1s (1000ms) 
}

