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
	int k;
	cin >> k;
	
	int n = s.size();
	int d[36] = {0};
	for(int i = 0; i < n; i++){
		d[s[i] - 'a']++;
	}
	int dem = 0;
	for(int i = 0; i < 26; i++){
		if(d[i] == 0){
			dem++;
		}
	}
	if(dem > k){
		cout << "0";
	}
	else{
		cout << "1";
	}
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