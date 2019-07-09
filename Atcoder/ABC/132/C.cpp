#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> data(n);
  for(int i=0; i<n; i++){
    cin >> data.at(i);
  }
  
  sort(data.begin(),data.end());
  int min,max;
  min = data.at(n/2-1);
  max = data.at(n/2);
  
  int count=0;
  while(min != max){
    count++;
    min++;
  }
  
  cout << count << endl;
}