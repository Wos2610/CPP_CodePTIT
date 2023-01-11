#include<bits/stdc++.h>

using namespace std;


void process(){
	int n, m, k;
	cin >> n >> m >> k;
	int a[n + 6][m + 6];
	
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			cin >> a[i][j];
		}
	}
	
	int i1 = 1, in = n;
	int j1 = 1, jm = m;
	
	vector<int> res;
	while(i1 <= (n + 1)/2 && j1 <= (m + 1)/2){
		for(int j = j1; j <= jm; j++){
			res.push_back(a[i1][j]);
		}
		
		for(int i = i1 + 1; i <= in; i++){
			res.push_back(a[i][jm]);
		}
		if(in > i1){
			for(int j = jm - 1; j >= j1 ; j--){
				res.push_back(a[in][j]);
			}
		}
		
		if(jm > j1){
			for(int i = in - 1; i >= i1 + 1; i--){
				res.push_back(a[i][j1]);
			}	
		}
		i1++;
		in--;
		j1++;
		jm--;
	}
	cout << res[k - 1];
	cout << "\n";
}

int main(){
	int T;
	cin >> T;
	while(T--){
		process();
	}

}