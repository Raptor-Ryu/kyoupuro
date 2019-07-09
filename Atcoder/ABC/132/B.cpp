#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> data(n);
  for(int i=0; i<n; i++){
    cin >> data.at(i);
  }
  
  int count = 0;
  
  for(int i=1; i<n-1; i++){
    int a,b,c;
    a = data.at(i-1);
    b = data.at(i);
    c = data.at(i+1);
    
    if(a < b && b < c) count++;
    if(c < b && b < a) count++;
  }
  
  cout << count << endl;
}