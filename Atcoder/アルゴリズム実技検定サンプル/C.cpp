#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,t;
	cin >> n >> t;
	int cost = 1001;

	for(int i=0; i<n; i++){
		int tmp_cost,tmp_time;
		cin >> tmp_cost >> tmp_time;
		if(tmp_time <= t){
			if(tmp_cost <= cost){
				cost = tmp_cost;
			}
		}
	}

	if(cost == 1001){
		cout << "TLE" << endl;
	}else{
		cout << cost << endl;
	}
}