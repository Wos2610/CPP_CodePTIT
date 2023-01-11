#include<iostream>
using namespace std;

long long fibo(int n){
	if(n == 0){
		return 0;
	}
	else if(n == 1){
		return 1;
	}
	else{
		int first = 0;
		int second = 1;
		for(int i = 2; i <= n; i++){
			int temp = 	((first % 1000000007) + (second % 1000000007)) % 1000000007;
			first = second;
			second = temp;
		}
		return second;
	}
}
int main(){
	int T;
	cin >> T;
	while(T > 0){
		int n;
		cin >> n;
		cout << fibo(n) << endl;
		T--;
	}
	return 0;
}