#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n,count=1;
	long long answer=0;
	cin >> n;
	vector<string> data(n);
	for(int i=0; i<n; i++){
		string tmp;
		cin >> tmp;
		sort(tmp.begin(),tmp.end());
		data.at(i) = tmp;
	}

	sort(data.begin(),data.end());

	for(int i=0; i<n-1; i++){
		long long tmp;
		if(data.at(i) == data.at(i+1)){
			if(i != n-2){
				count++;
			}else{
				count++;
				tmp = count*(count-1)/2;
				answer += tmp; 
			}
		}else{
			if(count != 1){
				tmp = count*(count-1)/2;
				answer += tmp;
				count = 1;
			}
		}
	}

	cout << answer << endl;
}