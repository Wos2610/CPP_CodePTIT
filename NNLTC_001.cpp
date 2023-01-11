#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007


int main(){ 
	int n;
	vector<int> a;
	map<int, int> m;
	while(cin >> n){
		a.push_back(n);
	}
	
	for(int i = 0; i < a.size(); i++){
		m[a[i]]++;
	}
	
	for(int i = 0; i < a.size(); i++){
		if(m[a[i]] != 0){
			cout << a[i] << " " << m[a[i]] << "\n";
			m[a[i]] = 0;
		}
	}
	
}