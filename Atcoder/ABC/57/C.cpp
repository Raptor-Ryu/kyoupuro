#include <bits/stdc++.h>
using namespace std;

int main(){
  long n;
  long tmp,min=10000000000;
  long x,y,a;
  cin >> n;
  
  for(long i=1; i<=100000; i++){
    if(n%i == 0){
      tmp = 0;
      x = i;
      y = n/i;
      
      if(x < y){
        a = y;
      }else{
        a = x;
      }
      
      while(a){
        tmp++;
        a /= 10;
      }
      
      if(tmp < min){
        min = tmp;
      }
    }
  }
  cout << min << endl;
}