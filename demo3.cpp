#include<bits/stdc++.h>

using namespace std;
string s;
long long sum;

long long change(string s){
    long long res = 0;
    for(int i = 0; i < s.size(); i++){
        res = res * 10 + s[i] - '0';
    }
    return res;
}

void process(){
    if(s.size() > 10){
        return;
    }

    for(int i = 0; i < s.size(); i++){
        if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')){
            return;
        }
    }
    if(change(s) > INT_MAX){
        return;
    }
    sum += change(s);
}

int main(){
    //ifstream input;
    //input.open("DATA.in");
    while(cin >> s){
        process();
    }
    cout << sum;
    //input.close();
}
