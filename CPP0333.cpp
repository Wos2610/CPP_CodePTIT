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
	
	string save[100];
	
	for(int i = 0; i < n; i++){
		if(s[i] >= 'A' && s[i] <= 'Z'){
			s[i] += 32;
		}
	}
	
	string temp = "";
	int index = 0;
	for(int i = 0; i < n; i++){
		if(s[i] == ' ' && s[i - 1] != ' '){
			save[index] = temp;
			temp = "";
			index++;
		}
		else if(s[i] != ' '){
			temp += s[i];
		}
	}
	
	save[index] = temp;
	
	for(int i = 0; i < index; i++){
		save[i][0] -= 32;
		for(int j = 0; j < save[i].size(); j++){
			cout << save[i][j];
		}
		if(i != index - 1){
			cout << " ";
		}
		else{
			cout << ", ";
		}
	}
	
	for(int i = 0; i < save[index].size(); i++){
		save[index][i] -= 32;
		cout << save[index][i];
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