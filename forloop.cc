
#include <iostream>


using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    
    int a,b;
    cin >> a >> b;
    
    string nums[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    for(int i = a; i<b+1; i++){
        if(i <= 9){
            cout<<nums[i] << '\n';
        }
        else if(i%2 == 0){
            cout<<"even\n";
        }
        else if (i%2 == 1){
            cout<<"odd\n";
        }
    }
    
    
    return 0;
}