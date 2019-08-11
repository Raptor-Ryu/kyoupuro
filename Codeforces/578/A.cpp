#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  string s;
  cin >> s;
  int pos_left=0,pos_right=9;
  vector<int> room(10);
  
  for(int i=0; i<n; i++){
    char tmp = s.at(i);
    if(tmp == 'L'){
      while(1){
        if(room.at(pos_left) == 1){
          pos_left++;
        }else{
          break;
        }
      }
      room.at(pos_left) = 1;
      pos_left++;
    }else if(tmp =='R'){
      while(1){
        if(room.at(pos_right) == 1){
          pos_right--;
        }else{
          break;
        }
      }
      room.at(pos_right) = 1;
      pos_right--;
    }else{
      int pos = tmp - '0';
      room.at(pos) = 0;
      if(pos < pos_left) pos_left = pos;
      if(pos > pos_right) pos_right = pos;
    }
  }
  
  for(int i=0; i<10; i++){
    cout << room.at(i);
  }
  cout << endl;
}