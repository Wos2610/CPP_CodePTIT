#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007

vector<int> m(100006, 0);
	
bool cmp(int a, int b){
	if(m[a] == m[b]){
		return a < b;
	}
	return m[a] > m[b];
}

void process(){
	int n;
	cin >> n;
	vector<int> a(n + 6, 0);
	
	for(int i = 0; i < n; i++){
		cin >> a[i];
		m[a[i]]++;
	}
	
	sort(a.begin(), a.begin() + n, cmp);
	
	for(int i = 0; i < n; i++){
		cout << a[i] << " ";
		m[a[i]] = 0;
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