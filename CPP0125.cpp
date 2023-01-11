#include<iostream>
#include<string>

using namespace std;

#define M 1000006

int mark[M];
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
int check(int n){
	if(n == 0 || n == 1){
		return 0;
	}
	for(int i = 2; i * i <= n; i++){
		if(n % i == 0){
			return 0;
		}
	}
	return 1;
}

void process(){
	int a,b;
	cin >> a >> b;
	if(a > b){
		swap(a,b);
	}
	sieve();
	for(int i = a; i <= b; i++){
		if(check(i)){
			cout << i << " ";
		}
	}
	cout << "\n";
}

int main(){
	int T;
	T = 1;
	while(T--){
		process();
	}
}