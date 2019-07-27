#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,count = 0;
  cin >> n;
  vector<int> data(n),copy(n);
  for(int i=0; i<n; i++){
    cin >> data.at(i);
  }
  
  copy = data;
  
  sort(copy.begin(),copy.end());
  
  for(int i=0; i<n; i++){
    if(data.at(i) == copy.at(i)) count++;
  }
  
  if( n-count == 0 || n-count == 2){
    cout << "YES" << endl;
  }else{
    cout << "NO" <<endl;
  }
}
