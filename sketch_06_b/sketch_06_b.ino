/*
  Sketch 06_b : 
  traffic Lights - step 2
  millis() VS delay()
  
  Created on: 29/11/2014
  Author: Valentina Urbinati
  --------------------------------------
  "Arduino+Tinkerkit", Absolute Beginner
  Starter 3D - Pescara 2014,
  Workshop a cura di Officine Arduino
    
  Made for educational purpose.
  This example is in the public domain.  
*/


// include the TinkerKit library 
#include <TinkerKit.h> 

int time;
// the setup routine runs once when when the sketch starts:
void setup(){  
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop(){
  time = millis();
  Serial.println(time);
  delay(2000);
}

