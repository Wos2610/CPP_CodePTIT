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
	s = " " + s;
	int temp = 0;
	int demc = 0;
	int deml = 0;
	for(int i = 1; i <= n; i++){
		if(i % 2 == 0){
			demc += s[i] - '0';
		}
		else{
			deml += s[i] - '0';
		}
	}
	
	temp = abs(demc - deml);
	if(temp % 11 == 0){
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