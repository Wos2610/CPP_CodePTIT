#include<iostream>
#include<string>
#include<vector>
using namespace std;

#define M 1000006

int mark[M];
vector<int> save;

long long gcd(long long a, long long b){
	long long tich = a * b;
	while(a != 0){
		long long x = a;
		a = b % a;
		b = x;
	}
	return b;
}

void process(){
	long long a, x, y;
	cin >> a >> x >> y;
	
	long long temp = gcd(x, y);
	
	for(int i = 1; i <= temp; i++){
		cout << a;
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