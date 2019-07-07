#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,x,sum=0,num=0;
  cin >> n >> x;
  vector<int> vec(n);
  for(int i=0; i<n; i++){
    cin >> vec.at(i);
  }
  sort(vec.begin(),vec.end());
  
  for(int i=0; i<n; i++){
    sum += vec.at(i);
    if(sum == x){
      num++;
      break;
    }else if(sum > x){
      break;
    }else{
      num++;
    }
  }
  
  if(sum < x){
    cout << num-1 << endl;
  }else{
    cout << num << endl;
  }
}
