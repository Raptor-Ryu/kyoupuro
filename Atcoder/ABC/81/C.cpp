#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,k;
  int count=0;
  cin >> n >> k;
  vector<int> vec(n);
  for(int i=0; i<n; i++){
    cin >> vec.at(i);
  }
  
  vector<int> map(200000);
  
  for(int i=0; i<n; i++){
    map.at(vec.at(i)-1)++;
  }
  
  sort(map.begin(),map.end());
  reverse(map.begin(),map.end());
  
  for(int i=k; i<200000; i++){
    count += map.at(i);
  }
  
  cout << count << endl;
}
