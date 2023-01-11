#include<iostream>
using namespace std;

int main(){
	int T;
	cin >> T;
	while(T--){
		long long n;
		cin >> n;
		long long m = n;
		long long dao = 0;
		while(m > 0){
			dao = dao * 10 + m % 10;
			m /= 10;
		}
		if(dao == n){
			cout << "YES\n";
		}
		else{
			cout << "NO\n";
		}
	}
	
	return 0;
}