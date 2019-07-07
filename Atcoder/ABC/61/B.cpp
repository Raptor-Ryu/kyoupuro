#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,m;
  cin >> n >> m;
  
  vector<int> vec(m*2);
  vector<int> count(n);
  
  for(int i=0; i<m*2;i++){
    cin >> vec.at(i);
    for(int j=1; j<=n;j++){
      if(vec.at(i) == j){
        count.at(j-1)++;
      }
    }
  }
  
  for(int i=0; i<n; i++){
    cout << count.at(i) << endl;
  }
  
}
