#include <bits/stdc++.h>
using namespace std;

int fanc(int k){
  int ans=1;
  for(int i=1; i<k; i++){
    ans *= i;
  }
  
  return ans;
}

int main(){
  int n;
  cin >> n;
  vector<int> p(n),q(n),a(n,1),b(n,1);
  int pos1=0,pos2=0;
  
  for(int i=0; i<n; i++){
    cin >> p.at(i);
  }
  for(int i=0; i<n; i++){
    cin >> q.at(i);
  }
  
  for(int i=0; i<n; i++){
    int x = fanc(n-i);
    int y = 0;
    for(int j=0; j<p.at(i); j++){
      y += a.at(j);
    }
	pos1 += (y-1)*x;
    a.at(p.at(i)-1) = 0;
  }
  
  pos1++;
  
  for(int i=0; i<n; i++){
    int x = fanc(n-i);
    int y = 0;
    for(int j=0; j<q.at(i); j++){
      y += b.at(j);
    }
	pos2 += (y-1)*x;
    b.at(q.at(i)-1) = 0;
  }
  
  pos2++;
  
  int ans = abs(pos1 - pos2);
  
  cout << ans << endl;
  
}
