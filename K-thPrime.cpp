#include<iostream>
#include<vector>
#include<math.h>

using namespace std;

#define M 8000000
vector<int> mark(M + 1, 1);
vector<int> save;

void sieve() {
	int index = 0;
	mark[0] = mark[1] = 0;
	for (int i = 2; i * i <= M; i++) {
		if (mark[i] == 1) {
			for (int j = i * i; j <= M; j += i) {
				mark[j] = 0;
			}
		}
	}
	for(int i = 2; i <= M; i++){
		if(mark[i] == 1){
			save.emplace_back(i);
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
		printf("%d\n", save[n - 1]);
	}
	return 0;
}