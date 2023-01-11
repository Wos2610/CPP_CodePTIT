#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

#define M 10000006



void process(){
	int n;
	cin >> n;
	string a[n + 6];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	
	vector<int> res;
	int mark[100] = {0};
	for(int i = 0; i < n; i++){
		for(int j = 0; j < a[i].size(); j++){
			if(mark[a[i][j] - '0'] == 0){
				res.push_back(a[i][j] - '0');
				mark[a[i][j] - '0'] = 1;
			}
		}
	}
	
	sort(res.begin(), res.end());
	for(int i = 0; i < res.size(); i++){
		cout << res[i] << " ";
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