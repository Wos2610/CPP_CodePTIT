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

	int n = a.size();
	int sum = 0;
	int rem = 0;
	string s = "";
	for(int i = n - 1; i >= 0; i--){
        sum = a[i] - '0' + b[i] - '0' + rem;
        rem = sum/10;
        s = (char)(sum % 10 + '0') + s;
	}

	if(rem == 1){
        s = "1" + s;
	}

	while(s[0] == '0' && s.size() > 1){
        s.erase(0, 1);
	}

	cout << s;
	cout << "\n";
}

int main(){
	int T;
	cin >> T;
	while(T--){
		process();
	}

}
