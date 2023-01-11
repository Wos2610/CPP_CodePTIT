#include<bits/stdc++.h>

using namespace std;

void process(){
    string a, b;
    cin >> a >> b;

    int n = a.size();
    int m = b.size();

    vector<int> t(n + m, 0);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            t[i + j] += (a[i] - '0') * (b[j] - '0');
        }
    }

    string s = "";
    int rem = 0;
    for(int i = n - 1 + m - 1; i >= 0; i--){
        t[i] += rem;
        s = char(t[i] % 10 + '0') + s;
        rem = t[i]/10;

    }

    if(rem > 0){
        s = char(rem + '0') + s;
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
