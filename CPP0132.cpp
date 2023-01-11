#include<iostream>
#include<string>
#include<math.h>
using namespace std;

#define M 1000006

void process(){
	long long n;
	cin >> n;
	long long m = -1;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			if(m < i){
				m = i;
			}
			while(n % i == 0){
				n /= i;
			}
		}
		if(n == 1){
			break;
		}
	}
	if(n > 1){
		if(n > m){
			m = n;
		}
	}
	cout << m;
	cout << "\n";
}

int main(){
	int T;
	cin >> T;
	
	while(T--){
		process();
	}
}