#include<bits/stdc++.h>
using namespace std;
 
int main(){
  long long  s;
  cin >> s;
  long long x1=0,x2=0,x3=0,y1=0,y2=0,y3=0;
  long long tmp;
  
  if(s <= 1000000000){ 
    x1=0;
    y1=0;
    y2=0;
    y3=1;
    x3=0;
    x2=s;
  
    cout << x1 << ' ' << y1 << ' ' <<x2 << ' ' <<y2<< ' ' <<x3<< ' ' <<y3<<endl;
    return 0;
  }else if(s > 1000000000){
    x1=0;
    y1=0;
    
    for(long long i=30000; i<=1000000000; i+=1){
      if(i*i >= s){
        x2 = i;
        y3 = i;
        break;
      }
    }
    
    tmp = x2*y3 - s;
    
    if(tmp == 0){
      cout << x1 << ' ' << y1 << ' ' <<x2 << ' ' <<y2<< ' ' <<x3<< ' ' <<y3<<endl;
      return 0;
    }
    
    for(long long i=1; i<=1000000000; i+=1){
      x3 = i;
      if(tmp % i == 0){
        if( tmp/i <= 1000000000){
          y2 = tmp/i;
          break;
        }
      }
    }
  }
  
  cout << x1 << ' ' << y1 << ' ' << x2 << ' ' << y2 << ' ' << x3 << ' ' << y3 << endl;
  
}