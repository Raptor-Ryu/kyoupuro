#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,tmp,count=1;
  cin >> n;
  vector<int> vec(n);
  
  for(int i=0; i<n; i++){
    cin >> vec.at(i);
  }
  
  for(int i=0; i<n; i++){
    for(int j=i+1; j<n; j++){
      if(vec.at(i) < vec.at(j)){
		tmp = vec.at(i);
        vec.at(i) = vec.at(j);
        vec.at(j) = tmp;
      }
    }
  }
  
  for(int i=0; i<n-1; i++){
    if(vec.at(i) != vec.at(i+1)){
      count++;
    }
  }
  
  cout << count << endl;
}
