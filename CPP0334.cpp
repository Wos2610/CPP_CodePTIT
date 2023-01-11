#include<iostream>
#include<string>
#include<math.h>
#include<vector>
using namespace std;

#define M 10000006
#define MOD 1000000007

int tinh(string s){
	int n = s.size();
	int sum = 0;
	for(int i = 0; i < n; i++){
		sum = sum * 10 + s[i] - '0';
	}
	return sum;
}

void process(){
	string s;
	cin >> s;
	int n = s.size();
	string temp = "";
	vector<string> save;
	
	for(int i = 0; i < n; i++){
		if(s[i] >= '0' && s[i] <= '9'){
			temp += s[i];
		}
		else{
			if(temp.size() != 0){
				save.push_back(temp);
				temp = "";
			}
		}
	}
	if(temp.size() != 0){
		save.push_back(temp);
	}
	int ans = 0;
	for(int i = 0; i < save.size(); i++){
//		cout << save[i] << " ";
//		cout << tinh(save[i]) << " ";
		ans += tinh(save[i]);
	}
	cout << ans;
	cout << "\n";
}

int main(){
	int T;
	cin >> T;
	while(T--){
		process();
	}
}