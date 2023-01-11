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
	cin >> A.tu;
	cin >> A.mau;
}

long long gcd(long long a, long long b){
	while(a != 0){
		long long x = a;
		a = b % a;
		b = x;
	}
	return b;
}

PhanSo tong(PhanSo &a, PhanSo &b){
	PhanSo res;
	res.mau = a.mau * b.mau;
	res.tu = a.tu * b.mau + a.mau * b.tu;
	long long g = gcd(res.tu, res.mau);
	res.mau /= g;
	res.tu /= g;
	return res;
}
void in(PhanSo a){
	cout << a.tu << "/" << a.mau;
}

int main(){
    struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}