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
	cin >> n;
	int a[n + 6][n + 6] = {0};
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cin >> a[i][j];
		}
	}
	int m[100006] = {0};
	vector<int> b;
	
	for(int j = 1; j <= n; j++){
		if(m[a[1][j]] == 0){
			b.push_back(a[1][j]);
			m[a[1][j]] = 1;
		}
	}
	
	int c[100006] = {0};
	
	for(int k = 0; k < b.size(); k++){
		for(int i = 2; i <= n; i++){
			for(int j = 1; j <= n; j++){
				if(a[i][j] == b[k]){
					c[k]++;
					break;
				}
			}
		}
	}
	
	int dem = 0;
	for(int k = 0; k < b.size(); k++){
		if(c[k] == n - 1){
			dem++;
		}
	}
	
	cout << dem << "\n";
	
}

int main(){
    int T;
    scanf("%d", &T);
    while(T--){
    	process();
	}
	
}