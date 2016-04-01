/***********************************************
            
         Calculo hipotenusa 
             
***********************************************/

//******  Includes  *****************************

//******  Variables  ****************************

int a = 3;
int b = 4;
int h;

//***************  SETUP   ****************************************
void setup() {
    Serial.begin(9600);     // abre el Puerto serie, configurando la velocidad en 9600 bps
    
    Serial.print("a = ");
    Serial.println(a);
    Serial.print("b = ");
    Serial.println(b);
    Serial.println();
    Serial.println("La hipotenusa del triangulo es: ");
    h = sqrt (pow (a,2)+pow (b,2));
    Serial.println(h);
 
}

//*************    LOOP   ******************************************
void loop()  // LOOP vacio para que el programa no entre en bucle.
{
}
