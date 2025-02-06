/**********************************************************************
* Filename    : Hello World
* Description : Prints HELLO WORLD on the SERIAL MONITOR SCREEN 
* Author      : David Elmo Ross
* Modification: 2025/01/11
**********************************************************************/
#include <Arduino.h>


void setup() 
{


  Serial.begin(115200);
 
}

void loop() 
{
  printf("Hello World");
  fflush(stdout);
   for(;;); 
   
}

