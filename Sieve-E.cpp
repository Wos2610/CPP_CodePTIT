#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

#define M 1000000
vector<int> prime(1000006, 0);
vector<long long> f(1000006, 0);
int dem[1000006];

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

void factorize(vector<long long> f, int dem[]) {
	dem[0] = 0;
	dem[1] = 0;
	int tmp = 0;
	for (int i = 2; i <= 1000006; i++) {
		int m = i;
		long long res = 1;
		while (m != 1) {
			int k = prime[m];
			int count = 0;
			while (m % k == 0) {
				m /= k;
				count++;
			}
			res *= (count + 1);
		}
		if(prime[res] == res){
			tmp++;
		}
		dem[i] = tmp;
	}
}

int main() {
	int T;
	scanf("%d", &T);

	sieve();
	factorize(f, dem);

	while (T--) {
		int a, b;
		scanf("%d%d", &a, &b);
		printf("%d\n", dem[b] - dem[a - 1]);
	}
	return 0;
}