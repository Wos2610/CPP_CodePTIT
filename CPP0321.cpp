#include<bits/stdc++.h>

using namespace std;

void process(){
	string a, b;
	cin >> a >> b;

	while(a.size() < b.size()){
        a = "0" + a;
	}

	while(b.size() < a.size()){
        b = "0" + b;
	}

	if(a < b){
        swap(a, b);
	}

	int n = a.size();
	int rem = 0;
	int sum = 0;
	string res = "";
	for(int i = n - 1; i >= 0; i--){
        sum = a[i] - '0' - b[i] + '0' - rem;
        if(sum < 0){
            rem = 1;
            sum += 10;
        }
        else{
            rem = 0;
        }
        res = (char)(sum % 10 + '0') + res;
	}

    while(res[0] == '0' && res.size() > 1){
        res.erase(0, 1);
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
