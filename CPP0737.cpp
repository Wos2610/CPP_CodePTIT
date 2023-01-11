#include <bits/stdc++.h>
using namespace std;

void process(){
	int n, k;
	cin >> n >> k;

	int a[n + 6] = {0};
	long long maxx = -1e9;

	for(int i = 0; i < n; i++){
        cin >> a[i];
	}

	long long temp = 0;
	for(int i = 0; i < k; i++){
        temp += a[i];
	}

	int l = 0;
	int r = k - 1;

	for(int i = k; i < n; i++){
        temp = temp - a[i - k] + a[i];
        if(temp > maxx){
            l = i - k + 1;
            r = i;
            maxx = max(maxx, temp);
        }
	}

	for(int i = l; i <= r; i++){
        cout << a[i] << " ";
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
