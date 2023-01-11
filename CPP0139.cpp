#include<iostream>
#include<string>
#include<math.h>
#include<vector>
using namespace std;

#define M 10000006

int isPrime(long long n){
	if(n < 2){
		return 0;
	}
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			return 0;
		}
	}
	return 1;
}

long long tongCS(long long x){
	long long sum = 0;
	while(x > 0){
		sum += x % 10;
		x /= 10;
	}
	return sum;
}

int check(long long n){
	if(isPrime(n) == 0){
		long long tongN = tongCS(n);
		long long sum = 0;
		for(int i = 2; i <= sqrt(n); i++){
			if(n % i == 0){
				while(n % i == 0){
					sum += tongCS(i);
					n /= i;
				}
				if(n == 1){
					break;
				}
			}
		}
		if(n != 1){
			sum += tongCS(n);
		}
//		cout << tongN << " " << sum << "\n";
		if(tongN == sum){
			return 1;
		}
	}
	return 0;
}

void process(){
	long long n;
	cin >> n;
	if(check(n)){
		cout << "YES";
	}
	else{
		cout << "NO";
	}
	cout << "\n";
}

int main(){
	int T;
	cin >> T;
	while(T--){
		process();
	}
}