#include<iostream>
#include<string>
#include<math.h>
#include<vector>
#include<queue>
#include<string>
#include<map>
#include<algorithm>
using namespace std;

#define M 10000006
#define MOD 1000000007

void process(){
	int n, m;
	cin >> n >> m;
	int a[n + 6] = {0};
	int b[m + 6] = {0};

	map<int, int> m1, m2, m3;

	for(int i = 0; i < n; i++){
        cin >> a[i];
        m1[a[i]]++;
        m3[a[i]]++;
	}

	for(int i = 0; i < m; i++){
        cin >> b[i];
        m2[b[i]]++;
        m3[b[i]]++;
	}

	for(auto i : m3){
        cout << i.first << " ";
	}
	cout << "\n";

	for(auto i : m1){
        if(m2[i.first] != 0){
            cout << i.first << " ";
        }
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
