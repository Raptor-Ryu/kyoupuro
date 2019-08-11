#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  int n,k;
  long long m;
  for(int i=0; i<t; i++){
    int flag = 1;
    cin >> n >> m >> k;
    vector<int> height(n);
    for(int j=0; j<n; j++){
      cin >> height.at(j);
    }
    
    for(int j=0; j<n-1; j++){
      int h1,h2;
      h1 = height.at(j);
      h2 = height.at(j+1);
      if(h1 >= h2 - k){
        if(h2 - k >= 0){
          m += h1 - h2 + k;
        }else{
          m += h1;
        }
      }else{
        if(h1 + m >= h2 - k){
          m -= h2 - k - h1;
        }else{
          flag = 0;
          break;
        }
      }
    }
    
    if(flag){
      cout << "YES" << endl;
    }else{
      cout << "NO" << endl;
    }
  } 
}