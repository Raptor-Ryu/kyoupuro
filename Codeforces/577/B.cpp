#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	long long sum=0;
	cin >> n;
	vector<int> data(n);
	for(int i=0; i<n; i++){
		cin >> data.at(i);
		sum += data.at(i);
	}

	if(sum%2 == 1){
		cout << "NO" << endl;
		return 0;
	}

	sort(data.begin(),data.end());
	sum = 0;

	for(int i=0; i<n-1; i++){
		sum += data.at(i);
	}

	if(sum >= data.at(n-1)){
		cout << "YES" << endl;
	}else{
		cout << "NO" << endl;
	}
}