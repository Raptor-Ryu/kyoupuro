#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,a=1;
  int count=0,flag=0;
  cin >> n;
  
  vector<int> vec(n);
  
  for(int i=0; i<n; i++){
    cin >> vec.at(i);
  }
  
  for(int i=0; i<n; i++){
    count++;
    if(vec.at(a-1)==2){
      flag=1;
      break;
    }else{
      a = vec.at(a-1);
    }
  }
  
  if(flag==1){
    cout << count << endl;
  }else{
	cout << "-1" << endl;
  }
}
