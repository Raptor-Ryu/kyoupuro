#include<bits/stdc++.h>
using namespace std;
 
int main(){
  int n;
  cin >> n;
  vector<int> data(n);
  for(int i=0; i<n; i++){
    cin >> data.at(i);
  }
  
  int answer = 30000000;
  
  for(int i=-100; i<=100; i++){
    int tmp=0;
    for(int j=0; j<n; j++){
      tmp += pow((data.at(j) - i), 2);
    }
    
    if(answer > tmp) answer = tmp;
    if(answer == 0) break;
  }
  
  cout << answer << endl;
}