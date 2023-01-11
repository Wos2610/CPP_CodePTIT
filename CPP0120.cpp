#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

#define M 1000006

void process(){
	int m, n, a, b;
	cin >> m >> n >> a >> b;
	int dem = 0;
	for(int i = m; i <= n; i++){
		if(i % a == 0 || i % b == 0){
			dem++;
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
