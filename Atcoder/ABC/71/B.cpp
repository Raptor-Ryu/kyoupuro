#include <bits/stdc++.h>
using namespace std;

int main(){
  string s,set="abcdefghijklmnopqrstuvwxyz";
  int flag=0;
  cin >> s;
  vector<int> map(26);
  
  for(int i=0; i<s.size(); i++){
    for(int j=0; j<26; j++){
      if(s.at(i) == set.at(j)){
        map.at(j)=1;
      }
    }
  }
  for(int i=0; i<26; i++){
    if(map.at(i) == 0){
      cout << set.at(i) << endl;
      flag=1;
      break;
    }
  }
  
  if(flag == 0){
    cout << "None" << endl;
  }
}