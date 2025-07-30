#include <iostream> 
#include <string>
#include <cctype>
using namespace std;

int main (){
    string str1, str2;
    cin >> str1 >> str2;
    if (toupper(str1) < toupper(str2) ){
        cout << -1;
    }
    else if (toupper(str2) < toupper(str1)){
        cout << 1;
    }
    else{
        cout << 0;
    }
    return 0;
}
