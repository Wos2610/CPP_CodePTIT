#include<bits/stdc++.h>
#define MOD 1000000007
using namespace std;


void process(){
	int n;
	cin >> n;
	int a[n + 6] = {0};
	int b[n + 6] = {0};
	
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	
	for(int i = 0; i < n; i++){
		if(i == 0){
			b[i] = a[i] * a[i + 1];
		}
		else if(i == n - 1){
			b[i] = a[i] * a[i - 1];
		}
		else{
			b[i] = a[i - 1] * a[i + 1];
		}
	}
	
	for(int i = 0; i < n; i++){
		cout << b[i] << " ";
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