/*
  sketch 01
  This example code turns ON the built-in LED on pin 13 (marked "L")
  
  Created on: 29/11/2014
  Author: Valentina Urbinati
  
  This example code is in the public domain.
  Made for educational purpose.
  --------------------------------------
  "Arduino+Tinkerkit", Absolute Beginner
  Starter 3D - Pescara 2014,
  Workshop a cura di Officine Arduino
  This example is in the public domain.  
*/

// Pin 13 has an LED connected on most Arduino boards.
// this constant won't change:
const int ledPin = 13;    // the pin that the LED is attached to

// the setup routine runs once when when the sketch starts:
void setup(){  
  pinMode(ledPin, OUTPUT);      // initialize the digital pin as an output.  
}

// the loop routine runs over and over again forever:
void loop(){
  digitalWrite(ledPin, HIGH);     // turn the LED on by making the voltage HIGH.
}

