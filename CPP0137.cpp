#include<iostream>
#include<string>
#include<math.h>
#include<vector>
using namespace std;

#define M 1000006

int mark[M];

vector<long long> save;

void sieve(){
	mark[0] = mark[1] = 1;
	for(long long i = 2; i <= M; i++){
		if(mark[i] == 0){
			for(long long j = i * i; j <= M; j += i){
				mark[j] = 1;
			}
		}
		
	}
}

void process(){
	long long l, r;
	cin >> l >> r;
	long long beg = sqrt(l);
	if(beg * beg != l){
		beg++;
	}
	long long end = sqrt(r);
	long long dem = 0;
	for(long long i = beg; i <= end; i++){
		if(mark[i] == 0){
			dem++;
		}
	}
	cout << dem;
	cout << "\n";
}

int main(){
	int T;
	cin >> T;
	sieve();
	while(T--){
		process();
	}
}