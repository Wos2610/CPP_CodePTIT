#include<iostream>
#include<string>

using namespace std;

void process(){
	long long a, b;
	cin >> a >> b;
	long long tich = a * b;
	while(a != 0){
		int x = a;
		a = b % a;
		b = x;
	}
	
	long long gcd = tich/b;
	cout << gcd << " " << b;
	cout << "\n";
}

int main(){
	int T;
	cin >> T;
	while(T--){
		process();
	}
}