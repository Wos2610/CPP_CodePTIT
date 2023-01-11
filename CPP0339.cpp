#include<iostream>
#include<string>
#include<math.h>
#include<vector>
#include<queue>
#include<string>
#include<map>
#include<algorithm>
#include<stdbool.h>
using namespace std;

#define M 10000006
#define MOD 1000000007

void process(){
	string s;
	cin >> s;
	int n = s.size();
	int c[30] = {0};
	
	for(int i = 0; i < n; i++){
		c[s[i] - 'a']++;
	}
	
	int sum = n;
	for(int i = 0; i < 26; i++){
		sum += (c[i] - 1)*c[i]/2;
	}
	cout << sum;
	cout << "\n";
}

int main(){
	int T;
	cin >> T;
	while(T--){
		process();
	}
}