#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

#define M 1000006

void process(){
	int n;
	cin >> n;
	int a[106][106] = {0};
	
	int m = 4*n;
	int k = 1;
	for(int i = 1; i <= m; i++){
		for(int j = 1; j <= m; j++){
			a[i][j] = k;
			k++;
		}
	}
	
//	for(int i = 1; i <= m; i++){
//		for(int j = 1; j <= m; j++){
//			cout << a[i][j] << " ";
//		}
//		cout << "\n";
//	}
	
	int re = m/2 + 1; //3
	int rb = m/2 - 1; //1
	int ce = m/2 + 2; //4
	int cb = m/2;     //2
	int mark = 0;
	while(rb >= 1 && re <= m && cb >= 1 && ce <= m){
		for(int i = re; i >= rb; i--){
			cout << a[i][cb] << " ";
		}
		for(int j = cb + 1; j <= ce; j++){
			cout << a[rb][j] << " ";
		}
		
		re += 2; // 5
		for(int i = rb + 1; i <= min(re, m); i++){
			cout << a[i][ce] << " ";
		}
		
		if(re >= m){
			break;
		}
		cb -= 2;
		for(int j = ce - 1; j >= max(cb + 1, 1); j--){
			cout << a[re][j] << " ";
		}
		if(cb <= 1){
			break;
		}
		rb -= 2;
		ce += 2;
	}
	cout << "\n";
	
	
	rb = m/2;
	re = m/2 + 2;
	cb = m/2 - 1;
	ce = m/2 + 1;
	mark = 0;
	while(rb >= 1 && re <= m && cb >= 1 && ce <= m){
		for(int i = rb; i <= re; i++){
			cout << a[i][ce] << " ";
		}
		for(int j = ce - 1; j >= cb; j--){
			cout << a[re][j] << " ";
		}
		
		rb -= 2;
		
		for(int i = re - 1; i >= max(rb, 1); i--){
			cout << a[i][cb] << " ";
		}
		
		if(rb <= 1){
			break;
		}
		
		ce += 2;
		for(int j = cb + 1; j <= min(ce - 1, m); j++){
			cout << a[rb][j] << " ";
		}
		if(ce >= m){
			break;
		}
		re += 2;
		cb -= 2;
			
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