#include<bits/stdc++.h>
using namespace std;
 
int main(){
  int a,b,c;
  cin >> a >> b >> c;
  int answer = c - a + b;
  
  if(answer < 0) answer = 0;
  
  cout << answer << endl;
}
