#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin >> s;
  int size = s.size();
  
  for(int i=0; i<size-1; i++){
    if(s.at(i) == s.at(i+1)){
      cout << i+1 << ' ' << i+2 << endl;
      return 0;
    }
  }
  
  for(int i=0; i<size-2; i++){
    if(s.at(i) == s.at(i+2)){
      cout << i+1 << ' ' << i+3 << endl;
      return 0;
    }
  }
  
  cout << -1 << ' ' << -1 << endl;
}