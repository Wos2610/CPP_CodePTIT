// input : khi gặp 0 thì dừng lại

#include<iostream>
using namespace std;

long long giaiThua(int n){
	if(n == 0 || n == 1){
		return 1;
	}
	else{
		return n * giaiThua(n - 1);
	}
}
int main(){
	do{
		int n;
		cin >> n;
		if(n == 0){
			return 0;
		}
		long long gt = giaiThua(n);
		cout << gt << endl;
	}while(1);
	
	return 0;
}