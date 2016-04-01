/***********************************************
               mosrar "Hello world"                      
             cada 1s verticalmente            
                en la pantalla                 
***********************************************/

//******  Includes  *****************************

//******  Variables  ****************************



//******  Setup  ********************************
void setup()
{
  Serial.begin(9600); // // abre el Puerto serie, configurando la velocidad en 9600 bps
  Serial.println("Escull el numero de l'operacio que vols realitzar?");  // visualiza "Hello world" en la pantalla con un salto de linea
  Serial.println(" 1. Comprovar numero de compte credit");
  Serial.println(" 2. Comprovar numero de compte bancari");
  Serial.println(" 3. Buscar un digit de targeta de credit");
}  

//******  Loop  *********************************
void loop()
{

  
}

