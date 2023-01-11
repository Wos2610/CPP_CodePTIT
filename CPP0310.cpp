#include<iostream>
#include<string>
#include<math.h>
#include<vector>
#include<queue>
#include<string>
using namespace std;

#define M 10000006
#define MOD 1000000007

long long minNum(string s){
	int n = s.size();
	for(int i = 0; i < n; i++){
		if(s[i] == '6'){
			s[i] = '5';
		}
	}
	
	long long x = 0;
	for(int i = 0; i < n; i++){
		x = x * 10 + s[i] - '0';
	}
	return x;
}

long long maxNum(string s){
	int n = s.size();
	for(int i = 0; i < n; i++){
		if(s[i] == '5'){
			s[i] = '6';
		}
	}
	
	long long x = 0;
	for(int i = 0; i < n; i++){
		x = x * 10 + s[i] - '0';
	}
	return x;
}


void process(){
	string x1, x2;
	cin >> x1 >> x2;
	long long minSum = minNum(x1) + minNum(x2);
	long long maxSum = maxNum(x1) + maxNum(x2);
	
	cout << minSum << " " << maxSum;
	cout << "\n";
}

int main(){
	int T;
	cin >> T;
	while(T--){
		process();
	}
}