#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

#define M 1000006

// 1 / 2 4 8 6 / 2 4 8 6
void process(){
	string s;
	cin >> s;
	int n = s.size();
	int a[4] = {6, 2, 4, 8};
	long long temp = 1;
	long long sum = 0;
	if(s[n - 1] == '1'){
		sum += 1;
	}
	for(int i = n - 2; i >= 0; i--){
		if(s[i] == '1'){
			temp = (n - i - 1) % 4;
			sum += a[temp];
		}
	}
	
	
	if(sum % 5 == 0){
		cout << "Yes";
	}
	else{
		cout << "No";
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