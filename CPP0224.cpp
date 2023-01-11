#include <bits/stdc++.h>
using namespace std;
int a[106][106];
int n, m;

void DFS(int i, int j){
    if(i == 0 || j == 0 || i == n + 1 || j == m + 1){
        return;
    }
    if(a[i][j] == 0){
        return;
    }
    a[i][j] = 0;
    DFS(i + 1, j);
    DFS(i, j + 1);
    DFS(i - 1, j);
    DFS(i, j - 1);
    DFS(i - 1, j - 1);
    DFS(i + 1, j - 1);
    DFS(i + 1, j + 1);
    DFS(i - 1, j + 1);
}

void process(){
	cin >> n >> m;

	for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> a[i][j];
        }
	}

	int dem = 0;

	for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(a[i][j] == 1){
                dem++;
                DFS(i, j);
            }
        }
	}

	cout << dem;
	cout << "\n";
}

int main(){
	int T;
	cin >> T;
	while(T--){
		process();
	}
}
