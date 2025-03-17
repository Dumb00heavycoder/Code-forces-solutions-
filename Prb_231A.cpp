#include <iostream>
using namespace std;
int main(){
    int a, Petya, Vasya, Tonya, number=0;
    cin >> a;
    while (a--){
        cin >> Petya >> Vasya >> Tonya;
        if (Petya + Vasya + Tonya>=2){
            number += 1;
        }
    }cout << number << endl;
    return 0;
}