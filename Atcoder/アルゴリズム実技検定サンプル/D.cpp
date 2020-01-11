#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	int count_0=0,count_1=0;
	cin >> s;
	for(int i=0; i<s.size(); i++){
		if(s.at(i) == '0'){
			count_0++;
		}else{
			count_1++;
		}
	}

	cout << min(count_0,count_1) * 2 << endl;
}