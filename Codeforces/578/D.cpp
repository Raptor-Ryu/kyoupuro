//未完成
#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,k;
  cin >> n >> k;
  vector<vector<char>> map(n,vector <char>(n));
  vector<vector<char>> copy(n,vector <char>(n));
  for(int i=0; i<n; i++){
    string s;
    cin >> s;
    for(int j=0; j<n; j++){
      map.at(i).at(j) = s.at(j);
    }
  }
  
  copy = map;
  
  
  
}