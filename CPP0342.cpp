#include<iostream>
#include<string>
#include<math.h>
#include<vector>
#include<queue>
using namespace std;

#define M 10000006
#define MOD 1000000007

int tinh(string s){
	int n = s.size();
	int sum = 0;
	for(int i = 0; i < n; i++){
		sum = sum * 10 + s[i] - '0';
	}
	return sum;
}

void process(){
	string s;
	cin >> s;
	int n = s.size();
	
	priority_queue<char, vector<char>, greater<char>> pq;
	int ans = 0;
	for(int i = 0; i < n; i++){
		if(s[i] >= '0' && s[i] <= '9'){
			ans += s[i] - '0';
		}
		else{
			pq.push(s[i]);
		}
	}
	
	while(pq.size() != 0){
		cout << pq.top();
		pq.pop();
	}
	cout << ans;
	cout << "\n";
}

int main(){
	int T;
	cin >> T;
	while(T--){
		process();
	}
}