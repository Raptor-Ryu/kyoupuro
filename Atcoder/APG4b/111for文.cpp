#include <bits/stdc++.h>
using namespace std;

int main(){
  int N,A,B;
  string op;
 
  cin >> N >> A;
  
  for(int i=0; i < N; i++){
    cin >> op >> B;
    
    if(op=="+"){
      cout << i+1 << ":" << A+B << endl;
      A += B;
    }else if(op=="-"){
      cout << i+1 << ":" << A-B << endl;
      A -= B;
    }else if(op=="*"){
      cout << i+1 << ":" << A*B << endl;
      A *= B;
    }else{
      if(B==0){
        cout << "error" << endl;
        break;
      }else{
		cout << i+1 << ":" << A/B << endl;
        A /= B;
      }
    }
  }
}
