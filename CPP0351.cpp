#include<iostream>
#include<string>
#include<math.h>
#include<vector>
#include<queue>
using namespace std;

#define M 10000006
#define MOD 1000000007

void process(){
	int c;
	cin >> c;
	cin.ignore();
	
	string s;
	getline(cin, s);
	
	vector<string> save;
	string temp = "";
	int n = s.size();
	for(int i = 0; i < n; i++){
		if( (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') ){
			temp += s[i];
		}
		else if(s[i] == ' ' && s[i - 1] != ' '){
			save.push_back(temp);
			temp = "";
		}
	}
	save.push_back(temp);
	
	int m = save.size();
	for(int i = 0; i < m; i++){
		if(save[i][0] >= 'a' && save[i][0] <= 'z'){
			save[i][0] -= 32;
		}
		for(int j = 1; j < save[i].size(); j++){
			if(save[i][j] >= 'A' && save[i][j] <= 'Z'){
				save[i][j] += 32;
			}
		}
//		cout << save[i] << " ";
	}
	
	if(c == 1){
		cout << save[m - 1] << " ";
		for(int i = 0; i < m - 1; i++){
			cout << save[i] << " ";
		}
	}
	else{
		for(int i = 1; i < m; i++){
			cout << save[i] << " ";
		}
		cout << save[0];
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