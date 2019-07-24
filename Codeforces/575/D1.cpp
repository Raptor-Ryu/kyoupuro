#include<bits/stdc++.h>
using namespace std;

//未完成
//条件に合う部分文字列を全部保持していないといけなさそう
//最大長の部分文字列を基準にして何かしないといけなさそ

int main(){
	int q,n,k,count;
	int length_max = 1;
	string s;
	cin >> q;

	for(int i=0; i<q; i++){
        length_max = 1;
		count = 1;
		cin >> n >> k >> s;
		char first,second;
		for(int j=0; j<s.size()-1; j++){
			first = s.at(j);
			second = s.at(j+1);
			if(first == 'R'){
				if(second == 'G'){
					count++;
				}else{
					if(length_max < count) length_max = count;
					count = 1;
				}
			}else if(first == 'G'){
				if(second == 'B'){
					count++;
				}else{
					if(length_max < count) length_max = count;
					count = 1;
				}
			}else if(first == 'B'){
				if(second == 'R'){
					count++;
				}else{
					if(length_max < count) length_max = count;
					count = 1;
				}
			}
		}
      
        if(length_max < count) length_max = count;

		if(length_max >= k){
			cout << 0 << endl;
		}else{
			int answer = k - length_max;
			cout << answer << endl;
		}
	}
}