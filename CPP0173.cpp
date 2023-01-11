#include<iostream>
#include<string>
#include<math.h>
#include<vector>
using namespace std;

#define M 1000006

long long t[100];

long long lcm(long long a, long long b){
	long long tich = a * b;
	while(a != 0){
		long long x = a;
		a = b % a;
		b = x;
	}
	return tich/b;
}

void process(){
	long long x, y, z, n;
	scanf("%lld%lld%lld%lld", &x, &y, &z, &n);
	
	
	long long temp = lcm(x, lcm(y, z));
	long long res = 0;
	if(temp >= t[n + 1]){
			printf("-1\n");
			return;
	}
	else{
//		res = temp * (long long)ceil(b[n]/temp);
		cout << temp * (long long)ceil(t[n]/temp) << endl;
//		printf("%lld\n", res);
	}
	
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int T;
	cin >> T;
	t[1] = 1; 
	for(int i = 2; i <= 20; i++){
		t[i] = t[i - 1] * 10;
	}
	while(T--){
		process();
	}
}