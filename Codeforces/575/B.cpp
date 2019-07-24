#include<bits/stdc++.h>
using namespace std;

int main(){
	int q,n,k,pos;
	long long tmp,count;
	vector<long long> data(200000);
	cin >> q;

	for(int i=0;i<q;i++){
		cin >> n >> k;
		count = 0;
		pos = 0;
		
		for(int j=0; j<n; j++){
			cin >> tmp;
			if(tmp % 2 == 1){
				data.at(pos) = j+1;
				pos++;
				count++;
			}
		}

		if((count-k+1) % 2 == 0 || count < k){
			cout << "NO" << endl;
		}else{
			cout << "YES" << endl;
			for(int j=0; j<k-1; j++){
				cout << data.at(j) << ' ';
			}
			cout << n << endl;
		}
	}
}