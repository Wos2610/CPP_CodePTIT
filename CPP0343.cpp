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

int check(int n, int a[]){
	int countC = 0, countL = 0;
	for(int i = 0; i < n; i++){
		if(a[i] % 2 == 0){
			countC++;
		}
		else{
			countL++;
		}
	}
	if(n % 2 == 0 && countC > countL){
		return 1;
	}
	if(n % 2 == 1 && countC < countL){
		return 1;
	}
	return 0;
}

void process(){
	int a[206] = {0};
	int n = 0;
	char c = ' ';
	while(c != '\n'){
		scanf("%d", &a[n]);
		n++;
		c = getchar();
	}
	
	if(check(n, a)){
		cout << "YES";
	}
	else{
		cout << "NO";
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