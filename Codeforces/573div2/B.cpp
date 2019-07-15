#include <bits/stdc++.h>
using namespace std;

int main(){
	string first,second,third;
	cin >> first >> second >> third;

	vector<int> manzu(10);
	vector<int> pinzu(10);
	vector<int> souzu(10);

	if(first.at(1) == 'm'){
		manzu.at(first.at(0)-'0')++;
	}else if(first.at(1) == 'p'){
		pinzu.at(first.at(0)-'0')++;
	}else{
		souzu.at(first.at(0)-'0')++;
	}

	if(second.at(1) == 'm'){
		manzu.at(second.at(0)-'0')++;
	}else if(second.at(1) == 'p'){
		pinzu.at(second.at(0)-'0')++;
	}else{
		souzu.at(second.at(0)-'0')++;
	}

	if(third.at(1) == 'm'){
		manzu.at(third.at(0)-'0')++;
	}else if(third.at(1) == 'p'){
		pinzu.at(third.at(0)-'0')++;
	}else{
		souzu.at(third.at(0)-'0')++;
	}
  
	for(int i=1; i<10; i++){
		if(manzu.at(i) == 3 || pinzu.at(i) == 3 || souzu.at(i) == 3){
			cout << 0 << endl;
			return 0;
		}else if(manzu.at(i) == 2 || pinzu.at(i) == 2 || souzu.at(i) == 2){
			cout << 1 << endl;
			return 0;
		}
	}

	for(int i=1; i<8; i++){
		if(manzu.at(i) == 1){
			if(manzu.at(i+1) == 1 && manzu.at(i+2) == 1){
				cout << 0 << endl;
				return 0;
			}else if(manzu.at(i+1) == 1 || manzu.at(i+2) == 1){
				cout << 1 << endl;
				return 0;
			}
		}
	}

	for(int i=1; i<8; i++){
		if(pinzu.at(i) == 1){
			if(pinzu.at(i+1) == 1 && pinzu.at(i+2) == 1){
				cout << 0 << endl;
				return 0;
			}else if(pinzu.at(i+1) == 1 || pinzu.at(i+2) == 1){
				cout << 1 << endl;
				return 0;
			}
		}
	}

	for(int i=1; i<8; i++){
		if(souzu.at(i) == 1){
			if(souzu.at(i+1) == 1 && souzu.at(i+2) == 1){
				cout << 0 << endl;
				return 0;
			}else if(souzu.at(i+1) == 1 || souzu.at(i+2) == 1){
				cout << 1 << endl;
				return 0;
			}
		}
	}
  
  if(manzu.at(8) == 1 && manzu.at(9) == 1){
    cout << 1 << endl;
    return 0;
  }
  
  if(pinzu.at(8) == 1 && pinzu.at(9) == 1){
    cout << 1 << endl;
    return 0;
  }
  
  if(souzu.at(8) == 1 && souzu.at(9) == 1){
    cout << 1 << endl;
    return 0;
  }

	cout << 2 << endl;
}