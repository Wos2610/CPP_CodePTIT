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

class PhanSo{
	private:
		long long tu;
		long long mau;
	public:
		PhanSo(long long a, long long b){
			tu = a;
			mau = b;
		};
		friend ostream & operator << (ostream &out, const PhanSo &A){
			cout << A.tu << "/" << A.mau;
			return out;
		};
		
		friend istream & operator >> (istream &in, PhanSo &A){
			cin >> A.tu >> A.mau;
			return in;
		}
		
		void rutgon(){
			long long k = gcd(tu, mau);
			tu /= k;
			mau /= k;
		}
};


int main(){
    PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}