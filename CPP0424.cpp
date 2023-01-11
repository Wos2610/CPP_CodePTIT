#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

#define M 10000006



void process(){
	int k, n;
	cin >> k >> n;
	
	vector<int> s;
	
	for(int i = 0; i < k; i++){
		for(int j = 0; j < n; j++){
			int x;
			cin >> x;
			s.push_back(x);
		}
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