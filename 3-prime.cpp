#include<iostream>
#include<vector>
#include<math.h>

using namespace std;

#define M 1000000
vector<int> mark(M + 1, 1);

void sieve() {
	mark[0] = mark[1] = 0;
	for (int i = 2; i * i <= M; i++) {
		if (mark[i] == 1) {
			for (int j = i * i; j <= M; j += i) {
				mark[j] = 0;
			}
		}
	}
}

void check(long long n) {
	long long can = sqrt(n);
	if (can * can == n) {
		if (mark[can] == 1) {
			printf("YES\n");
			return;
		}
	}
	printf("NO\n");
}

int main() {
	int T;
	scanf("%d", &T);
	sieve();
	while (T--) {
		long long n;
		scanf("%lld", &n);
		check(n);
	}
}