#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,count=0;
  string s;
  cin >> n >> s;
  for(int i=0; i<n-2; i++){
    if(s.at(i) == 'A'){
      if(s.at(i+1) == 'B'){
        if(s.at(i+2) == 'C'){
          count++;
        }
      }
    }
  }
  
  cout << count << endl;
}
