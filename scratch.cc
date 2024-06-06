#include <iostream> 

using namespace std; 
int main(){

    string s = "testz";
    const string lower = "abcdefghijklmnopqrstuvwyz";
    
    
    int a = lower.find("x");
    cout<< a; 

    return 0;
}