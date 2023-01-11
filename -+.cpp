#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int T;
	cin >> T;
	while(T > 0){
		long long n;
		cin >> n;
		long long sum = 1 + n;
		for(int i = 2; i < sqrt(n) ; i++){
			if(n % i == 0){
				sum = sum + i + (n/i);
			}
		}
		if( sqrt(n) * sqrt(n) == n ){
			sum += sqrt(n);
		}
		cout << sum << endl;
		T--;
	}
	return 0;
}