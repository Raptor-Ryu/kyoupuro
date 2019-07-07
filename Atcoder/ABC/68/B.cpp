#include <bits/stdc++.h>
using namespace std;

int main(){
  int a,answer=1;
  cin >> a;
  
  while(1){
    if(answer*2 <= a){
      answer *= 2;
    }else{
      break;
    }
  }
  
  cout << answer <<endl;
}
