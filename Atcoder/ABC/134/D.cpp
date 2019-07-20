#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,count=0;
  cin >> n;
  vector<int> data(n+1);
  vector<int> map(n+1);
  for(int i=1; i<=n; i++){
    cin >> data.at(i);
  }
  
  for(int i=n; i>0; i--){
    int tmp=0;
    for(int j=i; j<=n; j += i){
      tmp += map.at(j);
    }
    if(tmp%2 != data.at(i)) {
      count++;
      map.at(i)++;
    }
  }
  
  cout << count << endl;
  for(int i=1; i<=n; i++){
    if(map.at(i) == 1){
      cout << i << ' ';
    }
  }
  cout << endl;
}
