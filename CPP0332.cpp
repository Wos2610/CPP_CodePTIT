#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

#define M 1000006

void process(){
	string s;
	getline(cin, s);
	
	int n = s.size();
	
	int temp = 0;
	string save;
	for(int i = n - 1; i >= 0; i--){
		if(s[i] == ' '){
			break;
		}
		save.push_back(s[i]);
		
	}
	reverse(save.begin(), save.end());
	for(int i = 0; i < n; i++){
		if(s[i] == ' '){
			save.push_back(s[temp]);
			temp = i + 1;
		}
	}
	for(int i = 0; i < save.size(); i++){
		if(save[i] >= 'A' && save[i] <= 'Z'){
			save[i] += 32;
		}
		cout << save[i];
	}
	cout << "@ptit.edu.vn";
	cout << "\n";
	
}

int main(){
	int T;
	T = 1;
	while(T--){
		process();
	}
}