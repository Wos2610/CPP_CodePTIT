#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

#define M 1000006
int a[26];
int n;

void Try(int i){
	for(int j = 0; j < 2; j++){
		a[i] = j;
		if(i == n){
			for(int k = 1; k <= n; k++){
				cout << a[k];
			}
			cout << " ";
		}
		else{
			Try(i + 1);
		}
	}
}

void process(){
	cin >> n;
	for(int i = 1; i <= n; i++){
		a[i] = 0;
	}
	Try(1);
	cout << "\n";
}

int main(){
	int T;
	cin >> T;
	while(T--){
		process();
	}
}
