#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int x;
    int row, column;
    for (int i = 0; i<5; ++i){
        for(int j=0; i<5; ++j){
            int x;
            if(x=0){
                row = i;
                column = j;
            }
        }
    }
    int moves= abs(row-2) + abs(column-2);
    cout << moves << endl;
    return 0;
}