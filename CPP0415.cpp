#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

#define M 10000006



void process(){
	int n, m;
	cin >> n >> m;
	int a[n + 6];
	int b[m + 6];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = 0; i < m; i++){
		cin >> b[i];
	}
	sort(a, a + n);
	sort(b, b + m);
	
	long long res = (long long)a[n - 1] * b[0];
	cout << res;
	cout << "\n";
	
}

int main(){
	int T;
	cin >> T;
	while(T--){
		process();
	}
}