//未完成　謎
#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> map(150001),answer(150001);
  for(int i=0; i<n; i++){
    int tmp;
    cin >> tmp;
    map.at(tmp)++;
  }
  
  if(map.at(1) >= 1) answer.at(1) = 1;
  if(map.at(1) > 1) answer.at(2) = 1;
  if(map.at(150000) >= 1) answer.at(150000) = 1;
  if(map.at(150000) > 1) answer.at(149999) = 1;
  
  for(int i=2; i<150000; i++){
    if(map.at(i) >= 1) answer.at(i) = 1;
    if(map.at(i) == 2){
      if(answer.at(i-1) == 0){
        answer.at(i-1) = 1;
      }else if(answer.at(i+1) == 0){
        answer.at(i+1) = 1;
      }
    }else if(map.at(i) >= 3){
      answer.at(i-1) = 1;
      answer.at(i+1) = 1;
    }
  }
 
  int count = 0;
  
  for(int i=1; i<150001; i++){
    if(answer.at(i) != 0) count++;
  }
  
  cout << count << endl;
}