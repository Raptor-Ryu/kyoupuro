#include <bits/stdc++.h>
using namespace std;
long long gcd(long long a,long long b){
  long long x = a*b;
  
  if(a<b){
    long long tmp = a;
    a = b;
    b = tmp;
  }
  
  long long r = a % b;
  while(r!=0){
    a = b;
    b = r;
    r = a % b;
  }
  
  return x/b;
}
 
 
int main(){
  long long a,b,c,d;
  cin >> a >> b >> c >> d;
  long long lcm = gcd(c,d);
  
  if(c == 1 || d == 1){
    cout << 0 << endl;
    return 0;
  }
  
  long long b_c,b_d,b_cd,a_c,a_d,a_cd;
  a_c = (a-1)/c;
  a_d = (a-1)/d;
  a_cd = (a-1)/lcm;
  b_c = (b/c)-a_c;
  b_d = (b/d)-a_d;
  b_cd = (b/lcm)-a_cd;
  long long count = (b-a+1) - b_c - b_d + b_cd;
  cout << count << endl;
 
}