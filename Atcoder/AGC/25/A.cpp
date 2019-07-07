#include <bits/stdc++.h>
using namespace std;

int sum(int num){
  int sum=0;
  while(num){
	sum += num % 10;
    num /= 10;
  }
  
  return sum;
}

int main(){
  int n,x,y,min=1000;
  cin >> n;
  for(int i=1; i<=(n/2); i++){
    x = sum(i);
    y = sum(n-i);
    if(min > (x+y)){
      min = x+y;
    }
  }
  cout << min << endl;
}
