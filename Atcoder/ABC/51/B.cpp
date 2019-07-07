#include <bits/stdc++.h>
using namespace std;

int main(){
  int k,s;
  int count=0;
  cin >> k >> s;
  
  for(int x=0; x<=k; x++){
    for(int y=0; y<=k; y++){
      if((x+y >= s-k)&&(x+y <= s)){
		count++;
      }
    }
  }
  cout << count << endl;
}
