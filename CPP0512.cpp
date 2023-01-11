#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

#define M 1000006

long long gcd(long long a, long long b){
	while(a != 0){
		long long temp = a;
		a =  b % a;
		b = temp;
	}
	return b;
}

struct PhanSo{
	long long tu;
	long long mau;
};

void rutgon(PhanSo &A){
	long long k = gcd(A.tu, A.mau);
	A.tu /= k;
	A.mau /= k;
}

PhanSo operator + (PhanSo &A, PhanSo &B){
	PhanSo res;
	res.mau = B.mau * A.mau;
	res.tu = B.tu * A.mau + B.mau * A.tu;
	rutgon(res);
	return res;
}

PhanSo operator * (PhanSo &A, PhanSo &B){
	PhanSo res;
	res.mau = B.mau * A.mau;
	res.tu = B.tu * A.tu;
	rutgon(res);
	return res;
}


void process(PhanSo A, PhanSo B){
	PhanSo res1, res2;
	res1 = A + B;
	res1 = res1 * res1;
	cout << res1.tu << "/" << res1.mau << " ";
	
	res2 = A * B;
	res2 = res2 * res1;
	cout << res2.tu << "/" << res2.mau << "\n";
}

int main(){
    int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}