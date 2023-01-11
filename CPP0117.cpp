#include<iostream>
#include<string>

using namespace std;

void process(){
	int n;
	cin >> n;
	int sum = 0;
	while(n > 0){
		sum += n % 10;
		n /= 10;
		if(sum >= 0 && sum <= 9 && n == 0){
			break;
		}
		if(n == 0){
			n = sum;
			sum = 0;
		}
	}
	cout << sum;
	cout << "\n";
}

int main(){
	int T;
	cin >> T;
	while(T--){
		process();
	}
}