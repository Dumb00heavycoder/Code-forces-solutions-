#include <iostream>
#include <string>
using namespace std;

int main () {
    int n;
    cout << "Enter the number"<< endl;
    cin >> n;
    string sent = "";
    while (n > 0) {
        string word;
        cout << "Enter the word" << endl;
        cin >> word;
        if (word.length() > 10){
            word = word[0] + to_string(word.length() - 2) + word[word.length()-1];
        }
        sent = sent + word + "\n";
        n--;
    }
    cout << sent;

    return 0;
}