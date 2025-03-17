#include <iostream> 
using namespace std;
int main () {
    int w1,w2,count=0;
    cin >> w1 >> w2;
    if (w1 > w2){
        count = 0;
    }
    else {
        while(w1<= w2){
        w1 = w1 *3;
        w2 = w2 *2;
        count += 1;
        }
    }cout << count;
    return 0;
}