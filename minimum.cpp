#include<iostream>
#include<vector>
#include<math.h>

using namespace std;

#define M 1000006
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
	if(mark[n] == 1){
		printf("%d\n", n);
	}
	else{
		int i;
		for(i = n; ;i++){
			if(mark[i] == 1){
				printf("%d\n", i);
				return;
			}
		}
	}
}

int main() {
	int T;
	scanf("%d", &T);
	sieve();
	while (T--) {
		int n;
		scanf("%d", &n);
		check(n);
	}
}