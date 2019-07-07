#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin >> s;
  int l = s.size();
  for(int i=0; i< l; i++){
    if(i%2 == 0){
      cout << s.at(i);
    }
  }
  cout << endl;
}
