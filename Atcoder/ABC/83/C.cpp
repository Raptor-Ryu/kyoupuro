#include <bits/stdc++.h>
using namespace std;

int main(){
  int a,b,c;
  int x,y;
  int sum1,sum2,sum3;
  int answer;
  cin >> a >> b >> c >> x >> y;
  int min,max,min_pizza,max_pizza;
  
  if(x < y){
    min = x;
    min_pizza = a;
    max = y;
    max_pizza = b;
  }else{
    min = y;
    min_pizza = b;
    max = x;
    max_pizza = a;
  }
  
  sum1 = a*x+b*y;
  sum2 = c*2*max;
  sum3 = c*2*min+(max-min)*max_pizza;
  
  if(sum1 > sum2){
    answer = sum2;
  }else{
    answer = sum1;
  }
  
  if(answer > sum3){
    answer = sum3;
  }
  
  cout << answer << endl;
}