#include<iostream>
#include<string>

using namespace std;

int check(string s){
	int n = s.size();
	for(int i = 0; i < n; i++){
		if(s[i] != '0' && s[i] != '6' && s[i] != '8'){
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