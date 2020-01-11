#include <bits/stdc++.h>
using namespace std;

int main(){
  int k,x;
  cin >> k >> x;
  int answer = k*500;
  if(answer >= x){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
}