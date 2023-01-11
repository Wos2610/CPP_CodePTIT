#include<bits/stdc++.h>

using namespace std;

long long m;

long long mod(string a, long long m){
    int n = a.size();
    int temp = 0;
    long long mod = 0;
    for(int i = 0; i < n; i++){
        temp = a[i] - '0';
        mod = mod * 10 + temp;
        mod %= m;
    }
    return mod;
}

long long pow(string a, long long b){
    if(b == 0){
        return 1 % m;
    }
    if(b == 1){
        return mod(a, m);
    }

    long long temp = pow(a, b/2) % m;

    if(b % 2 == 0){
        return temp * temp % m;
    }
    else{
        return (temp * temp % m) * mod(a, m) % m;
    }

}

void process(){
	string a;
	long long b;
	cin >> a >> b >> m;

	cout << pow(a, b);
	cout << "\n";
}

int main(){
	int T;
	cin >> T;
	while(T--){
		process();
	}

}
