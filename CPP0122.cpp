#include<iostream>
#include<string>

using namespace std;

long long gcd(long long a, long long b){
	while(a != 0){
		long long x = a;
		a = b % a;
		b = x;
	}
	return b;
}

long long lcm(long long a, long long b){
	return a * (b / gcd(a, b));
}
void process(){
	int n;
	cin >> n;
	long long res = 1;
	for(int i = 2; i <= n; i++){
		res = lcm(res, (long long)i);
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