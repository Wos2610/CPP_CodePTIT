#include<iostream>
#include<string>
#include<math.h>
#include<vector>
using namespace std;

#define M 10000006
#define MOD 1000000007

int check1(string save){
	for(int i = 1; i < 5; i++){
		if(save[i] <= save[i - 1]){
			return 0;
		}
	}
	return 1;
}

int check2(string save){
	for(int i = 1; i < 5; i++){
		if(save[i] != save[i - 1]){
			return 0;
		}
	}
	return 1;
}

int check3(string save){
	if(save[0] != save[1] && save[1] != save[2]){
		return 0;
	}
	if(save[3] != save[4]){
		return 0;
	}
	return 1;
}

int check4(string save){
	for(int i = 0; i < 5; i++){
		if(save[i] != '6' && save[i] != '8'){
			return 0;
		}
	}
	return 1;
}

void process(){
	string s, save;
	cin >> s;
	int n = s.size();
	for(int i = n - 1 - 5; i <= n - 1; i++){
		if(s[i] >= '0' && s[i] <= '9'){
			save.push_back(s[i]);
		}
	}
//	for(int i = 0; i < 5; i++){
//		cout << save[i] << " ";
//	}
	if(check1(save) || check2(save) || check3(save) || check4(save)){
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