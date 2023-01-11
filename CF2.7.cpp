#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	if(n == 1){
		cout <<"1";
		return 0;
	}
	cout <<"1\n";
	for(int i = 2; i <=n; i++){
		cout << 2*i - 2;
		for(int j = 1; j <= i - 2; j++){
			cout << " ";
		}
		cout << 2*i - 1 << endl;
	}
	for(int i = n + 1; i <= (2*n - 2); i++){
		cout << 2*i - 2;
		for(int j = 1; j <= 2*n-i-2; j++){
			cout << " ";
		}
		cout << 2*i - 1 << endl;
	}
	cout << 4*n - 4;
	return 0;
}