#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

#define M 1000006

int n;
int m[M];

void sieve(){
	m[1] = 1;
	for(int i = 2; i * i <= M; i++){
		if(m[i] == 0){
			for(int j = i * i ; j <= M; j+= i){
				if(m[j] == 0){
					m[j] = i;
				}
			}
		}
	}
	for(int i = 2; i <= M; i++){
		if(m[i] == 0){
			m[i] = i;
		}
	}
}
void process(){
	cin >> n;
	for(int i = 1; i <= n; i++){
		cout << m[i] << " ";
	}
	cout << "\n";
}

int main(){
	int T;
	cin >> T;
	sieve();
	while(T--){
		process();
	}
}
