#include<bits/stdc++.h>
using namespace std;
 
int main(){
  int n,count=0;
  cin >> n;
  for(int i=1; i<=n; i++){
    if(1<=i && i <10 ){
      count++;
    }else if(100 <= i && i < 1000){
      count++;
    }else if(10000 <= i && i < 100000){
      count++;
    }
  }
   
  cout << count << endl;
      
}
