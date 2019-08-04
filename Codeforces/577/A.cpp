#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin >> n >> m;
	vector<string> data(n);
	for(int i=0; i<n; i++){
		cin >> data.at(i);
	}

	vector<int> point(m);
	for(int i=0; i<m; i++){
		cin >> point.at(i);
	}

	int max = 0;


	for(int i=0; i<m; i++){
		vector<int> map(5);
		for(int j=0; j<n; j++){
			if(data.at(j).at(i) == 'A'){
				map.at(0)++;
			}else if(data.at(j).at(i) == 'B'){
				map.at(1)++;
			}else if(data.at(j).at(i) == 'C'){
				map.at(2)++;
			}else if(data.at(j).at(i) == 'D'){
				map.at(3)++;
			}else if(data.at(j).at(i) == 'E'){
				map.at(4)++;
			}
		}

		sort(map.begin(),map.end());
		reverse(map.begin(),map.end());
		max += map.at(0) * point.at(i);
	}

	cout << max << endl;

}