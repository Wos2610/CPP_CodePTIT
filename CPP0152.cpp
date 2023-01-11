#include<iostream>
#include<string>
#include<vector>
using namespace std;

#define M 1000006

void process(){
	long long a, m;
	cin >> a >> m;	
	long long q = 0;
	while(1){
		long long s = q * m + 1;
		if(s/a >= m){
			cout << "-1";
			break;
		}
		if(s % a == 0){
			cout << s/a;
			break;
		}
		q++;
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