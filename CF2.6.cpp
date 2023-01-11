#include<iostream>
#include<math.h>
using namespace std;

int main(){
	long long a;
	int b;
	cin >> a >> b;
	long long luyThua = 1;
	for(int i = 1; i <= b; i++){
		luyThua = ((luyThua % 1000000007) * (a % 1000000007)) % 1000000007;
	}
	cout << luyThua;
	return 0;
}