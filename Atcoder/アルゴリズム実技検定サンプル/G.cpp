#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n,k;
	cin >> n >> k;
	vector<long long> data(n);
	for(int i=0; i<n; i++){
		cin >> data.at(i);
	}

	long long former=0,later=0,answer=0,sum=data.at(0);
	
	while(1){
		if(sum >= k){
			answer += n-later;

			sum -= data.at(former);
			if(former == n-1) break;
			former++;
			if(former > later){
				later = former;
				sum = data.at(former);
			}
		}else{
			if(later == n-1) break;
			later++;
			sum += data.at(later);
		}
	}

	cout << answer << endl;
}