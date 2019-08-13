//未完成　謎
#include <bits/stdc++.h>
using namespace std;

long long euc(long long a, long long b){
  long long r;
  r = a % b;
  while(r!=0){
    a = b;
    b = r;
    r = a % b;
  }
  
  return b;
}

int main(){
  int n;
  cin >> n;
  long long x;
  cin >> x;
  
  for(int i=0; i<n-1; i++){
    long long tmp;
    cin >> tmp;
    x = euc(x,tmp);
  }
  
  long long num = x;
  long long answer=1,count=0;
  
  for(int i=1; i<=sqrt(x)+1e-9; i++){
    if(num % i == 0){
      count++;
      if(num != i*i) count++;
    }
  }

  cout << count << endl;
}