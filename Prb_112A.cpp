#include <iostream> 
#include <string>
#include <cctype>
using namespace std;

int main (){
    int str1, str2;
    cin >> str1 >> str2;
    if (toupper(str1) < toupper(str2) ){
        cout << -1;
    }
    else if (str2 < str1){
        cout << 1;
    }
    else{
        cout << 0;
    }
    return 0;
}
