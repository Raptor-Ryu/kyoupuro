#include <bits/stdc++.h>
using namespace std;

int main(){
  int k,x;
  cin >> k >> x;
  long long pos = x-k+1;
  if(pos < -1000000) pos = -1000000;
  
  for(int i=0; i<k*2-1; i++){
    cout << pos << ' ';
    pos++;
  }
  cout << endl;
}
