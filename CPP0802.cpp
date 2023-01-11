#include<bits/stdc++.h>
using namespace std;

long long sum = 0;

void process(string s){
    if(s.size() > 10){
        return;
    }
    for(int i = 0; i < s.size(); i++){
        if(s[i] < '0' && s[i] > '9'){
            return;
        }
        if(s[i] < '0' && s[i] < '9'){
            return;
        }
        if(s[i] > '0' && s[i] > '9'){
            return;
        }
    }

    long long temp = 0;

    for(int i = 0; i < s.size(); i++){
        temp = temp * 10 + s[i] - '0';
    }

    if(temp > INT_MAX){
        return;
    }

    sum += temp;
}

int main(){
    freopen("DATA.in", "r", stdin);
    string s;

    while(cin >> s){
        process(s);
    }

    cout << sum;
}
