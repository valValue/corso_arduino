/*
  Sketch 05 : 
  traffic Lights - step 1
  This example code use 3 LEDS to replicate a traffic light.
  The traffic lights should obey the following rules:
  When  RED is ON, GREEN and YELLOW is OFF.
  When  YELLOW is ON, RED and GREEN is OFF.
  When  GREEN is ON, RED and YELLOW is OFF.
  
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

TKLed yellow(O0);	
TKLed red(O1);
TKLed green(O2);

int time;

// the setup routine runs once when when the sketch starts:
void setup(){  
  // initialize serial communications at 9600 bps
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop(){
  Serial.print("time passed = " );                      
  Serial.println(time);    
  
}

