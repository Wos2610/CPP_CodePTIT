#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

#define M 1000006

void process(){
	string s;
	cin >> s;
	int n = s.size();
	char s0[] = {'u', 'e', 'o', 'a', 'i', 'y'};
	string res = "";
	for(int i = 0; i < n; i++){
		if(s[i] >= 'A' && s[i] <= 'Z'){
			s[i] += 32;
		}
	}
	for(int i = 0; i < n; i++){
		int mark = 0;
		for(int j = 0; j < 6; j++){
			if(s[i] == s0[j]){
				mark = 1;
				break;
			}
		}
		if(mark == 0){
			res.push_back(s[i]);
		}
	}
	
	for(int i = 0; i < res.size(); i++){
		cout << "." << res[i];
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