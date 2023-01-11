#include<iostream>
#include<string>
#include<math.h>
#include<vector>
using namespace std;

#define M 10000006
#define MOD 1000000007


void process(){
	string s;
	getline(cin, s);
	int n = s.size();
	
	vector<string> res;
	
	string temp = "";
	for(int i = 0; i < n; i++){
		if(s[i] == ' '){
			res.push_back(temp);
			temp = "";
		}
		else{
			temp += s[i];
		}
	}
	
	res.push_back(temp);
	
	for(int i = res.size() - 1; i >= 0; i--){
		cout << res[i] << " ";
	}
	cout << "\n";
}

int main(){
	int T;
	cin >> T;
	cin.ignore();
	while(T--){
		process();
	}
}