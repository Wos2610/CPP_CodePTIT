#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

#define M 1000006

int n;


void process(){
	cin >> n;
	int dem = 0;
	for(int i = 1; i <= sqrt(n); i++){
		if(n % i == 0){
			if(i % 2 == 0){
				dem++;
			}
			if(n/i % 2 == 0 && i != n/i){
				dem++;
			}
		}
	}
	cout << dem;
	cout << "\n";
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int T;
	cin >> T;
	while(T--){
		process();
	}
}
