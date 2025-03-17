#include <iostream>
using namespace std; 

int main () {
    int n;
    string  sen;
    cin >> n;
    if (n == 1){
        sen = "I hate it ";
    }
    else if ( n > 1){
        for(int i = 1; i<n; ++i){
            if(i % 2 == 0){
                sen += "I love that ";
            }
            else {
                sen += "I hate that ";
            }
        }
        if(n % 2 == 0){
            sen += "I love it";
        }
        else {
            sen += "I hate it";
        }
    } 
    cout << sen;
    return 0;
}   