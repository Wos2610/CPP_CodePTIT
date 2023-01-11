#include<iostream>
#include<string>

using namespace std;

void process(){
	string s;
	cin >> s;
	int n = s.size();
	
	for(int i = 0; i < n - 2; i++){
		if(s[i] == '0' && s[i + 1] == '8' && s[i + 2] == '4'){
			s.erase(i,3);
			break;
		}
	}
	cout << s << "\n";
}

int main(){
	int T;
	cin >> T;
	while(T--){
		process();
	}
}