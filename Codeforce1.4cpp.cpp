#include<iostream>
using namespace std;

int main(){
	int T;
	cin >> T;
	while(T > 0){
		long long n;
		cin >> n;
		
		while(n % 2 == 0){
			n /= 2;
			cout <<"2 ";
		}
		
		for(int i = 3 ; i * i <= n; i = i + 2){
			while(n % i == 0){
				n /= i;
				cout << i << " ";
			}
		}
		if(n > 1){
			cout << n;
		}
		cout << "\n";
		T--;
	}
	return 0;
}