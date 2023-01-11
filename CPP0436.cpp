#include <bits/stdc++.h>
using namespace std;

void process(){
	int n;
    cin >> n;
    int a[n + 6] = {0};
    int b[n + 6] = {0};
    for(int i = 0; i < n; i++){
        cin >> a[i];
        b[i] = a[i];
    }

    sort(b, b + n);

    for(int i = 0; i < n; i++){
        int temp = upper_bound(b, b + n, a[i]) - b;
        if(temp == n) cout << "_ ";
        else{
            cout << b[temp] << " ";
        }
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
