#include<iostream>
#include<string>
#include<vector>
using namespace std;

#define M 1000006

int mark[M];
vector<int> save;

void sieve(){
	mark[0] = mark[1] = 1;
	for(int i = 2; i * i <= M; i++){
		if(mark[i] == 0){
			for(int j = i * i; j <= M; j += i){
				mark[j] = 1;
			}
		}
		
	}
}

int gcd(int a, int b){
	while(a != 0){
		int x = a;
		a = b % a;
		b = x;
	}
	return b;
}

void process(){
	int n;
	cin >> n;
	int dem = 0;
	for(int i = 1; i <= n; i++){
		if(gcd(i, n) == 1){
			dem++;
		}
	}
	if(mark[dem] == 0){
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
	sieve();
	for(int i = 2; i <= M; i++){
		if(mark[i] == 0){
			save.push_back(i);	
		}
	}
	while(T--){
		process();
	}
}