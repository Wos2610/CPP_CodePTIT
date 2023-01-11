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
	string s;
	cin >> s;
	int n = s.size();
	int d[1000] = {0};
	for(int i = 0; i < n; i++){
		d[s[i]]++;
	}
	for(int i = 0; i < n; i++){
		if(d[s[i]] == 1){
			cout << s[i];
		}
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