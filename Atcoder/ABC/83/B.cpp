#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,a,b,loop,dig;
  int sum=0,tmp=0;
  cin >> n >> a >> b;
  
  for(int i=1; i<=n; i++){
    tmp = 0;
    loop = i;
    while(loop){
      dig = loop % 10;
      tmp += dig;
      loop /= 10;
    }
    
    if((tmp >= a)&&(tmp <= b)){
      sum += i;
    }
  }
  cout << sum << endl;
}
