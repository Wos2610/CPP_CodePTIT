#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<queue>
using namespace std;

#define M 1000006

priority_queue<int, vector<int>, greater<int>> pq;

int check(string s){
	int n = s.size();
	if(s[0] == '0'){
		return -1;
	}
	int d[16] = {0};
	for(int i = 0; i < n; i++){
		if(s[i] >= '0' && s[i] <= '9'){
			d[s[i] - '0']++;
		}
		else{
			return -1;
		}
	}
	for(int i = 0; i < 10; i++){
		if(d[i] == 0){
			return 0;
		}
	}
	return 1;
}

void process(){
	string s;
	cin >> s;
	if(check(s) == -1){
		cout << "INVALID";
	}
	else if(check(s) == 1){
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