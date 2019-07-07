#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,tmp;
  int alice=0,bob=0;
  cin >> n;
  vector<int> vec(n);
  
  for(int i=0; i<n; i++){
    cin >> vec.at(i);
  }
  
  for(int i=0; i<n; i++){
    for(int j=i+1; j<n; j++){
      if(vec.at(i) < vec.at(j)){
		tmp = vec.at(i);
        vec.at(i) = vec.at(j);
        vec.at(j) = tmp;
      }
    }
  }
  
  for(int i=0; i<n; i += 2){
    alice += vec.at(i);
  }
  
  for(int i=1; i<n; i += 2){
    bob += vec.at(i);
  }
  
  cout << alice - bob << endl;
}
