#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

#define M 1000006

int n;
void process(){
	int n;
	cin >> n;
	int a[n + 6][n + 6] = {0};
	
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cin >> a[i][j];
		}
	}
	
	int m;
	cin >> m;
	int b[m + 6][m + 6] = {0};
	
	for(int i = 1; i <= m; i++){
		for(int j = 1; j <= m; j++){
			cin >> b[i][j];
		}
	}
	
	for(int i = 1; i <= m; i++){
		for(int j = 1; j <= m; j++){
			for(int p = i; p <= n; p += m){
				for(int q = j; q <= n; q += m){
					a[p][q] *= b[i][j];
				}
			}
		}
	}
	
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}
	
}

int main(){
    int T = 1;
//    scanf("%d", &T);
    while(T--){
    	process();
	}
	
}