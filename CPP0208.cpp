#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

#define M 1000006

int a[M];
int mark[M];

void process(){
	int n, k;
	cin >> n >> k;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a, a + n);
	cout << a[k - 1];
	cout << "\n";
}

int main(){
	int T;
	cin >> T;

	while(T--){
		process();
	}
}