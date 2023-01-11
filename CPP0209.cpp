#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

#define M 1000006

int a[M];
int mark[M];

void process(){
	int f[10006] = {0};
	
	int n, q;
	cin >> n >> q;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
		f[i] = f[i - 1] + a[i];
	}
	while(q--){
		int l, r;
		cin >> l >> r;
		cout << f[r] - f[l - 1];
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