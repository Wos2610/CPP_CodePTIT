#include<iostream>
#include<math.h>
using namespace std;

#define M 1000006

void process(){
	long long n;
	cin >> n;
	for(int i = 2; i * i <= n; i++){
		if(n % i == 0){
			while(n % i == 0){
				cout << i << " ";
				n /= i;
			}
		}
		if(n == 1){
			break;
		}
	}
	if(n > 1){
		cout << n;
	}
	cout << "\n";
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int T;
	cin >> T;
	while(T--){
		process();
	}
}