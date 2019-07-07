#include <bits/stdc++.h>
using namespace std;
 
int main(){
 int n,a,b;
  cin >> n >> a >>b;
  int answer,p,q;
  p = n*a;
  q = b;
  
  answer= min(p,q);
  
  cout << answer << endl;
  
}