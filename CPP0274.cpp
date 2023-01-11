#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

#define M 1000006

int a[M];
int mark[M];
int d[M] = {0};
void process(){
	for(int i = 0; i < M; i++){
		d[i] = 0;
	}
	
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		d[a[i]]++;
	}
	int dem = 0;
	for(int i = 0; i < n; i++){
		if(d[a[i]] > 1){
			dem++;
		}
	}
	cout << dem;
	cout << "\n";
	
}

int main(){
	int T;
	cin >> T;
	while(T--){
		process();
	}
}