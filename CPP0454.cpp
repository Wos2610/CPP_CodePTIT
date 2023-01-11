#include<iostream>
#include<string>
#include<math.h>
#include<vector>
#include<queue>
#include<string>
#include<map>
#include<algorithm>
#include<stdbool.h>
using namespace std;

#define M 10000006
#define MOD 1000000007

int check(long long n){
	long long can = sqrt(n);
	if(can * can == n){
		return 1;
	}
	return 0;
}

void process(){
	int n;
	cin >> n;
	long long a[n + 6] = {0};
	map<long long, int> m;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		m[a[i]] = 1;
	}
	
	sort(a, a + n);
	
	int mark = 0;
	for(int i = 0; i < n - 1; i++){
		for(int j = i + 1; j < n; j++){
			long long temp = a[i] * a[i] + a[j] * a[j];
			if(check(temp)){
				if(m[sqrt(temp)]){
					cout << "YES";
					mark = 1;
					break;
				}
			}
		}
		if(mark == 1){
			break;
		}
	}
	if(mark == 0){
		cout << "NO";
	}
	cout << "\n";
}

int main(){
	int T;
	cin >> T;
	cin.ignore();
	while(T--){
		process();
	}
}