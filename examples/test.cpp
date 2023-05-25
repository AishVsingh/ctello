#include "ctello.h"
#include <iostream>

using namespace std;

int main()
{
    ctello::Tello tello;
    if(!tello.Bind()){
        return 0;
    }
    string cmd;
    while(true){
        cout << "Enter Command: ";
        getline(cin,cout);
        cout << "Sending command: " << cmd.c_str() << endl;
        tello.SendCommand(cmd);
        cout << "Response: "<< tello.ReceiveResponse().value_or("None")<< endl;
    }
    return 0;
}
