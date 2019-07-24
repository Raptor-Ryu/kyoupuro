#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<string> data(n);
  for(int i=0; i<n; i++){
  	cin >> data.at(i);
  }
  
  long long answer = 0;
  int size = data.at(0).size();

  for(int i=0; i<n; i++){
  	long long tmp = 0;
  	for(int j=0; j<size; j++){
  		tmp += data.at(i).at(j) - '0';
  		tmp *= 10;
  		tmp += data.at(i).at(j) - '0';
        tmp %= 998244353;
  		tmp *= 10;
  	}

  	tmp /= 10;

  	answer += tmp;  	
  	answer %= 998244353;
  }

  answer *= n;
  answer %= 998244353;
  
  cout << answer << endl;
}