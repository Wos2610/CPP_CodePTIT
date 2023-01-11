#include<iostream>
using namespace std;

int main(){
	long long n;
	cin >> n;
	
	long long temp = 0;
	for(int i = 1; i <= 10000000000; i++){
		temp = temp + 3*i;
		if(n <= temp){
			long long sum = temp - 3*i + 2*i;
			if(n >= sum){
				cout << i;
				return 0;
			}
		}
	}
}