#include <iostream>
#include <string>
#include <set>
using namespace std;

int main () {
    string s;
    cin >> s;
    set<char> unique;
    for (char c:s){
        unique.insert(c);
    }
    if(unique.size() % 2 == 0){
        cout << "CHAT WITH HER!";
    }else {
        cout << "IGNORE HIM!";
    }
    return 0;
}
