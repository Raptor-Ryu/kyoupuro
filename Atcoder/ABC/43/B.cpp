#include <bits/stdc++.h>
using namespace std;
 
int main(){
  string s;
  cin >> s;
  vector<char> data;
  for(int i=0; i<s.size(); i++){
    if(s.at(i) == '0'){
      data.push_back('0');
    }else if(s.at(i) == '1'){
      data.push_back('1');
    }else if(s.at(i) == 'B' && data.size() == 0){
    }else{
      data.pop_back();
    }
  }
  for(int i=0; i<data.size(); i++){
    cout << data.at(i);
  }
  cout << endl;
}