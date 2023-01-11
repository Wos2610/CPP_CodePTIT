#include<iostream>
#include<string>
#include<vector>
using namespace std;

#define M 1000006

long long f[100];
long long fibo(int n){
	if(n == 1 || n == 2){
		return 1;
	}
	if(f[n] != 0){
		return f[n];
	}
	f[n] = fibo(n - 1) + fibo(n - 2);
	return f[n];
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