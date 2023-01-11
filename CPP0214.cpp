#include <bits/stdc++.h>
using namespace std;

void process(){
	int n, k;
	cin >> n >> k;
	int a[n + 6];
	int maxx[n + 6];

	for(int i = 1; i <= n; i++){
        cin >> a[i];
	}

	deque<int> dq;

	for(int i = 1; i <= n; i++){
        while(dq.size() != 0 && a[dq.back()] <= a[i]){
            dq.pop_back();
        }
        dq.push_back(i);
        if(dq.front() + k <= i){
            dq.pop_front();
        }
        if(i >= k){
            maxx[i] = a[dq.front()];
        }
	}

	for(int i = k; i <= n; i++){
        cout << maxx[i] << " ";
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
