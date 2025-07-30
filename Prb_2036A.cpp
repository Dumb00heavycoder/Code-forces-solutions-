/* This is a wrong solution
i will return to it after learning stl*/

#include <iostream>
#include <cmath>
using namespace std;
int main () {
    int t,n; 
    cin >> t;
    for (int i = 0; i < t; ++i){
        cin >> n;
        int diff = 0;
        for (int j = 0; j < n; ++j){
            int x;
            cin >> x;
            if (j == 0){
                diff = x;
            }else{
                diff = abs(diff-x);
            }
        }
        if (diff == 5 || diff == 7){
            cout << "Yes" << endl;
        }
        else {
           cout << "NO"<< endl;
        }
    }
    return 0;
}