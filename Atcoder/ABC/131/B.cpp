#include <bits/stdc++.h>
using namespace std;
int main(){
  int n,l;
  cin >> n >> l;
  int answer=0;
  
  if(l >= 0){
    l++;
    for(int i=1; i<n; i++){
      answer += l;
      l++;
    }
  }else if(l < 0 && abs(l) < n){
    for(int i=0; i<n; i++){
      answer += l;
      l++;
    }
  }else{
    for(int i=0; i<n-1; i++){
      answer += l;
      l++;
    }
  }
  
  cout << answer << endl;
}