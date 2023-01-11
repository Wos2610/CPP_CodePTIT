#include<iostream>
#include<string>
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
	long long n;
	cin >> n;
	long long dem = 0;
	for(long long i = 0; ; i++){
		long long k = save[i] * save[i];
		if(k <= n){
			dem++;
		}
		else{
			break;
		}
	}
	cout << dem;
	cout << "\n";
}

int main(){
	int T;
	cin >> T;
	sieve();
	for(long long i = 2; i <= M; i++){
		if(mark[i] == 0){
			save.push_back(i);	
		}
	}
	while(T--){
		process();
	}
}