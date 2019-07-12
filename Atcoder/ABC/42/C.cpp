#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,k;
  cin >> n >> k;
  vector<int> dp(10);
  for(int i=0; i<k; i++){
    int tmp;
    cin >> tmp;
    dp.at(tmp) = 1;
  }
  
  int answer = n;
  
  while(1){
    string s = to_string(answer);
    bool flag = 1;
    for(int i=0; i<s.size(); i++){
      int position = s.at(i) - '0';
      if(dp.at(position)==1){
        flag = 0;
        break;
      }
    }
    if(flag == 1) break;
    answer++;
  }
  
  cout << answer << endl;
  
}