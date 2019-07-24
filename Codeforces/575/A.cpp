#include<bits/stdc++.h>
using namespace std;

int main(){
	int q;
	long long a,b,c;
	cin >> q;

	for(int i=0;i<q;i++){
		cin >> a >> b >> c;
		long long sum = a + b + c;
		cout << sum/2 << endl;
	}
}