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
	if(i == k){
		for(int j = 1; j <= k; j++){
			cout << a[j];
		}
		cout << " ";
	}
	for(int j = a[i] + 1 ; j <= n; j++){
		a[i + 1] = j;
		Try(i + 1);
	}
}
void process(){
	cin >> n >> k;
	Try(0);
	cout << "\n";
}

int main(){
	int T;
	cin >> T;
	while(T--){
		process();
	}
}