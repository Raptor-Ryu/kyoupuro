#include <bits/stdc++.h>
using namespace std;
 
int main(){
  int n;
  cin >> n;
  vector<long long> data(n);
  for(int i=0; i<n; i++){
    cin >> data.at(i);
  }
  
  long long sum=0;
  
  for(int i=0; i<n; i++){
    if(i%2 == 0){
      sum += data.at(i);
    }else{
      sum -= data.at(i);
    }
  }
  
  long long answer = sum;
  
  vector<long long> rain(n);
  
  rain.at(0) = answer;
  
  for(int i=1; i<n; i++){
    rain.at(i) = (data.at(i-1) - (rain.at(i-1)/2))*2;
  }
  
  for(int i=0; i<n; i++){
    cout << rain.at(i) << " ";
  }
  cout << endl;
      
}