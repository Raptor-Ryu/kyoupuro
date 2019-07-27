#include<bits/stdc++.h>
using namespace std;

int main(){
  long long a,b;
  cin >> a >> b;
  long long answer = a+b;
  if(answer % 2 == 0){
    answer /= 2;
    cout << answer << endl;
  }else{
    cout << "IMPOSSIBLE" << endl;
  }
}
