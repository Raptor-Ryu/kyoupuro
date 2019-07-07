#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  int flag=0;
  cin >> n;
  
  for(int i=0; i<=25; i++){
    for(int j=0; j<15; j++){
      if( 4*i+7*j == n){
		flag=1;
      }
    }
  }
  
  if(flag ==1){
	cout << "Yes" << endl;
  }else{
	cout << "No" << endl;
  }
}
