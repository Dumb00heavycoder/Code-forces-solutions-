#include <iostream>
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
            diff -= x;
        }
    }
    if (abs(diff) == 5 || abs(diff) == 7){
        cout << "Yes";
    }
    else {
        cout << "NO";
    }
    return 0;
}