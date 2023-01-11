#include <bits/stdc++.h>
using namespace std;

void process(){
	long long b, p, s=0;
	cin >> b >> p;
	for(long long i = 1; i < p; i++){ 
	    if((i*i) % p == 1){
	        long long k = i + p*(b/p); 
	        if(k>b) k -= p; 
	        s += (k-i)/p+1; 
	    } 
	}
	cout << s;
	cout << "\n";	
}

int main(){ 
	int T;
	cin >> T;
	while(T--){
		process();
	}
}