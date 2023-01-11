#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

#define M 1000006

int a[1006][1006];


void process(){
	int n;
	cin >> n;
	
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cin >> a[i][j];
		}
	}
	
	int begin = 0;
	for(int i = 1; i <= n; i++){
		if(i % 2 == 1){
			for(int j = 1; j <= n; j++){
				cout << a[i][j] << " ";
			}
		}
		else{
			for(int j = n; j >= 1; j--){
				cout << a[i][j] << " ";
			}
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