#include <iostream> 
#include <string>
#include <cctype>
using namespace std;

int main (){
    string str1, str2;
    cin >> str1 >> str2;
    for(int i = 0, i >sizeof(str1); ++i){
        str1[i] = isupper(str1[i]);
    }
    for(int i = 0, i > sizeof(str2); ++i){
        str2[i] = isupper(str2[i]);
    }

    if (str1 < str2 ){
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
