#include<iostream>
#include<string>
#include<math.h>
#include<vector>
#include<queue>
#include<string>
#include<map>
#include<algorithm>
using namespace std;

#define M 10000006
#define MOD 1000000007

void process(){
	int n;
	cin >> n;
	vector<int> a(n + 6, 0);
	vector<int> b(n + 6, 0);
	for(int i = 0; i < n; i++){
		cin >> a[i];
		b[i] = a[i];
	}
	
	sort(b.begin(), b.begin() + n);
	
	int l = -1;
	int r = n;
	
	for(int i = 0; i < n; i++){
		if(a[i] != b[i]){
			l = i;
			break;
		}
	}
	
	for(int i = n - 1; i >= 0; i--){
		if(a[i] != b[i]){
			r = i;
			break;
		}
	}
	
	cout << l + 1 << " " << r + 1;
	
	cout << "\n";
}

int main(){
	int T;
	cin >> T;
	while(T--){
		process();
	}
}