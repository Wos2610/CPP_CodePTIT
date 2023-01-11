#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

#define M 1000006

struct PhanSo{
	long long tu;
	long long mau;
};

void nhap(PhanSo &A){
	cin >> A.tu >> A.mau;
}

long long gcd(long long a, long long b){
	while(a != 0){
		long long x = a;
		a = b % a;
		b = x;
	}
	return b;
}
void rutgon(PhanSo &A){
	long long g = gcd(A.tu, A.mau);
	A.tu /= g;
	A.mau /= g;
}

void in(PhanSo A){
	cout << A.tu << "/" << A.mau ;
}

int main(){
    struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}