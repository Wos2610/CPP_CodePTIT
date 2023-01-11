#include<bits/stdc++.h>

using namespace std;

void process(){
	int n;
	string a;
	cin >> n >> a;
	vector<int> b(8, 0);
	for(int i = 0; i < n; i++){
		if(a[i] == '2'){
			b[2]++;	
		}
		else if(a[i] == '3'){
			b[3]++;
		}
		else if(a[i] == '4'){
			b[2] += 2;
			b[3]++;
		}
		else if(a[i] == '5'){
			b[5]++;
		}
		else if(a[i] == '6'){
			b[3]++;
			b[5]++;
		}
		else if(a[i] == '7'){
			b[7]++;
		}
		else if(a[i] == '8'){
			b[7]++;
			b[2] += 3;
		}
		else if(a[i] == '9'){
			b[7]++;
			b[2]++;
			b[3] += 2;
		}
	}
	
	for(int i = 7; i >= 2; i--){
		for(int j = 1; j <= b[i]; j++){
			cout << i;
		}
	}
	cout << "\n";
}

int main(){
	int T;
	cin >> T;
	while(T--){
		process();
	}

}