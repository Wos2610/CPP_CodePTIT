#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	long long sum = (pow(2,n) - 1) * ( pow(2,n) ) * 0.5;
	cout << sum;
	return 0;
}