#include <iostream> 
#include <string>
#include <cctype>
using namespace std;

int main (){
    string str1, str2;
    cin >> str1 >> str2;
    for(int i = 0, i < str1.length(); ++i){
        str1[i] = toupper(str1[i]);
    }
    for(int i = 0, i < str2.length(); ++i){
        str2[i] = toupper(str2[i]);
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
