#include<iostream>
using namespace std;

int main(){
	int n,k;
	cin >> n;
	cin >> k;
	int count = 0;
	int l = 1;
	int r = n;
	while(l < r){
		if(l + r == k){
			count = (r - l + 1) / 2;
			l = l + count;
			r = r - count;
		}
		else if(l + r < k){
			l = l + (k - r - l);
		}
		else{
			r = r - (r + l - k);
		}
	}
	cout << count;
	return 0;
}