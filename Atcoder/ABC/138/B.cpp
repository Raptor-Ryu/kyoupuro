#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  double sum=0;
  for(int i=0; i<n; i++){
    int a;
    double b;
    cin >> a;
    b = 1.000000/a;
    sum += b;
  }
  
  cout << setprecision(10) << 1/sum << endl; 
}
