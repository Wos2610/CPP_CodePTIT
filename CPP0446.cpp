#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

#define M 1000006

int a[M];
int n, x;

void process(){
	cin >> n ;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	
	int sum = 99999999;
	int res = 0;
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			int temp = abs(a[i] + a[j]);
			if(temp < sum){
				sum = temp;
				res = a[i] + a[j];
			}
		}
	}
	cout << res;
	cout << "\n";
}

int main(){
	int T;
	cin >> T;
	while(T--){
		process();
	}
}