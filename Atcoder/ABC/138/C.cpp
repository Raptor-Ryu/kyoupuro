#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  double answer;
  cin >> n;
  vector<int> data(n);
  for(int i=0; i<n; i++){
    cin >> data.at(i);
  }
  
  sort(data.begin(),data.end());
  answer = data.at(0);
  
  for(int i=1; i<n; i++){
    answer = (answer + data.at(i))/2.0;
  }
  
  cout << answer << endl;
}
