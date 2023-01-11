#include<iostream>
using namespace std;

int main(){
	while(1){
		long long a, b;
		cin >> a;
		cin >> b;
		long long tich = a * b;
		if( (a != 0) || (b != 0) ){
			while(a != 0){
				long long x = a;
				a = b % a;
				b = x;
			}
			cout << b << " " << tich/b << endl;
		}
		else{
			return 0;
		}
	}	
}