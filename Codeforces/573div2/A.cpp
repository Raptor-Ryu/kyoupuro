#include<bits/stdc++.h>
using namespace std;

int main(){
	int x;
	cin >> x;
	int r = x%4;

	if(r==1){
		cout << 0 << " " << "A" << endl;
	}else if(r==3){
		cout << 2 << " " << "A" << endl;
	}else if(r==2){
		cout << 1 << " " << "B" << endl;
	}else if(r==0){
		cout << 1 << " " << "A" << endl;
	}
}