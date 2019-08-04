#include<bits/stdc++.h>
using namespace std;
 
int main(){
  int n;
  cin >> n;
  vector<long long> data(n+1);
  for(int i=1; i<=n; i++){
    cin >> data.at(i);
  }
  
  if(n == 1){
    cout << "Yes" << endl;
    return 0;
  }
  
  long long height = data.at(1)-1; 
  int flag=1;
  
  for(int i=2; i<=n; i++){
    long long tmp = data.at(i);
    if(height == tmp){
      continue;
    }else if(height == tmp - 1){
      continue;
    }else if(height < tmp-1){
      height = tmp-1;
    }else if(height > tmp){
      flag = 0;
      break;
    }
  }
  
  if(flag == 1){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
  
  
}
