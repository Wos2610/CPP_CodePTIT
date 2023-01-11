#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

#define M 1000006

int n;

int isPrime(int n){
	if(n == 0 || n == 1){
		return 0;
	}
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			return 0;
		}
	}
	return 1;
}

int checkIn(int n){
	int cs2 = 0;
	int cs1 = n % 10;
	n/= 10;
	while(n > 0){
		cs2 = cs1;
		cs1 = n % 10;
		n /= 10;
		if(cs1 >= cs2){
			return 0;
		}
	}
	return 1;
}

int checkDe(int n){
	int cs2 = 0;
	int cs1 = n % 10;
	n /= 10;
	while(n > 0){
		cs2 = cs1;
		cs1 = n % 10;
		n /= 10;
		if(cs1 <= cs2){
			return 0;
		}
	}
	return 1;
}

int a[] = {0, 10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000};
int b[] = {9, 99, 999, 9999, 99999, 999999, 9999999, 99999999, 999999999};

void process(){
	cin >> n;
	if(n == 9){
		cout << "0\n";
		return;
	}
	int beg = a[n - 1];
	int end = b[n - 1];
	int dem = 0;
	for(int i = beg; i <= end; i++){
		if(checkIn(i) || checkDe(i)){
			if(isPrime(i)){
				dem++;
			}
		}
	}
	cout << dem;
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
