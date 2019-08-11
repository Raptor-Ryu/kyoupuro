#include <bits/stdc++.h>
using namespace std;

long long func(long long a, long long b){
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
  long long n,m;
  int q;
  cin >> n >> m >> q;
  
  long long euc = func(n,m);
  long long euc_n = n/euc , euc_m = m/euc;
  
  for(int i=0; i<q; i++){
    int sx,ex;
    long long sy,ey;
    cin >> sx >> sy >> ex >> ey;
    
    long long group_s,group_e;
    
    if(sx == 1){
      group_s = sy/euc_n;
      if(sy % euc_n == 0) group_s--;
    }else{
      group_s = sy/euc_m;
      if(sy % euc_m == 0) group_s--;
    }
     
    if(ex == 1){
      group_e = ey/euc_n;
      if(ey % euc_n == 0) group_e--;
    }else{
      group_e = ey/euc_m;
      if(ey % euc_m == 0) group_e--;
    }
    
    if(group_s == group_e){
      cout << "YES" << endl;
    }else{
      cout << "NO" << endl;
    }
  }    
}