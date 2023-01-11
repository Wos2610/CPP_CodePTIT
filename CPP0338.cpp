#include<bits/stdc++.h>

using namespace std;


void process(){
	string s;
	int k;
	cin >> s >> k;
	int n = s.size();
	map<string, int> m;
	int dem = 0;
	for(int i = 0; i < n; i++){
		int mark[30] = {0};
		int d = 0;
		for(int j = i; j < n; j++){
			if(mark[s[j] - 'a'] == 0){
				d++;
				mark[s[j] - 'a'] = 1;
			}
			if(d == k){
				dem++;
			}
			else if(d > k){
				break;
			}	
		}
	}
	cout << dem << "\n";
}

int main(){
	int T;
	cin >> T;
	while(T--){
		process();
	}

}