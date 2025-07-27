#include <iostream> 
#include <string>
using namespace std;

int main () {
    int X = 0;
    int n;
    cin >> n;
    while (n>0){
        string comm;
        cin >> comm;
        if (comm == "X++"){
            X++;
        }
        else if (comm == "++X"){
            ++X;
        }
        else if (comm == "X--"){
            X--;
        }
        else {
            --X;
        }
        n--;
    }
    cout << X << endl;
    return 0;
}