#include<iostream>
#include<vector>
#include<math.h>

using namespace std;

#define M 1000000
vector<int> minPrime(M + 1, 0);

void sieve() {
	for(int i = 2; i * i <= M; i++) {
		if (minPrime[i] == 0) {
			for(int j = i * i; j <= M; j += i) {
				if(minPrime[j] == 0){
					minPrime[j] = i;
				}
			}
		}
	}
	for(int i = 2; i <= M; i++){
		if(minPrime[i] == 0){
			minPrime[i] = i;
		}
	}
}

long long tong(int x){
	long long sum = 0;
	while(x != 1){
		sum += minPrime[x];
		x /= minPrime[x];
	}
	return sum;
}
int main() {
	int T;
	scanf("%d", &T);
	sieve();
	while (T--) {
		int n;
		scanf("%d", &n);
		long long sum = 0;
		for(int i = 0; i < n; i++){
			int x;
			scanf("%d", &x);
			sum += tong(x); 
		}
		printf("%lld\n", sum);
	}
	return 0;
}