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
int n, k;
int mark[26], a[26];

void Try(int i){
	if(i == n + 1){
		for(int j = 1; j <= n; j++){
			cout << a[j];
		}
		cout << " ";
		return;
	}
	
	for(int j = 1; j <= n; j++){
		if(mark[j] == 0){
			a[i] = j;
			mark[j] = 1;
			Try(i + 1);
			mark[j] = 0;
		}
		
	}
}
void process(){
	cin >> n;
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