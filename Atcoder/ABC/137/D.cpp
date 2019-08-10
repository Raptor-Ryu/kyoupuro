#include <bits/stdc++.h>
using namespace std;
 
int main(){
  int n,m;
  cin >> n >> m;
  vector<pair<int,int>> data(n);
  priority_queue<int> que;
  
  for(int i=0; i<n; i++){
    cin >> data.at(i).first >> data.at(i).second;
  }
  
  sort(data.begin(),data.end());
  long long sum = 0;
  int date = data.at(0).first,pos=0,count = 0;
  
  if(date > m){
    cout << 0 << endl;
    return 0;
  }
  
  while(1){
    while(1){
      if(pos == n) break;
      if(date == data.at(pos).first){
        que.push(data.at(pos).second);
        pos++;
      }else{
        break;
      }
    }
    
    if(que.empty()){
      date++;
    }else{
      sum += que.top();
      que.pop();
      date++;
      count++;
    }
    
    if(date == m+1 || count == n) break;
  }
  
  cout << sum << endl;
}
