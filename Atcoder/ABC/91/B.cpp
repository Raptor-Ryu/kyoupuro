#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,m;
  int count=0,answer=0;
  string str;
  
  cin >> n;
  vector<string> vec1(n);
  
  for(int i=0; i<n; i++){
    cin >> vec1.at(i);
  }
  
  cin >> m;
  vector<string> vec2(m);
  
  for(int i=0; i<m; i++){
    cin >> vec2.at(i);
  }
  
  for(int i=0; i<n; i++){
    count = 0;
    for(int j=0; j<n; j++){
      if(vec1.at(i)==vec1.at(j)){
        count++;
      }
    }
    
    for(int j=0; j<m; j++){
      if(vec1.at(i)==vec2.at(j)){
		count--;
      }
    }
    
    if(count > answer){
      answer = count;
    }
  }
  
  cout << answer << endl;
}
