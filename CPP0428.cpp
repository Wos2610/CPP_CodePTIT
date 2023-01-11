#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

#define M 10000006



void process(){
	int n, m;
	cin >> n >> m;
	
	vector<int> s;
	
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		s.push_back(x);
	}
	
	for(int i = 0; i < m; i++){
		int x;
		cin >> x;
		s.push_back(x);
	}
	
	sort(s.begin(), s.end());
	
	for(int i = 0; i < s.size(); i++){
		cout << s[i] << " ";
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