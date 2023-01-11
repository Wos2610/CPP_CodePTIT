#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

#define M 1000006
#define MOD 1000000007

void process(){
	long long n, x;
	long long temp = 1;
	long long sum = 0;
	cin >> n >> x;
	long long a[n + 6] = {0};
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = n - 1; i >= 0; i--){
		sum = (sum + (temp * a[i]) % MOD) % MOD;
		temp = (temp * x) % MOD;
	}
	cout << sum;
	cout << "\n";
}

int main(){
	int T;
	cin >> T;
	while(T--){
		process();
	}
}
