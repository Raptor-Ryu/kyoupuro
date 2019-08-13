#include <bits/stdc++.h>
using namespace std;

int main(){
  int q;
  cin >> q;
  for(int j=0; j<q; j++){
    int n,flag=1;
    cin >> n;
    vector<int> map(10001);
    for(int i=0; i<n*4; i++){
      int tmp;
      cin >> tmp;
      map.at(tmp)++;
    }
    
    for(int i=0; i<10001; i++){
      if(map.at(i) % 2 == 1){
        flag=0;
        break;
      }
    }
    
    if(flag == 0){
      cout << "NO" << endl;
      continue;
    }
    
    int min,max,square;
    for(int i=0; i<10001; i++){
      if(map.at(i) != 0){
        min = i;
      }
    }
    for(int i=10000; i>0; i--){
      if(map.at(i) != 0){
        max = i;
      }
    }
    
    square = min*max;
    
    int pos1=0,pos2=10000;
    int count = 0;
    
    while(1){
      for(int i=0; i<10001; i++){
        if(map.at(i) != 0){
          pos1 = i;
        }
      }
      for(int i=10000; i>0; i--){
        if(map.at(i) != 0){
          pos2 = i;
        }
      }
      
      if(pos1 * pos2 == square && map.at(pos1) == map.at(pos2)){
        count += map.at(pos1);
        if(pos1 != pos2) count += map.at(pos2);
        map.at(pos1) = 0;
        map.at(pos2) = 0;
      }else{
        flag = 0;
        break;
      }

      if(count == n*4) break;
    }
    
    if(flag){
      cout << "YES" << endl;
    }else{
      cout << "NO" << endl;
    }
  }
}