#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,k;
	cin >> n >> k;
	vector<long long> data(n),difference(n);
	for(int i=0; i<n; i++){
		cin >> data.at(i);
	}
	sort(data.begin(),data.end());
	reverse(data.begin(),data.end());

	long long answer = data.at((n-1)/2);
  	long long sum=k;
    int count = (n+1)/2;
    int pos = 0;

	for(int i=0; i<=(n-1)/2; i++){
		sum += data.at(i);
	}
    
    while(1){
      if(sum % count == 0){
        if(sum/count >= data.at(pos)){
          answer = sum/count;
          break;
        }else{
          sum -= data.at(pos);
          pos++;
          count--;
        }
      }else{
        if(sum/count >= data.at(pos) - 1){
          answer = sum/count;
          break;
        }else{
          sum -= data.at(pos);
          pos++;
          count--;
        }
      }
    }

	cout << answer << endl;
}