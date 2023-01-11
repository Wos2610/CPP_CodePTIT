#include <bits/stdc++.h>
using namespace std;

void process(){
	int n, m;
	cin >> n >> m;

	int a[n + 6] = {0};
	int m1[100006] = {0};
	for(int i = 0; i < n; i++){
        cin >> a[i];
        m1[a[i]]++;
	}

	int b[m + 6] = {0};
	int m2[100006] = {0};
	for(int i = 0; i < m; i++){
        cin >> b[i];
        m2[b[i]]++;
	}

	for(int i = 0; i < m; i++){
        while(m1[b[i]] > 0){
            cout << b[i] << " ";
            m1[b[i]]--;
        }
	}

	vector<int> save;
	for(int i = 0; i < n; i++){
        if(m2[a[i]] == 0){
            save.push_back(a[i]);
        }
	}
	sort(save.begin(), save.end());

	for(int i = 0; i < save.size(); i++){
        cout << save[i] << " ";
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
