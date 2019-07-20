#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  int max=0,max_second=0;
  vector<int> data(n);
  vector<int> dp(200001);
  for(int i=0; i<n; i++){
    cin >> data.at(i);
    dp.at(data.at(i))++;
    if(max < data.at(i)) max = data.at(i);
  }
  
  for(int i=max-1; i >= 0; i--){
    if(dp.at(i) > 0){
      max_second = i;
      break;
    }
  }
 
  if(dp.at(max) > 1){
    for(int i=0; i<n; i++){
      cout << max << endl;
    }
    return 0;
  }
  
  for(int i=0; i<n; i++){
    if(data.at(i) == max){
      cout << max_second << endl;
    }else{
      cout << max << endl;
    }
  }   
}
