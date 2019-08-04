#include<bits/stdc++.h>
using namespace std;
 
int main(){
  int n;
  string s;
  cin >> s;
  n = s.size();
  vector<int> answer(n);
  
  int count_odd=0,count_even=0;
  int pos_rl=0,pos_lr=0;
  
  for(int i=0; i<n; i++){
    if(i%2 == 1){
      count_odd++;
    }else{
      count_even++;
    }
    
    if(i == n-1){
      if(pos_rl % 2 == 1){
        answer.at(pos_rl) = count_odd;
        answer.at(pos_rl+1) = count_even;
      }else{
        answer.at(pos_rl+1) = count_odd;
        answer.at(pos_rl) = count_even;
      }
      break;
    }
    
    if(s.at(i) == 'R' && s.at(i+1) == 'L'){
      pos_rl = i;
    }
    
    if(s.at(i) == 'L' && s.at(i+1) == 'R'){
      if(pos_rl % 2 == 1){
        answer.at(pos_rl) = count_odd;
        answer.at(pos_rl+1) = count_even;
      }else{
        answer.at(pos_rl+1) = count_odd;
        answer.at(pos_rl) = count_even;
      }
      count_odd=0;
      count_even=0;
    }
  }
  
  for(int i=0; i<n; i++){
    cout << answer.at(i) << ' ';
  }
  cout << endl;
}
