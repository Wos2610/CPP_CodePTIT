#include<iostream>
#include<string>
#include<vector>
using namespace std;

#define M 1000006

void process(){
	long long n, k;
	cin >> n >> k;	
	long long temp = 1;
	long long sum = 0;
	while(temp <= n){
		sum += temp % k;
		temp++;
	}
	if(sum == k){
		cout << "1";
	}
	else{
		cout << "0";
	}
	cout << "\n";
}

int main(){
	int T;
	cin >> T;

	while(T--){
		process();
	}
}