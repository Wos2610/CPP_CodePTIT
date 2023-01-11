#include<iostream>
#include<string>
#include<math.h>
#include<vector>
#include<queue>
using namespace std;

#define M 10000006
#define MOD 1000000007

void process(){
	int n;
	cin >> n;
	long long a[n + 6] = {0};
	long long s[n + 6] = {0};
	for(int i = 1; i <= n; i++){
		cin >> a[i];
		s[i] = s[i - 1] + a[i];
	}
	
	int mark = 0;
	long long left = 0;
	long long right = 0;
	for(int i = 1; i <= n; i++){
		left = s[i - 1] - s[0];
		right = s[n] - s[i];
		if(left == right){
			cout << i;
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