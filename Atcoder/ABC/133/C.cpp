#include <bits/stdc++.h>
using namespace std;
 
int main(){
  long long l,r;
  cin >> l >> r;
  
  long long min=2020;
  for(long long i=l; i<=r; i++){
    long long tmp = i%2019;
    if(tmp < min) min = tmp;
    if(min == 0) break;
  }
  
  if(min == 0){
    cout << 0 << endl;
    return 0;
  }
  
  long long start = l%2019;
  long long end = r%2019;
  if(start > end){
    long long tmp = start;
    start = end;
    end = tmp;
  }
  long long answer = 2020;
  
  for(long long i=start; i<end; i++){
    for(long long j=start+1; j<=end; j++){
      long long tmp = i*j;
      tmp %= 2019;
      if(answer > tmp) answer = tmp;
      if(answer == 0) break;
    }
  }
  
  cout << answer << endl;
  
  
}