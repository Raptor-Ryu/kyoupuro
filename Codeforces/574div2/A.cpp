#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,k;
	cin >> n >> k;
	vector<int> data(n);
	vector<int> dp(k+1);
	for(int i=0; i<n; i++){
		cin >> data.at(i);
		dp.at(data.at(i))++;
	}

	int answer = 0;
	int r = 0;

	for(int i=0; i<k+1; i++){
		if(dp.at(i) % 2 == 0){
			answer += dp.at(i);
		}else{
			answer += (dp.at(i)-1);
			r++;
		}
	}

	if(r % 2 == 0){
		answer += r/2;
	}else{
		answer += (r-1)/2;
		answer++;
	}

	cout << answer << endl;

}