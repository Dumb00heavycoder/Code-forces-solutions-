#include <iostream>
#include <string>
using namespace std;

int main (){
  string ans;
  int n;
  cin >> n;
  while (n != 0){
    if (n % 10 == 4 || n % 10 == 7){
      ans = "YES";
    }
    else{
      ans = "NO";
      break;
    }
    n = int(n / 10);
  }
  cout << ans;
  return 0;
}
