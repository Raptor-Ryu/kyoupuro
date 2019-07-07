#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int p,price,N;
  string text;
  
  cin >> p;
 
  // パターン1
  if (p == 1) {
    cin >> price >> N;
  }else{
    cin >> text >> price >> N;
  }
  
  if(p == 2){
    cout << text << "!" << endl;
	cout << price * N << endl;
  }else{
    cout << price * N << endl;
  }
}
