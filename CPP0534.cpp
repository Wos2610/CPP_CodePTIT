#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

#define M 1000006

int check(string s){
	int n = s.size();
	if(n == 1){
		return 0;
	}
	for(int i = 0; i < n/2; i++){
		if(s[i] != s[n - i - 1]){
			return 0;
		}
	}
	return 1;
}

bool cmp(string a, string b){
	while(a.size() < b.size()){
		a = "0" + a;
	}
	while(a.size() > b.size()){
		b = "0" + b;
	}
	return a > b;
}

int main(){
	string x;
	vector<string> save;
	map<string, int> m;
	while(cin >> x){
		if(m[x] != 0){
			m[x]++;
		}
		if(check(x) && m[x] == 0){
			save.push_back(x);
			m[x] = 1;
		}
	}
	
	sort(save.begin(), save.end(), cmp);
	
	for(int i = 0; i < save.size(); i++){
		cout << save[i] << " " << m[save[i]] << "\n";
	}
}