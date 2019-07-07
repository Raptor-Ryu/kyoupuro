#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,t,a;
  int min=1000000,point=0;
  cin >> n >> t >> a;
  
  vector<int> vec(n);
  
  for(int i=0; i<n; i++){
    cin >> vec.at(i);
    vec.at(i) = (t - vec.at(i) * 0.006 - a)*1000;
    if(vec.at(i) < 0){
      vec.at(i) = -vec.at(i);
    }
    if(min > vec.at(i)){
      min = vec.at(i);
      point = i+1;
    }
  } 
  
  cout << point << endl;
}
