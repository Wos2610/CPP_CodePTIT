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
	cin >> n ;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	
	sort(a, a + n);
	
	int min = a[0];
	
	int mark = 0;
	for(int i = 1; i < n; i++){
		if(a[i] > min){
			min = a[i];
			mark = 1;
			break;
		}
	}
	
	if(mark == 0){
		cout << "-1";
	}
	else{
		cout << a[0] << " " << min;
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