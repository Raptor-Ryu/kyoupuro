#include <bits/stdc++.h>
using namespace std;
 
int main(){
  int n,d;
  cin >> n >> d;
  vector<vector<int>> map(n, vector<int>(d));
  for(int i=0; i<n; i++){
    for(int j=0; j<d; j++){
      cin >> map.at(i).at(j);
    }
  }
  int count =0;
  
  for(int i=0; i<n-1; i++){
    for(int j=i+1; j<n; j++){
      int sum=0;
      for(int k=0; k<d; k++){
        sum += pow( map.at(i).at(k) - map.at(j).at(k) , 2);
      }
      float a= sqrt(sum);
      int b = a;
      if(a==b) count++;
    }
  }
  
  cout << count << endl;
}