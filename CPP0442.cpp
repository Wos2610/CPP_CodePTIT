#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

#define M 1000006

int a[M];
int n;



void process(){
	int x;
	cin >> n >> x;
	
	map<int, int> m;
	
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	
	int mark = 0;
	for(int i = 1; i <= n; i++){
		if(a[i] == x){
			cout << 1;
			mark = 1;
			break;
		}
	}
	if(mark == 0){
		cout << "-1";
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