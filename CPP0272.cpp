#include<bits/stdc++.h>
#define MOD 1000000007
using namespace std;

long long pow(long long a, long long n){
	if(n == 1){
		return a;
	}
	if(n % 2 == 0){
		return (pow(a, n/2) * pow(a, n/2)) % MOD;
	}
	else{
		return (a * pow(a, n - 1)) % MOD;
	}
}

long long gcd(long long a, long long b){
	while(a != 0){
		long long x = a;
		a = b % a;
		b = x;
	}
	return b;
}

void process(){
	int n;
	cin >> n;
	int a[n + 6] = {0};
	
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	
	long long tich = a[0];
	long long ucln = a[0];
	
	for(int i = 1; i < n; i++){
		tich = (tich * a[i]) % MOD;
		ucln = gcd(ucln, a[i]);
	}
	
	long long res = pow(tich, ucln);
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