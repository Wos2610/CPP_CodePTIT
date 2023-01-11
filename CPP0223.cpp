#include<iostream>
#include<string>
#include<vector>
#include<map>

using namespace std;

#define M 1000006

void process(){
	int n, m;
	cin >> n >> m;
	int a[n + 6][m + 6];
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			cin >> a[i][j];
		}
	}
	
	int ibe = 1, ien = n;
	int jbe = 1, jen = m;
	
	while(ibe <= (n + 1)/2 && jbe <= (m + 1)/2){
		for(int j = jbe; j <= jen; j++){
			cout << a[ibe][j] << " ";
		}
		for(int i = ibe + 1; i <= ien; i++){
			cout << a[i][jen] << " ";
		}
		if(ien > ibe){
			for(int j = jen - 1; j >= jbe; j--){
				cout << a[ien][j] << " ";
			}
		}
		if(jen > jbe){
			for(int i = ien - 1; i >= ibe + 1; i--){
				cout << a[i][jbe] << " ";
			}
		}
		
		ibe++;
		jbe++;
		ien--;
		jen--;
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