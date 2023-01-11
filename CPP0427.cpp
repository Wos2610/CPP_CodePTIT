#include <bits/stdc++.h>
using namespace std;

void process(){
	int n;
	cin >> n;
	int a[n + 6] = {0};

	int dem = 0;
	for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] == 0){
            dem++;
        }
	}

	for(int i = 0; i < n; i++){
        if(a[i + 1] != 0 && a[i + 1] == a[i]){
            a[i] *= 2;
            a[i + 1] = 0;
            dem++;
        }
	}

	for(int i = 0; i < n; i++){
        if(a[i] != 0){
            cout << a[i] << " ";
        }
	}

	for(int i = 0; i < dem; i++){
        cout << "0 ";
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
