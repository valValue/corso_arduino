/*
  Sketch 04 : 
  based on Blink, Arduino's "Hello World!"
  This example code turns on an LED ON for one second, 
  then off for one second, repeatedly..
  
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

TKLed led(O0);	// creating the object 'led' that belongs to the 'TKLed' class  
 		// and giving the value to the desired output pin 

// the setup routine runs once when when the sketch starts:
void setup(){  
// nothing here: this section of code only runs once
// TinkerKit 'object' eliminate the need for pin declaration with pinMode()
}

// the loop routine runs over and over again forever:
void loop(){
  led.on();       // set the LED on 
  delay(1000);    // wait for a second 
  led.off();      // set the LED off 
  delay(1000);    // wait for a second   
}

