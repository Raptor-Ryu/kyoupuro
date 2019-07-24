#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n,k;
	cin >> n >> k;

	long long candy = 0,answer = 0;
	long long count = 1;

	for(int i = 0; i<n; i++){
		if(candy < k){
			candy += count;
			count++;
		}else{
			answer++;
			candy--;
		}
	}

	cout << answer << endl;

}