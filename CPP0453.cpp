#include<iostream>
#include<string>
#include<math.h>
#include<vector>
#include<queue>
#include<string>
#include<map>
#include<algorithm>
#include<stdbool.h>
#include<bits/stdc++.h>
using namespace std;

#define M 10000006
#define MOD 1000000007


void process(){
	int n, k;
	cin >> n >> k;
	int a[n + 6];
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	
	sort(a + 1, a + 1 + n);
	cout << a[k];
	
	cout << "\n";
}

int main(){
	int T;
	cin >> T;
	cin.ignore();
	while(T--){
		process();
	}
}