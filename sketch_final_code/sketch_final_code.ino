
/*
  Sketch 09: 
  traffic Lights with pedestrian button- THE FINAL CODE!
  
  Hardware: 
  Board: Arduino Leonardo
  Shield: Tinkerkit- sensor Shield
  Components: 2 Red led, 1 Yellow led, 2 Green Led, 1 Button
  
  Description:
  This example code use 3 LED(10mm) to replicate a traffic light
  for normal traffic, and 2LED(5mm) to replicate a pedestrian crossing walk.
  When button is pressed, the traffic lights for cars have 
  to switch from green to yellow and to red.Afterwards, 
  the traffic lights for pedestrians change from red to green.
   
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

// creating the object that belongs to the 'TKLed' class
// and giving the value to the desired OUTPUT pin for each colour
TKLed yellow(O0); 	
TKLed red(O1);
TKLed green(O2);
TKLed pRed(O3); 
TKLed pGreen(O4);

// creating the object 'button' that belongs to the 'TKButton' class
// and giving the value to the desired INPUT pin.
TKButton button(I0);

int time;
int resetTime; 

// the setup routine runs once when when the sketch starts:
void setup(){  
Serial.begin(9600); //initialize serial communication at 9600 bits per second
}

// the loop routine runs over and over again forever:
void loop(){
  time = millis() -  resetTime; 
  Serial.println(time);  //prints time

  //turn on yellow (car) & red (pedestrian)
  if ((time > 0) && (time < 2000)){ 
    yellow.on();
    pRed.on(); 
  } 
  //turn off yellow(car),red(pedestrian) and turn on red(car) 
  if ((time > 2000) && (time < 10000)){ 
    yellow.off();	
    red.on();
    pRed.off();
  }
   //control green light(pedestrian)
  if ((time > 2000) && (time < 8000)){
    pGreen.on();
  }      
  if ((time > 8000) && (time < 10000)){     
    pGreen.off();
    delay(250);
    pGreen.on();
    delay(250);
  }    

  //turn off red(car),green(pedestrian) and turn on green(car),red(pedestrian)
  if ((time > 10000)&&(time < 20000)){ 
    red.off();  
    green.on();
    pRed.on();
    pGreen.off();	
  }  
  //turn off green(car)   
  if (time > 20000){ 
    green.off();	
    resetTime=millis();         
  }
  
// The lights change when the button is pressed for give priority to pedestrians.
if (button.pressed() && time > 10000){
    green.off();
    resetTime=millis();     
  }  
  
}

