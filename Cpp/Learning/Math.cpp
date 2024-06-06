#include <iostream> 
#include "Log.h"
#include "Log.h"

void Multiply(int a, int b){
    int result = a*b;
    std::string msg = "The result is : ";
    msg += std::to_string(result);
    InitLog(msg);
}

int main(int argc, char** argv){
    std::cout<< argc << std::endl;

    // no negative values, max val is now ~4 billion. 
    //float variable_float = 8.5f;
    //double var = 5.2;

    //bool variable = false;
    //size of returns size in bytes
    Multiply(5,8);
    Multiply(5,6);
   // std::cout<< sizeof(bool) << std::endl;

    return 0;
}