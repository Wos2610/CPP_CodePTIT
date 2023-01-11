#include<iostream>
using namespace std;

int main(){
	int T;
	cin >> T;
	while(T--){
		int n;
		cin >> n;
		int sum = 0;
		while(n > 0){
			sum += n % 10;
			n /= 10;
		}
		if(sum >= 10){
			while(sum >= 10){
				int m = sum;
				sum = 0;
				while(m > 0){
					sum += m % 10;
					m /= 10;
				}
			}
			cout << sum << endl;
		}
		else{
			cout << sum << endl;
		}
	}
	
	return 0;
}