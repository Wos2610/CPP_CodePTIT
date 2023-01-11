#include<iostream>
#include<string>
#include<math.h>
#include<vector>
using namespace std;

#define M 10000006
#define MOD 1000000007

void process(){
	long long x, y, p;
	cin >> x >> y >> p;
	long long res = x % p;
	for(long long i = 2; i <= y; i++){
		res = (res * x) % p;
	}
	cout << res;
	cout << "\n";
}

int main(){
	int T;
	cin >> T;
	while(T--){
		process();
	}
}