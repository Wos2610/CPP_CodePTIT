#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

#define M 1000000
vector<int> prime(1000006, 0);

void sieve() {
	prime[1] = 1;
	for (int i = 2; i * i <= M; i++) {
		if (prime[i] == 0) {
			for (int j = i * i; j <= M; j += i) {
				if (prime[j] == 0) {
					prime[j] = i;
				}
			}
		}
	}
	for (int i = 2; i <= 1000006; i++) {
		if (prime[i] == 0) {
			prime[i] = i;
		}
	}
}

void factorize(long long f[]) {
	f[0] = 0;
	f[1] = 1;
	for (int i = 2; i <= 1000000; i++) {
		int m = i;
		long long res = 1;
		long long tmp = 0;
		while (m != 1) {
			int k = prime[m];
			int count = 0;
			while (m % k == 0) {
				m /= k;
				count++;
			}
			tmp = (pow(k, count + 1) - 1) / (k - 1);
			res *= tmp;
		}
		f[i] = f[i - 1] + abs(i - (res - i));
	}
}
long long f[1000000] = { 0 };
int main() {
	int T;
	scanf("%d", &T);

	sieve();
	factorize(f);

	while (T--) {
		int a, b;
		scanf("%d%d", &a, &b);
		printf("%lld\n", f[b] - f[a - 1]);
	}
	return 0;
}