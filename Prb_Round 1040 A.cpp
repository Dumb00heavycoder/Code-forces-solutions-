#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int n;
        cin >> n;
        long long sum = 0;
        int zero_cnt = 0;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            sum += x;
            if (x == 0) zero_cnt++;
        }
        // Maximum score = sum of all elements + number of zeros
        cout << (sum + zero_cnt) << '\n';
    }
    return 0;
}
