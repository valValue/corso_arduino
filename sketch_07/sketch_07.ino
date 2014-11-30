/*
  Sketch 07 : 
  traffic Lights - step 3
  
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
  Serial.println(time);  //prints time since program started
  
  //turn on yellow 
  if ((time > 0) && (time < 2000)){ 
    yellow.on();  
  } 
  //turn off yellow and turn on red 
  if ((time > 2000) && (time < 6000)){ 
    yellow.off();	
    red.on();	
  }
  //turn off red and turn on green 
  if ((time > 6000)&&(time < 10000)){ 
    red.off();  
    green.on();	
  }  
  //turn off green and turn on yellow.   
  if (time > 10000){ 
    green.off();	
    yellow.on();
  }
}

