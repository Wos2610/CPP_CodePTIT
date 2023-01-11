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
		}
		
		void rutgon(){
			long long k = gcd(tu, mau);
			tu /= k;
			mau /= k;
		}
		
		friend ostream & operator << (ostream &out, const PhanSo &A){
			cout << A.tu << "/" << A.mau;
			return out;
		};
		
		friend istream & operator >> (istream &in, PhanSo &A){
			cin >> A.tu >> A.mau;
			return in;
		}
		
		PhanSo operator + (PhanSo &A){
			PhanSo q(1, 1);
			q.mau = mau * A.mau;
			q.tu = tu * A.mau + mau * A.tu;
			q.rutgon();
			return q;
		}
};


int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}