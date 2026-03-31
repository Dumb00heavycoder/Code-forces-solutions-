#include <iostream>
#include <string>
using namespace std;

int main (){
  string ans;
  int n, count;
  count = 0;
  cin >> n;
  while (n != 0){
    if (n % 10 == 4 || n % 10 == 7){
      count += 1;
    }
    else{
	count = count;
    }
    n = int(n / 10);
  }
  if (count == 4 || count == 7){
	  ans = "YES";
	}
  else{
	  ans = "NO";
  }
  cout << ans;
  return 0;
}
