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
	int dem = 0;
	for(int i = 0; i < n; i++){
		if(s[i] != s[i + 1]){
			dem++;
			cout << s[i] << dem;
			dem = 0;
		}
		else{
			dem++;
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