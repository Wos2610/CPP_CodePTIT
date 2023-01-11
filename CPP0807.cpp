#include <bits/stdc++.h>
using namespace std;

int main(){
	ifstream input;
	input.open("DATA.in");

	int n, m;
	input >> n >> m;

	map<int, int> mark1, mark2;

	int a[n + 6] = {0};
	for(int i = 0; i < n; i++){
        input >> a[i];
        mark1[a[i]]++;
	}

	int b[n + 6] = {0};
	for(int i = 0; i < m; i++){
        input >> b[i];
        mark2[b[i]]++;
	}

	for(auto i : mark1){
        if(mark2[i.first] > 0){
            cout << i.first << " ";
        }
	}

    input.close();
}
