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
	int mark[10006] = {0};
	
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a, a + n);
	for(int i = 0; i < n; i++){
		if(mark[a[i]] == 0){
			mark[a[i]] = 1;
			cout << a[i] << " ";
		}
	}
	cout << "\n";
	
}

int main(){
	int T;
	T = 1;

	while(T--){
		process();
	}
}