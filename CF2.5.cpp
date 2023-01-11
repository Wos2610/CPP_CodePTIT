#include<iostream>
using namespace std;

unsigned long long factorial(int n){
	unsigned long long a = 1;
	for(int i = 2; i <= n; i++){
		a = ((a % 1000000007) * (i % 1000000007)) % 1000000007;
	}
	return a;
}

int main(){
	int n;
	cin >> n;
	cout << factorial(n);
	return 0;
}