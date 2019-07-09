#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  char c1,c2,c3,c4;
  cin >> s;
  c1 = s.at(0);
  c2 = s.at(1);
  c3 = s.at(2);
  c4 = s.at(3);
  
  bool flag = 0;
  
  if(c1 == c2 && c3 == c4) flag = 1;
  if(c1 == c3 && c2 == c4) flag = 1;
  if(c1 == c4 && c3 == c2) flag = 1;
  
  if(c1 == c2 && c1 == c3 && c1 == c4) flag = 0;
 
  if(flag){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
}