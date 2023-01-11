#include<iostream>
using namespace std;

bool ngTo(int n){
	if(n == 0 || n == 1){
		return false;
	}
	for(int i = 2; i*i <= n; i++){
		if(n % i == 0){
			return false;
		}
	}
	return true;
}

long long tongCS(int n){
	long long sum = 0;
	while(n > 0){
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

long long tongKhongNgTo(int n){
	long long sum = 0;
	for(int i = 2; i < n; i++){
		if(n % i == 0){
			if( ngTo(i) ){
				sum += tongCS(i);
			}
			else{
				sum += tongKhongNgTo(i);
			}
		}
	} 
	return sum;
}

int main(){
	int n;
	cin >> n;
	if( ngTo(n) ){
		cout << tongCS(n);
	}
	else{
		cout << tongKhongNgTo(n);
	}
	return 0;
}