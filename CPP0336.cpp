#include <bits/stdc++.h>
using namespace std;

void process(){
    string a,b;
    cin >> a >> b;

    int b_count[30] = {0};
    int n = a.size();
    int m = b.size();
    for(int i = 0; i < m; i++){
        b_count[b[i]-'a']++;
    }

    int res = 1e6;

    int a_count[30] = {0};
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            a_count[a[i] - 'a']++;
            int mark = 0;
            for(int k = 0; k < 26; k++){
                if(a_count[i] < b_count[i]){
                    mark = 1;
                    break;
                }
            }
            if(mark == 0 && res > j - i + 1){
                res = j - i + 1;
                l = i;
                r = j;
            }
        }
    }

    if(res = 1e6){
        cout << "-1\n";
        return;
    }
    for(int i = l; i <= r; i++){
        cout << a[i];
    }
    cout << "\n";
}

int main(){
	int T;
	cin >> T;
	while(T--){
        process();
	}
}
