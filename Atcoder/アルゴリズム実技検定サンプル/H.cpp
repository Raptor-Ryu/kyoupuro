//未完成

#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n,m,answer=0;
	cin >> n >> m;
	vector<long long> data(n);
	for(int i=0; i<n; i++){
		cin >> data.at(i);
	}

	sort(data.begin(),data.end());
	reverse(data.begin(),data.end());

	while(m>0){
		data.at(0) /= 2;
		m--;
		sort(data.begin(),data.end());
		reverse(data.begin(),data.end());
	}

	for(int i=0; i<n; i++){
		answer += data.at(i);
	}

	cout << answer << endl;
}