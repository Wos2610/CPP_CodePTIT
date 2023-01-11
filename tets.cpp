#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    cout << n << " = ";
    if(n % 2 != 0){
    	cout << n/2 << " + " << n/2 + 1;
	}
	else{
		int begin = 0;
		int k = 0;
		for(int i = 3; i <= n/2; i++){
			if(2*n % i == 0){
				int temp = 2*n/i;
				begin = (temp - i + 1)/2;
				k = i;
				break;
			}
		}
		if(begin == 0){
			cout << "IMPOSSIBLE";
		}
		else{
			for(int i = 0; i < k; i++){
				cout << i + begin;
				if(i != k - 1){
					cout << " + ";
				}
			}
		}
	}
}