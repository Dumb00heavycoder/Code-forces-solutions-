#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    if (cin >> s) {
        int up = 0, low = 0;
        for (char c : s) {
            if (isupper(static_cast<unsigned char>(c))) up++;
            else if (islower(static_cast<unsigned char>(c))) low++;
        }
        if (up > low) {
            for (char &c : s) c = toupper(static_cast<unsigned char>(c));
        } else {
            for (char &c : s) c = tolower(static_cast<unsigned char>(c));
        }
        cout << s;
    }
    return 0;
}
