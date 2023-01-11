#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

#define M 1000006

int a[M];

void process(){
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a, a + n);
	int res = 999999999;
	for(int i = 0; i < n - 1; i++){
		int temp = a[i + 1] - a[i];
		if(temp < res){
			res = temp;
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