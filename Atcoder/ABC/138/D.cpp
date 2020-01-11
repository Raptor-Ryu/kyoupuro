//未完成

#include <bits/stdc++.h>
using namespace std;

int add(int b,int a,vector<long long> data){
  
}

int main(){
  int n,q;
  cin >> n >> q;
  vector<int> a(n),b(n);
  vector<int> p(n),x(n);
  vector<long long> point(n+1);
  
  for(int i=0; i<n-1; i++){
    cin >> a.at(i) >> b.at(i);
  }
  for(int i=0; i<q; i++){
    int p,x;
    cin >> p >> x;
    point.at(p) += x;
  }
  
  for(int i=0; i<n; i++){
    point.at(b.at(i)) += point.at(a.at(i));
  }
  
  for(int i=1; i<n; i++){
    cout << point.at(i) << ' ';
  }
  
  cout << point .at(n) << endl;
}