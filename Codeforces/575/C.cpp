#include<bits/stdc++.h>
using namespace std;

int main(){
	int q,n;
	int x_max = 1e5, y_max = 1e5, x_min = -1e5, y_min = -1e5;
	int x,y,a1,a2,a3,a4;

	cin >> q;

	for(int i=0; i<q; i++){
		x_max = 1e5, y_max = 1e5, x_min = -1e5, y_min = -1e5;
		cin >> n;
		for(int j=0; j<n; j++){
			cin >> x >> y >> a1 >> a2 >> a3 >> a4;

			if(a1 == 0) x_min = max(x,x_min);
			if(a2 == 0) y_max = min(y,y_max);
			if(a3 == 0) x_max = min(x,x_max);
			if(a4 == 0) y_min = max(y,y_min); 
		}

		if(x_min <= x_max && y_min <= y_max){
			cout << 1 << ' ' << x_min << ' ' << y_min << endl;
		}else{
			cout << 0 << endl;
		}
	}
}