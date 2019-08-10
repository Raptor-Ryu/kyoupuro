#include <bits/stdc++.h>
using namespace std;

int main(){
  int a,b;
  cin >> a >> b;
  
  int x,y,z;
  x = a+b;
  y = a-b;
  z = a*b;
  
  int answer = max(x, max(y,z));
  
  cout << answer << endl;
}
