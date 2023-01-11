#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007


void process(){
	int n, p;
	cin >> n >> p;
	long long res = 0;
	long long i = 2;
	while(i <= n){
		long long temp = i;
		while(temp % p == 0){
			res++;
			temp /= p;
		}
		i++;
	}
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