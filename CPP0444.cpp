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
	cin >> n >> x ;
	
	
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	
	for(int i = 1; i <= n; i++){
		if(a[i] == x){
			cout << i;
			break;
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