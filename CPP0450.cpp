#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

#define M 1000006

int a[M];
int n, x;

void process(){
	cin >> n ;
	
	map<int, int> m;
	
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	
	int mark = 0;
	for(int i = 0; i < n; i++){
		if(m[a[i]] == 1){
			mark = a[i];
			break;
		}
		m[a[i]]++;
	}
	
	if(mark == 0){
		cout << "-1";
	}
	else{
		cout << mark;
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