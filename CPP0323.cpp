#include<bits/stdc++.h>

using namespace std;

void process(){
	string n;
	long long m;
	cin >> n >> m;

    int temp = 0;
    long long mod = 0;

	for(int i = 0; i < n.size(); i++){
        temp = n[i] - '0';
        mod = mod * 10 + temp;
        mod %= m;
	}

	cout << mod;
	cout << "\n";
}

int main(){
	int T;
	cin >> T;
	while(T--){
		process();
	}

}
