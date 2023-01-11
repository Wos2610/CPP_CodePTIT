#include<iostream>
#include<string>

using namespace std;

int check(string s){
	int n = s.size();
	for(int i = 0; i < n - 1; i++){
		int a = s[i] - '0';
		int b = s[i + 1] - '0';
		if(b != a - 1 && b != a + 1){
			return 0;
		}
	}
	return 1;
}
void process(){
	string s;
	cin >> s;
	
	if(check(s)){
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