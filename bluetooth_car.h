//Please do not build and run this files
//.....Bluetooth car lebrary header file.....
//..By JehanKandy


#ifndef Bluetooth_car
#define Bluetooth_car


//class for run fuction
class Bluetooth_car{
private:
    int diode1;
    int diode2;
    int diode3;
    int diode4;

public:
    Bluetooth_car(int in1, int in2, int in3, int in4)

    void Pinofrc();
    void stop_rc();
    void forward_rc();
    void backward_rc();
    void left_rc();
    void right_rc();
};



#endif // Bluethooth_car
