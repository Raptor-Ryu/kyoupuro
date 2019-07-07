#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  long sum=0;
  cin >> n;
  vector<int> vec(n*3);
  for(int i=0; i<n*3; i++){
    cin >> vec.at(i);
  }
  sort(vec.begin(),vec.end());
  reverse(vec.begin(),vec.end());
  
  for(int i=1; i<n*2; i += 2){
    sum += vec.at(i);
  }
  
  cout << sum << endl;
}
