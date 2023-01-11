#include<iostream>
#include<string>
#include<math.h>
#include<vector>
#include<queue>
#include<string>
#include<map>
#include<algorithm>
#include<stdbool.h>
#include<bits/stdc++.h>
using namespace std;

#define M 10000006
#define MOD 1000000007

bool cmp(string a, string b){
	if(a + b > b + a){
		return true;
	}
	return false;
}

void process(){
	int n;
	cin >> n;
	string s;
	vector<string> save;
	for(int i = 0;i < n; i++){
		cin >> s;
		save.push_back(s);
	}
	sort(save.begin(), save.begin() + n, cmp);
	for(int i = 0 ;i < n; i++){
		cout << save[i];
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