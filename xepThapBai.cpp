#include<iostream>
using namespace std;

int main(){
	long long n;
	cin >> n;
	long long i;
	long long sum = 0;
	for(i = 1; ; i++){
		sum = (3*i*i + i)/2;
		if(sum == n){
			cout << i;
			return 0;
		}
		else if(sum > n){
			cout << i - 1;
			return 0;
		}
	}
	return 0;
}