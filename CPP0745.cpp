#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007

long long f[1006];

long long fibo(int n){
	if(n == 0 ){
		return 0;
	}
	if(n == 1){
		return 1;
	}
	if(f[n] == 0){
		f[n] = (fibo(n - 1) + fibo(n - 2)) % MOD;
	}
	return f[n] % MOD;
}

void process(){
	int n;
	cin >> n;
	cout << fibo(n);
	cout << "\n";
}

int main(){ 
	int T;
	cin >> T;
	while(T--){
		process();
	}
}