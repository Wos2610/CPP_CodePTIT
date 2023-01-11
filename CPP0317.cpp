#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

#define M 1000006

int a[M];
int mark[M];

int isThuanNghich(string s){
	int n = s.size();
	for(int i = 0; i < n/2; i++){
		if(s[i] != s[n - i - 1]){
			return 0;
		}
	}
	return 1;
}

int check(string s){
	int n = s.size();
	for(int i = 0; i < n/2; i++){
		int temp = s[i] - '0';
		if(temp % 2 != 0){
			return 0;
		}
	}
	return 1;
}
void process(){
	string s;
	cin >> s;
	if(check(s) && isThuanNghich(s)){
		cout << "YES";
	}
	else{
		cout << "NO";
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