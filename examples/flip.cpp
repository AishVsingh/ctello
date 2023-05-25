#include "ctello.h"
#include <iostream>


int main()
{
    ctello::Tello tello;
    if(!tello.Bind()){
        return 0;
    }
    std::string cmd;
    while(true){
        std::cout << "Enter Command: ";
        std::getline(std::cin,cmd);
        std::cout << "Sending command: " << cmd.c_str() << std::endl;
        tello.SendCommand(cmd);
        std::cout << "Response: "<< tello.ReceiveResponse().value_or("None")<< std::endl;
    }
    return 0;
}
