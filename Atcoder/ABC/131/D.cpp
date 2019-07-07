#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  long long time=0;
  bool flag = true;
  cin >> n;
  vector<pair<long long , long long>> pair(n);
  for(int i=0; i<n; i++){
    cin >> pair.at(i).second >> pair.at(i).first;
  }
  
  sort(pair.begin(),pair.end());
  
  for(int i=0; i<n; i++){
    time += pair.at(i).second;
    if(time > pair.at(i).first){
      flag = false;
      break;
    }
  }
  
  if(flag){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
}