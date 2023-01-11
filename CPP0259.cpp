#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

#define M 1000006

int a[1006][1006];
int b[1006][1006];
int c[1006][1006];

void process(){
	int n, m, p;
	cin >> n >> m >> p;
	
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			cin >> a[i][j];
		}
	}
	
	for(int i = 1; i <= m; i++){
		for(int j = 1; j <= p; j++){
			cin >> b[i][j];
		}
	}
	
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= p; j++){
			c[i][j] = 0;
			for(int k = 1; k <= m; k++){
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}
	
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= p; j++){
			cout << c[i][j] << " ";
		}
		cout << "\n";
	}
	
	
}

int main(){
	int T;
	T = 1;

	while(T--){
		process();
	}
}