#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <list>


using namespace std;

int main(){
    vector <short> pi = {3,1,4,1,5,9,2,6,5,3,5,8,9,7,9,3,2,3,8,4,6,2,6,4};
    string alpha = "abcdefghijklmnopqrstuvwxyz";
    char cbuf[100] = {};
    list<int> primes = {2,3,5,6,11,13,17,19,23,29};
    short powers[] = {1,2,4,8,16,32,64};
    int ibuf[100];

    cout<< "Exercise 1: \n";
        copy(alpha.begin(), alpha.end(), cbuf);
        cout<< cbuf << '\n';

    cout << "Exercise 2: \n";
        reverse(alpha.begin(), alpha.end());
        copy(alpha.begin(), alpha.end(), cbuf);
        cout<<cbuf << '\n';

    cout<< "Exercise 3: \n";
        cout<< "primes pre-transform: \n";
        for(auto v: primes){
            cout<< v << ' ';
        }
        cout<< '\n';
        transform(primes.begin(), primes.end(), ibuf, [](int n) {return n+1;});
        cout<< "primes post-transform: \n";
        for(int i = 0; i<10; i++){
            cout<< ibuf[i] << ' ';
        }
    cout<< "\nExercise 4: ";
        any_of(primes.begin(), primes.end(), [](int k) {return k%2 == 0;})?
            cout<< "A value is divisible by 2\n" : cout<< "a value is not not divisible by 2\n";
    
    cout<< "Exercise 5: \n";
        auto result = find(primes.begin(), primes.end(), 13);
        result++;
        cout<< *result<< '\n';
    
    cout<< "Exercise 6: \n";
        auto result2 = count(pi.begin(), pi.end(), 3);
        cout<< result2 << '\n';

    cout<< "Exercise 7: \n";
        auto result3 = count_if(pi.begin(), pi.end(), [](int k){return k<5; });
        cout<< result3 << '\n';
    cout<< "Exercise 8: \n";
        auto result4 = max_element(pi.begin(), pi.end(), [](int a, int b){return a<b; });
        cout<< *result4<< '\n';
    cout<< "Exercise 9: \n";
        sort(pi.begin(), pi.end());
        for(auto &val: pi){
            cout<< val << ' ';
        }
        cout<< '\n';
    cout<< "Exercise 10: print the distance between the start of pi and first index with a value greater than 7\n"; 
        auto result5 = lower_bound(pi.begin(), pi.end(), 7);
        auto val = result5 - pi.begin();
        cout<< val << '\n';
    cout << "Exercise 11 \n";
        auto it = set_intersection(pi.begin(), pi.end(), &powers[0], &powers[7], ibuf);
        for(auto i = 0; i<it-&ibuf[0]; i++){
            cout<< ibuf[i] << ' ';
        }



    return 0;
}