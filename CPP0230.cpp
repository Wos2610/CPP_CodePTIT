#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

#define M 1000006

int a[1006][1006];


void process(){
	int n;
	cin >> n;
	
	int d[n + 1] = {0};
	int dem = 0;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= 3; j++){
			cin >> a[i][j];
		}
	}
	
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= 3; j++){
			if(a[i][j] == 1){
				d[i]++;
			}
		}
		if(d[i] >= 2){
			dem++;
		}
	}
	cout << dem;
	cout << "\n";
	
}

int main(){
	int T;
	T = 1;

	while(T--){
		process();
	}
}