#include<iostream>

using namespace std;

void process(){
	long long n;
	cin >> n;
	long long res = n * (n + 1) / 2;
	cout << res << "\n";
}

int main(){
	int T;
	cin >> T;
	while(T--){
		process();
	}
}