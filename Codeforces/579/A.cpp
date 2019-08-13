#include <bits/stdc++.h>
using namespace std;

int main(){
  int q;
  cin >> q;
  for(int i=0; i<q; i++){
    int n;
    cin >> n;
    vector<int> data(n);
    for(int j=0; j<n; j++){
      cin >> data.at(j);
    }
    
    if(n == 1){
      cout << "YES" << endl;
      continue;
    }
    
    int flag=1;
    int pos = 0;
    for(int j=0; j<n; j++){
      if(data.at(j) == 1){
        pos = j;
        break;
      }
    }
    
    
    int count;
    int pos2 = (pos + 1)%n;
    
    if(data.at(pos2) == 2){
      count = 1;
      for(int j=1; j<n; j++){
        if(data.at(pos) == count){
          pos++;
          pos %= n;
          count++;
        }else{
          flag=0;
          break;
        }
      }
    }else if(data.at(pos2) == n){
      count = 1;
      for(int j=1; j<n; j++){
        if(data.at(pos) == count){
          pos--;;
          if(pos < 0) pos = n-1;
          count++;
        }else{
          flag=0;
          break;
        }
      }
    }else{
      flag=0;
    }
    
    if(flag){
      cout << "YES" << endl;
    }else{
      cout << "NO" << endl;
    }
  }
}