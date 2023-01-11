#include<iostream>
#include<string>
#include<math.h>
#include<vector>
using namespace std;

#define M 10000006
#define MOD 1000000007

int isLuckyNum(long long n){
	long long sum = 0;
	while(n > 0){
		sum += n % 10;
		n /= 10;
	}
	if(sum == 0){
		return 0;
	}
	if(sum % 9 == 0){
		return 1;
	}
	return 0;
}

void process(){
	string s;
	cin >> s;
	int n = s.size();
	long long sum = 0;
	for(int i = 0; i < n; i++){
		sum += s[i] - '0';
	}
	if(isLuckyNum(sum)){
		cout << "1";
	}
	else{
		cout << "0";
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