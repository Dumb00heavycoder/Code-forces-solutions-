#include <iostream>
#include <cmath>
using namespace std;
int main () {
    int t,n; 
    int diff;
    cin >> t;
    for (int i = 0; i <= t; ++i){
        cin >> n;
        for (int j = 0; j <= n; ++j){
            int x;
            cin >> x;
            diff = abs(diff-x);
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