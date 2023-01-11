#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

#define M 1000006

int n;
int m[M];
vector<int> res;

int isPrime(long long n){
	if(n < 2){
		return 0;
	}
	for(long long i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			return 0;
		}
	}
	return 1;
}


void process(){
	long long l, r;
	cin >> l >> r;
	long long dem = 0;
	for(long long i = l; i <= r; i++){
		if(isPrime(i)){
			dem++;
		}
	}
	cout << dem << "\n";
}

int main(){
	int T;
	cin >> T;
	while(T--){
		process();
	}
}
