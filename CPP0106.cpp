#include<iostream>
#include<string>

using namespace std;

int check(string s){
	int n = s.size();
	for(int i = 0; i < n/2; i++){
		if(s[i] != s[n - i - 1]){
			return 0;
		}
	}
	return 1;
}

void process(){
	string s;
	cin >> s;
	if(check(s)){
		cout << "YES\n";
	}
	else{
		cout << "NO\n";
	}
}

int main(){
	int T;
//	T = 1;
	cin >> T;
	while(T--){
		process();
	}
}