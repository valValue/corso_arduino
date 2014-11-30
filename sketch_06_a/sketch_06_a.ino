/*
  Sketch 06_a : 
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

TKLed yellow(O0);	
TKLed red(O1);
TKLed green(O2);

int time;

// the setup routine runs once when when the sketch starts:
void setup(){  
Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop(){
  time = millis();
  Serial.println(time);
  
/*  yellow.on();  // set the led YELLOW ON 
  delay(2000);	// wait for 4 sec.
  yellow.off();	// set the led YELLOW OFF 
  red.on();	// set the led RED ON
  delay(4000);	// wait for 4 sec.
  red.off();	// set the led RED OFF
  green.on();	/// set the led GREEN ON
  delay(4000);	// wait for 4 sec.
  green.off();	// set the led GREEN OFF
  */
}

