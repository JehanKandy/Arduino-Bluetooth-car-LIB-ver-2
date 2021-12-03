/* 
 *  this is basic of Arduino RC Robot
 *  (Assigment of my university)
 *  
 *  names :- Jehan Weerasuriya
 *        :- Lithira Seneth
 *        :- Chamodya Janith
 *        :- R.G.S.Jayasooriaya
 *      
 *    
 */


#include <Bluetooth_car.h> // call library that we create before
int val;

//pin in L2985 Motor Contral
int in1 = 5; //in1
int in2 = 6; //in2
int in3 = 7; //in3
int in4 = 8; //in4

//difine pins

Bluetooth_car RC_car(in1,in2,in3,in4);

void setup() {
  RC_car.PinSetup();
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
}
