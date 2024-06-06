#include <iostream>
#include "Log.h"

void Log(std::string message){
    std::cout<< message << std::endl;
}

void InitLog(std::string message){
    std::cout<< "initializing log" << std::endl;
    Log(message);
}