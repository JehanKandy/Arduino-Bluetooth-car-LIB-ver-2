/*
 * For L298N Motor Controller
 * 
 * |  IN1 | IN2 | IN3 | IN4 | Function |
 * |______|_____|_____|_____|__________|
 * |   0  |  0  |  0  |  0  |   Stop   |
 * |   1  |  0  |  1  |  0  |  Forward |
 * |   0  |  1  |  0  |  1  |  Reverse |
 * |   1  |  0  |  0  |  1  |   Left   |
 * |___0__|__1__|__1__|__0__|___Right__|
 * 
 * 
 */





#include <Bluetooth_car.h>
int val;

//pin in L2985 Motor Contral
int in1 = 2; //in1
int in2 = 3; //in2
int in3 = 4; //in3
int in4 = 5; //in4

//pin for leds
int led1 = 6; // LED 1
int led2 = 7; // LED 2
int led3 = 8; // LED 3
int led4 = 9; // LED 4
int led5 = 10; // LED 5 
int led6 = 11; // LED 6


//difine pins

Bluetooth_car RC_car(in1,in2,in3,in4,led1,led2,led3,led4,led5,led6);


void setup() {
  RC_car.Pinofrc();
  Serial.begin(9600);
}

void loop() {
  if(Serial.available()){
    val = Serial.read();
  }

  if(val == '1'){
    RC_car.forward_rc(); // forward
  }
  else if(val == '2'){
    RC_car.backward_rc();// backward
  }
  else if(val == '3'){
    RC_car.left_rc();// left
  }
  else if(val == '4'){
    RC_car.right_rc();// right
  }
  else if(val == '5'){
    RC_car.stop_rc();// stop
  }
  else if(val == '6'){
    RC_car.leds(); // for LED pattern
  }
}
