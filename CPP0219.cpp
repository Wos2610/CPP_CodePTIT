#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

#define M 1000006

int a[1006][1006];


void process(){
	int n, m;
	cin >> n >> m;
	int r[n + 1] = {0};
	int c[m + 1] = {0};
	
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			cin >> a[i][j];
		}
	}
	
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			if(a[i][j] == 1){
				r[i] = 1;
				c[j] = 1;
			}
		}
	}
	
	for(int i = 1; i <= n; i++){
		if(r[i] == 1){
			for(int j = 1; j <= m; j++){
				a[i][j] = 1;
			}
		}
	}
	
	for(int j = 1; j <= m; j++){
		if(c[j] == 1){
			for(int i = 1; i <= n; i++){
				a[i][j] = 1;
			}
		}
	}
	
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			cout << a[i][j] << " ";
		}
		cout << "\n";
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