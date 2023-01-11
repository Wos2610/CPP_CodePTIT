#include<iostream>
#include<string>
#include<vector>
#include<map>

using namespace std;

#define M 1000006
long long f[M];
map<long long, int> m;
void fibo(){
	f[0] = 0;
	f[1] = f[2] = 1;
	m[0] = m[1] = 1;
	for(int i = 3; i <= 95; i++){
		f[i] = f[i - 1] + f[i - 2];
		m[f[i]] = 1;
	}
}

void process(){
	int n, x;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> x;
		if(m[x]){
			cout << x << " ";
		}
	}
	cout << "\n";
}

int main(){
	int T;
	cin >> T;
	fibo();
	while(T--){
		process();
	}
}