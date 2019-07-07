#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,x,sum=0,count=0;
  cin >> n >> x;
  vector<int> vec(n);
  
  for(int i=0; i<n; i++){
    cin >> vec.at(i);
    sum += vec.at(i);
    count++;
  }
  
  sort(vec.begin(), vec.end());
  
  while(1){
    if(vec.at(0) <= x-sum){
      count++;
      sum += vec.at(0);
    }else{
      break;
    }
  }
  cout << count << endl;
}
