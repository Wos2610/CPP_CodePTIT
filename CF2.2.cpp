#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	if(n == 0 || n == 1){
		cout << "NO";
		return 0;
	}
	else{
		for(int i = 2; i*i <= n; i++){
			if(n % i == 0){
				cout << "NO";
				return 0;
			}
		}
		cout << "YES";
	}
	return 0;
}