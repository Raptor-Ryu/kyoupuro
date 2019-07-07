#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  int point_a=0,point_z=0;
  cin >> s;
  int l = s.size();
  
  for(int i=0; i<l; i++){
    if(s.at(i) == 'A'){
      point_a = i;
      break;
    }
  }
  
  for(int i=0; i<l; i++){
    if(s.at(i) == 'Z'){
      point_z = i;
    }
  }
  
  cout << point_z - point_a + 1 << endl;
}
