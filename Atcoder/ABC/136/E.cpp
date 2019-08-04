#include<bits/stdc++.h>
using namespace std;

//未完成
int main(){
  int n,k,count=2;
  long long max_master=0,max=0;
  cin >> n >> k;
  vector<long long> data(n),map(n),divisor(n);
  for(int i=0; i<n; i++){
    cin >> data.at(i);
    max += data.at(i);
  }
  
  divisor.at(0) = max;
  long long a=1,pos=1;  
  while(1){
    if(max % count == 0){
      divisor.at(a) = max/count;
      a++;
      count++;
    }else{
      count++;
    }  
    
    if(count == max) break;
  }
  
  while(1){
    for(int i=0; i<n; i++){
      map.at(i) = data.at(i) % max;
    }
    sort(map.begin(),map.end());
    
    long long sum1=0,sum2=0;
    for(int i=0; i<n; i++){
      if(sum1 + map.at(i) <= k){
        sum1 += map.at(i);
      }else{
        sum2 += max - map.at(i);
      }
    }
    
    if(sum1 <= k && sum2 <= k){
      break;
    }
    
    max = divisor.at(pos);
    pos++;
  }
  
  cout << max << endl;
  
}
