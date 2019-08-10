#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  long long count=0,answer=0;
  cin >> n;
  vector<string> data(n);
  
  for(int i=0; i<n; i++){
    string tmp;
    cin >>tmp;
    sort(tmp.begin(),tmp.end());
    data.at(i) = tmp;
  }
  
  sort(data.begin(),data.end());
  
  for(int i=0; i<n-1; i++){
    if(data.at(i) == data.at(i+1)){
      answer++;
      count++;
    }else{
      while(count > 0){
        answer += count-1;
        count--;
      }
    }
  }
  
  if(count == n-1){
    while(count > 0){
      answer += count-1;
      count--;
    }
  }
  
  cout << answer << endl;
}
