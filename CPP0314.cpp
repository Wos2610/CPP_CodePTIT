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
	int n;
	cin >> n;
	cin.ignore();
	string s[10006];
	for(int i = 0; i < n; i++){
		getline(cin, s[i]);
	}
	for(int i = 0; i < n; i++){
		mark[i] = 0;
	}
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			if(s[j] == s[i] && mark[j] == 0){
				mark[j] = 1;
			}
		}
	}
	int dem = 0;
	for(int i = 0; i < n; i++){
		if(mark[i] == 0){
			dem++;
		}
	}
	cout << dem;
	cout << "\n";
	
}

int main(){
	int T;
	T = 1;
	while(T--){
		process();
	}
}