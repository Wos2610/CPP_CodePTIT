#include <bits/stdc++.h>
using namespace std;
int mod(string a,int k){
	int s=0;
	for(int i = 0;i < a.size(); i++){
		int n = 0;
		for(int j = i; j < a.size(); j++){
			n = (n * 10 + a[j] - '0') % k;
			if(n == 0) s++;
		}
	}
	return s;
} 

void process(){
	string a;
	cin >> a;
	cout << mod(a,8) - mod(a,24) << "\n";
}

int main(){ 
	int T;
	cin >> T;
	while(T--){
		process();
	}
}