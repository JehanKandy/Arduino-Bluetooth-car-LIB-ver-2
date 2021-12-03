//Please do not build and run this files
//.....Bluetooth car lebrary header file.....
//..By JehanKandy


//define header files
#include <Bluetooth_car.h>
#include "Arduino.h"


//create functions

Bluetooth_car::Bluetooth_car(int in1, int in2, int in3, int in4)
{
        diode1 = in1
        diode2 = in2
        diode3 = in3
        diode4 = in4
}

// function for identify pins
void Bluetooth_car::Pinofrc() {
  pinMode(diode1,OUTPUT);
  pinMode(diode2,OUTPUT);
  pinMode(diode3,OUTPUT);
  pinMode(diode4,OUTPUT);

}

// function for stop car
void Bluetooth_car::stop_rc()
{
    digitalWrite(diode1,LOW);
    digitalWrite(diode2,LOW);
    digitalWrite(diode3,LOW);
    digitalWrite(diode4,LOW);
}

// function for go forward car
void Bluetooth_car:: forward_rc(){
    digitalWrite(diode1,HIGH);
    digitalWrite(diode2,LOW);
    digitalWrite(diode3,HIGH);
    digitalWrite(diode4,LOW);
}

// function for go backword car
void Bluetooth_car::backward_rc() {
    digitalWrite(diode1,LOW);
    digitalWrite(diode2,HIGH);
    digitalWrite(diode3,LOW);
    digitalWrite(diode4,HIGH);
}

// function for go left car
void Bluetooth_car::left_rc(){
    digitalWrite(diode1,HIGH);
    digitalWrite(diode2,LOW);
    digitalWrite(diode3,LOW);
    digitalWrite(diode4,HIGH);
}
// function for go right car
void Bluetooth_car::right_rc() {

    digitalWrite(diode1,LOW);
    digitalWrite(diode2,HIGH);
    digitalWrite(diode3,HIGH);
    digitalWrite(diode4,LOW);
}



