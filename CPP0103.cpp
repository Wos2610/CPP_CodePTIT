#include<iostream>

using namespace std;

void process(){
	int n;
	scanf("%d", &n);
	double res = 1;
	for(int i = 2; i <= n; i++){
		res += (double)1/i;
	}
	printf("%.4lf", res);
}

int main(){
	int T;
	T = 1;
//	cin >> T;
	while(T--){
		process();
	}
}