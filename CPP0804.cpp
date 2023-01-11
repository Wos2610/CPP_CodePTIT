#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("VANBAN.in", "r", stdin);
    string s;
    map<string, int> m;

    while(cin >> s){
        for(int i = 0; i < s.size(); i++){
            if(s[i] >= 'A' && s[i] <= 'Z'){
                s[i] += 32;
            }
        }
        m[s]++;
    }

    for(auto i : m){
        cout << i.first << "\n";
    }
}
