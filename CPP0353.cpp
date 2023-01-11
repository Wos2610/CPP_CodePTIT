#include<iostream>
#include<string>
#include<math.h>
#include<vector>
#include<queue>
#include<string>
#include<map>
using namespace std;

#define M 10000006
#define MOD 1000000007

vector<string> s0 = {"ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"};
char a[] = {'2', '3', '4', '5', '6', '7', '8', '9'};

int check(string s){
	int n = s.size();
	for(int i = 0; i <= n/2; i++){
		if(s[i] != s[n - 1 - i]){
			return 0;
		}
	}
	return 1;
}

void process(){
	string s;
	cin >> s;
	int n = s.size();
	for(int i = 0; i < n; i++){
		if(s[i] >= 'a' && s[i] <= 'z'){
			s[i] -= 32;
		}
	}
	string temp = "";
	for(int k = 0; k < n; k++){	
		if(s[k] >= 'A' && s[k] <= 'Z'){
			for(int i = 0; i < 8; i++){
				for(int j = 0; j < s0[i].size(); j++){
					if(s[k] == s0[i][j]){
						temp += a[i];
						break;
					}
				}
			}
		}
	}
	if(check(temp)){
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