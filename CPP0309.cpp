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
	getline(cin, s);
	int n = s.size();
	int dem = 1;
	for(int i = 0; i < n; i++){
		if((s[i] >= 'a' && s[i] <= 'z') && (s[i + 1] == ' ' || s[i + 1] == '\t')){
			dem++;
		}
	}
	cout << dem;
	cout << "\n";
	
}

int main(){
	int T;
	cin >> T;
	cin.ignore();
	while(T--){
		process();
	}
}