#include<iostream>
using namespace std;

long long sum[1000000] = {0};
int main(){
	int n, Q;
	cin >> n;
	cin >> Q;
	int temp;
	for(int i = 1; i <= n; i++){
		cin >> temp;
		sum[i] = sum[i - 1] + temp;
	}
	while(Q > 0){
		int l,r;
		cin >> l;
		cin >> r;
		cout << sum[r] - sum[l - 1] << endl;
		Q--;
	}
	return 0;
}