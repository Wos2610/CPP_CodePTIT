#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

#define M 10000006



void process(){
	int n;
	cin >> n;
	long long a[n + 6];
	
	map<long long, int> m;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		m[a[i]] = 1;
	}
	
	for(int i = 0; i < n; i++){
		if(m[i] == 1){
			cout << i;
		}
		else{
			cout << "-1";
		}
		cout << " ";
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