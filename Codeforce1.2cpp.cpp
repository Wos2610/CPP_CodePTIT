#include<iostream>
using namespace std;

int main(){
	int n,m;
	cin >> n;
	cin >> m;
	int dem1 = 0;
	int dem2 = 0;
	int thuong = 0;
	if(m % n == 0){
		thuong = m / n;
	}
	else{
		cout << "-1";
		return 0;
	}
	while( (thuong > 1) && (thuong % 3 == 0) ){
		thuong /= 3;
		dem1++;
	}
	while( (thuong > 1) && (thuong % 2 == 0) ){
		thuong /= 2;
		dem2++;
	}
	if(thuong == 1){
		cout << dem1 + dem2;
	}
	else{
		cout << "-1";
	}
	return 0;
}