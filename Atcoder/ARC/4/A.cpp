#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  vector<double> x(n);
  vector<double> y(n);
  double x1,y1,x2,y2,max=0;
  cin >> n;
  
  for(int i=0; i<n; i++){
    cin >> x.at(i) >> y.at(i);
  }
  
  for(int i=0; i<n; i++){
    for(int j=i+1; j<n; j++){
      x1=x.at(i);
      x2=x.at(j);
      y1=y.at(i);
      y2=y.at(j);
      double tmp = sqrt( pow((x1-x2),2.0) + pow((y1-y2),2.0));
      if( max < tmp){
		max = tmp;
      }
    }
  }
  cout << max << endl;
}
