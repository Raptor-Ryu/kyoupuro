#include <bits/stdc++.h>
using namespace std;

int main(){
  int w,h,n;
  cin >> w >> h >> n;
  vector<vector<int>> data(h+1, vector<int>(w+1));
  
  vector<int> x(n);
  vector<int> y(n);
  vector<int> a(n);
  
  for(int i=0; i<n; i++){
    cin >> x.at(i) >> y.at(i) >> a.at(i);
  }
  
  int W_right = w;
  int W_left = 0;
  int H_top = h;
  int H_bottom = 0;
  
  for(int i=0; i<n; i++){
    if(a.at(i) == 1){
      if(W_left < x.at(i)){
        W_left = x.at(i);
      }
    }else if(a.at(i) == 2){
      if(W_right > x.at(i)){
        W_right = x.at(i);
      }
    }else if(a.at(i) == 3){
      if(H_bottom < y.at(i)){
        H_bottom = y.at(i);
      }
    }else{
      if(H_top > y.at(i)){
        H_top = y.at(i);
      }
    }
  }
  
  if(W_right - W_left < 0){
    W_right = W_left;
  }
  
  if(H_top - H_bottom < 0){
    H_top = H_bottom;
  }
  
  cout << (W_right - W_left) * (H_top - H_bottom) << endl;
}