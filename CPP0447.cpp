#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

#define M 1000006

int a[M];
int n, k;

void process(){
	cin >> n >> k ;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	
	sort(a, a + n);
	
	for(int i = n - 1; i > n - 1 - k; i--){
		cout << a[i] << " ";
	}
	cout << "\n";
}

int main(){
	int T;
	cin >> T;
	while(T--){
		process();
	}
}