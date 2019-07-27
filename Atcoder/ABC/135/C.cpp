#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> a(n+1),b(n);
  for(int i=0; i<n+1; i++){
    cin >> a.at(i);
  }
  for(int i=0; i<n; i++){
    cin >> b.at(i);
  }
  
  int r;
  long long answer1 = 0, answer2 = 0;
  
  for(int i=0; i<n; i++){
    if(a.at(i) <= b.at(i)){
      answer1 += a.at(i);
      r = b.at(i) - a.at(i);
      if(r <= a.at(i+1)){
        a.at(i+1) -= r;
        answer1 += r;
      }else{
        answer1 += a.at(i+1);
        a.at(i+1) = 0;
      }
    }else{
      answer1 += b.at(i);
    }
  }
  
  for(int i=n; i>0; i--){
    if(a.at(i) <= b.at(i-1)){
      answer2 += a.at(i);
      r = b.at(i-1) - a.at(i);
      if(r <= a.at(i-1)){
        a.at(i-1) -= r;
        answer2 += r;
      }else{
        answer2 += a.at(i-1);
        a.at(i-1) = 0;
      }
    }else{
      answer2 += b.at(i-1);
    }
  }
  
  long long answer = max(answer1,answer2);
  cout << answer << endl;
  
  
}
