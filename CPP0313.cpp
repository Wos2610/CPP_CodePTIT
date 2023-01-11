#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

#define M 1000006

int a[M];
int mark[M];

void process(){
	string s, s0;
	getline(cin, s);
	cin >> s0;
	
	vector<string> save;
	int n = s.size();
	string temp = "";
	for(int i = 0; i < n; i++){
		if(s[i] == ' '){
			save.push_back(temp);
			temp = "";
		}
		else{
			temp += s[i];
		}
	}
	
	save.push_back(temp);
	
	for(int i = 0;i < save.size(); i++){
		if(save[i] != s0){
			cout << save[i] << " ";
		}
	}
	cout << "\n";
	
}

int main(){
	int T;
	T = 1;
	while(T--){
		process();
	}
}