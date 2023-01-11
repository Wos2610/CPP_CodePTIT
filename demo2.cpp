#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;

    int n = s.size();
    string temp = "";
    vector<string> save;

    if(s[0] != '.'){
        temp = s[0];
    }
    for(int i = 1; i < n; i++){
        if(s[i] == '.' && s[i - 1] != '.'){
            save.push_back(temp);
            temp = "";
        }
        if((s[i] >= 'a' && s[i] <= 'z')||(s[i] >= 'A' && s[i] <= 'Z')){
            temp += s[i];
        }
    }
    if(temp != ""){
      save.push_back(temp);
    }

    for(int i = save.size() - 1; i >= 0; i--){
        cout << save[i];
        if(i != 0){
            cout << ".";
        }
    }
}
