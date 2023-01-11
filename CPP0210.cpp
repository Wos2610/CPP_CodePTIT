#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

#define M 1000006


void process(){
	int n;
	cin >> n;
	int a[n + 6] = {0};
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	int m = -1;
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			if(a[j] > a[i]){
				m = max(a[j] - a[i], m);
			}
		}
	}
	cout << m;
	cout << "\n";
}

int main(){
	int T;
	cin >> T;
	while(T--){
		process();
	}
}
