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

int BS(int x){
	int l = 1;
	int r = n;
	while(l <= r){
		int mid = (l + r)/2;
		if(a[mid] < x){
			l = mid + 1;
		}
		else if(a[mid] > x){
			r = mid - 1;
		}
		else{
			return mid;
		}
	}
	return -1;
}


void process(){
	int x;
	cin >> n >> x;
	
	map<int, int> m;
	
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	
	int mark = 0;
	for(int i = 1; i <= n; i++){
		if(a[i] == x){
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