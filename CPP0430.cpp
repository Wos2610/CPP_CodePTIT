#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

#define M 10000006



void process(){
	int n;
	cin >> n;
	
	int a[n + 6];
	int mark[100006] = {0};
	
	for(int i = 0; i < n; i++){
		cin >> a[i];
		mark[a[i]] = 1;
	}
	
	sort(a, a + n);
	
	int beg = a[0];
	int end = a[n - 1];
	int dem = 0;
	
	for(int i = beg + 1; i < end; i++){
		if(mark[i] == 0){
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