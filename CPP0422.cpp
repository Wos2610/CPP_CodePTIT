#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

#define M 10000006



void process(){
	int n;
	cin >> n;
	long long a[n + 6];
	
	vector<long long> s;
	int dem = 0;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		if(a[i] != 0){
			s.push_back(a[i]);
		}
		else{
			dem++;
		}
	}
	
	for(int i = 0; i < s.size(); i++){
		cout << s[i] << " ";
	}
	for(int i = 0; i < dem; i++){
		cout << "0 ";
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