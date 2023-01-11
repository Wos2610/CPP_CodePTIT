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
	cin >> n ;
	
	map<int, int> m;
	
	for(int i = 1; i <= n - 1; i++){
		cin >> a[i];
	}
	sort(a + 1, a + n);
	
	int mark = 0;
	for(int i = 1; i <= n; i++){
		if(a[i] != i){
			cout << i;
			mark = 1;
			break;
		}
	}

	if(mark == 0){
		cout << n + 1;
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