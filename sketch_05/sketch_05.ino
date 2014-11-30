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

// the setup routine runs once when when the sketch starts:
void setup(){  
// nothing here: this section of code only runs once
// TinkerKit 'object' eliminate the need for pin declaration with pinMode()
}

// the loop routine runs over and over again forever:
void loop(){
  yellow.on();  // set the led YELLOW ON 
  delay(2000);	// wait for 4 sec.
  yellow.off();	// set the led YELLOW OFF 
  red.on();	// set the led RED ON
  delay(4000);	// wait for 4 sec.
  red.off();	// set the led RED OFF
  green.on();	/// set the led GREEN ON
  delay(4000);	// wait for 4 sec.
  green.off();	// set the led GREEN OFF
}

