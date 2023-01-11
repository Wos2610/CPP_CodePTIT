#include<bits/stdc++.h>
using namespace std;

int main(){
    freopen("DATA.in", "r", stdin);
    int a;
    map<int, int> m;
    vector<int> save;

    while(cin >> a){
        if(m[a] == 0){
            save.push_back(a);
        }
        m[a]++;
    }

    sort(save.begin(), save.end());

    for(int i = 0; i < save.size(); i++){
        cout << save[i] << " " << m[save[i]] << "\n";
    }

}
