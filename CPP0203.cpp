#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

#define M 1000006

int a[M];
int mark[M];

void process(){
	int n;
	cin >> n;
	for(int i = 0; i < M; i++){
		mark[i] = 0;
	}
	for(int i = 0; i < n; i++){
		cin >> a[i];
		if(a[i] > 0){
			mark[a[i]] = 1;
		}
	}
	sort(a, a + n);
	int temp = 1;
	while(1){
		if(mark[temp] == 0){
			cout << temp;
			break;
		}
		temp++;
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