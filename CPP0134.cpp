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

void process(){
	int n, k;
	cin >> n >> k;
	int temp = 0;
	for(int i = 2; i * i <= n; i++){
		if(n % i == 0){
			while(n % i == 0){
				temp++;
				if(temp == k){
					cout << i;
					break;
				}
				n /= i;
			}
		}
		if(n == 1){
			break;
		}
	}
	if(n != 1){
		temp++;
		if(temp == k){
			cout << n;
		}
	}
	if(temp < k){
		cout << "-1";
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