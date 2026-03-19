#include <iostream>
#include <string>
using namespace std;

int main () {
  int n, k;
  cin >> n;
  cin >> k;
  if (k >= 1 && k<= 50 ) {
    while (k != 0){
      if(n % 10 != 0){
        n = n - 1;
      }
      else {
        n = n /10;
      }
      k = k -1;
    }}
  else {
    break;
  }
  cout << n << endl;
  return 0;
}
