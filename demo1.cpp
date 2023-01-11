#include<bits/stdc++.h>

using namespace std;

int m[1000006];

int main(){
    int n;
    cin >> n;
    int a[n + 6] = {0};
    for(int i = 0; i < n; i++){
        cin >> a[i];
        m[a[i]]++;
    }

    int mark = 0;
    for(int i = 0; i < n; i++){
        if(m[a[i]] > n/2){
            mark = 1;
            cout << a[i] << " ";
            m[a[i]] = 0;
        }
    }

    if(mark == 0){
        cout << "-1";
    }
}
