//*******************Please Do not Build and Run This file******************************
//**************************************************************************************

//***********Arduino BT car header file**********
//**************By JehanKandy********************



#ifndef Bluetooth_car_h
#define Bluetooth_car_h
#include "Arduino.h"

class Bluetooth_car {

private:
    // for motor control
    int diode1;
    int diode2;
    int diode3;
    int diode4;

    //for LEDs
    int diode5;
    int diode6;
    int diode7;
    int diode8;
    int diode9;
    int diode10;


public:

    Bluetooth_car(int in1, int in2, int in3, int in4, int led1, int led2, int led3, int led4, int led5, int led6);
    void Pinofrc();
    void stop_rc();
    void forward_rc();
    void backward_rc();
    void left_rc();
    void right_rc();
    void leds();



};




#endif
