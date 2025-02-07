/**********************************************************************
* Filename    : Hello World
* Description : Prints HELLO WORLD on the SERIAL MONITOR SCREEN 
* Author      : David Elmo Ross
* Modification: 2025/01/11
**********************************************************************/
#include <Arduino.h>             // include Arduino.h

void setup() 
{
  Serial.begin(115200);          // set serial rate to 115200
}                                // make sure that platformio.ini uses the same value

void loop() 
{
  printf("Hello World");         // send Hello World to the stdout buffer
  fflush(stdout);                // flush stdout buffer to screen
   for(;;);                      // stay in endless loop
}

