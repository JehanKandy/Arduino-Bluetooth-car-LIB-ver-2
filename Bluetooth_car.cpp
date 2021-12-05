//************ Please Do not Build and Run this file*********************
//***********************************************************************


// arduino car bluetooth library
//Jehan Kandy
// for L298N motor control

#include "Bluetooth_car.h"
#include "Arduino.h"

 Bluetooth_car::Bluetooth_car (int in1,int in2, int in3,int in4, int led1, int led2, int led3, int led4, int led5, int led6){

// for motor control
  diode1=in1;
  diode2=in2;
  diode3=in3;
  diode4=in4;

// for LEDs
  diode5=led1;
  diode6=led2;
  diode7=led3;
  diode8=led4;
  diode9=led5;
  diode10=led6;



}

void Bluetooth_car::Pinofrc() {
  pinMode(diode1,OUTPUT);
  pinMode(diode2,OUTPUT);
  pinMode(diode3,OUTPUT);
  pinMode(diode4,OUTPUT);
  pinMode(diode5,OUTPUT);
  pinMode(diode6,OUTPUT);
  pinMode(diode7,OUTPUT);
  pinMode(diode8,OUTPUT);
  pinMode(diode9,OUTPUT);
  pinMode(diode10,OUTPUT);

}

void Bluetooth_car::stop_rc()
{
    digitalWrite(diode1,LOW);
    digitalWrite(diode2,LOW);
    digitalWrite(diode3,LOW);
    digitalWrite(diode4,LOW);
}

void Bluetooth_car::forward_rc(){
    digitalWrite(diode1,HIGH);
    digitalWrite(diode2,LOW);
    digitalWrite(diode3,LOW);
    digitalWrite(diode4,HIGH);
}

void Bluetooth_car::backward_rc() {
    digitalWrite(diode1,LOW);
    digitalWrite(diode2,HIGH);
    digitalWrite(diode3,HIGH);
    digitalWrite(diode4,LOW);
}

void Bluetooth_car::left_rc(){
    digitalWrite(diode1,HIGH);
    digitalWrite(diode2,LOW);
    digitalWrite(diode3,LOW);
    digitalWrite(diode4,LOW);
}
void Bluetooth_car::right_rc() {

    digitalWrite(diode1,LOW);
    digitalWrite(diode2,LOW);
    digitalWrite(diode3,LOW);
    digitalWrite(diode4,HIGH);

}

void Bluetooth_car::leds(){
    digitalWrite(diode5,HIGH);
    delay(250);
    digitalWrite(diode6,HIGH);
    delay(250);
    digitalWrite(diode7,HIGH);
    delay(250);
    digitalWrite(diode8,HIGH);
    delay(250);
    digitalWrite(diode9,HIGH);
    delay(250);
    digitalWrite(diode10,HIGH);

    delay(250);

    digitalWrite(diode9,LOW);
    delay(250);
    digitalWrite(diode8,LOW);
    delay(250);
    digitalWrite(diode7,LOW);
    delay(250);
    digitalWrite(diode6,LOW);
    delay(250);
    digitalWrite(diode5,LOW);

    delay(500);

    digitalWrite(diode5,HIGH);
    digitalWrite(diode6,HIGH);
    digitalWrite(diode7,HIGH);
    digitalWrite(diode8,HIGH);
    digitalWrite(diode9,HIGH);
    digitalWrite(diode10,HIGH);

    delay(500);

    digitalWrite(diode5,LOW);
    digitalWrite(diode6,LOW);
    digitalWrite(diode7,LOW);
    digitalWrite(diode8,LOW);
    digitalWrite(diode9,LOW);
    digitalWrite(diode10,LOW);

    delay(500);
}
