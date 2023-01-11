#include<iostream>
#include<string>

using namespace std;

int check(string s){
	int n = s.size();
	if(s[n - 2] == '8' && s[n - 1] == '6'){
		return 1;
	}
	return 0;
}

void process(){
	string s;
	cin >> s;
	
	if(check(s)){
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