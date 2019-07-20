#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,d;
  cin >> n >> d;
  int range = 2*d+1;
  
  int answer = n / range;
  if(n%range != 0) answer++;
  
  cout << answer << endl;
}
