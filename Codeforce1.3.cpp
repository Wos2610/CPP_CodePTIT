#include<iostream>
using namespace std;

long long ucln(long long a, long long b){
	while(a != 0){
		long long x = a;
		a = b % a;
		b = x;
	}
	return b;
}

long long bcnn(long long a, long long b){
	long long ucln1 = ucln(a,b);
	long long bcnn1 = b * (a / ucln1);
	return bcnn1;
}
int main(){
	int T;
	cin >> T;
	while(T > 0){
		long long a,b,c;
		cin >> a;
		cin >> b;
		cin >> c;
		
		long long ucln1 = ucln(ucln(a,b),c);
		long long bcnn1 = bcnn(bcnn(a,b), c);
		cout << ucln1 << " " << bcnn1 << endl;
		T--;
	}
	return 0;
}