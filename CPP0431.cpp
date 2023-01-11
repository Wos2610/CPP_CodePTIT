#include <bits/stdc++.h>
using namespace std;

void process(){
	int n, k;
	cin >> n >> k;
	vector<int> a(n, 0);
	for(int i = 0; i < n; i++){
        cin >> a[i];
	}

	sort(a.begin(), a.begin() + n);

	long long res = 0;
	for(int i = 0; i < n - 1; i++){
        int m = lower_bound(a.begin() + i + 1, a.end(), a[i] + k) - a.begin();
        if(m == n){
            m = n - 1;
        }
        if(a[m] > a[i] + k){
            m--;
        }
        while(a[m] == a[i] + k){
            m--;
        }
        if(m > i){
           res += (long long)(m - i);
        }
	}
	cout << res;
	cout << "\n";
}

int main(){
	int T;
	cin >> T;
	while(T--){
		process();
	}
}
