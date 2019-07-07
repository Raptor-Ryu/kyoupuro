#include <bits/stdc++.h>
using namespace std;

int main(){
  int num1,num2,x,dig;
  cin >> num1;
  num2 = num1;
  
  while(num2){
	dig = num2 % 10;
    x += dig;
    num2 /= 10;
  }
  
  if((num1 % x) == 0){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
}
