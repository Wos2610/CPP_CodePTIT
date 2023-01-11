#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

#define M 1000006

int n;
void process(){
	string s;
	cin >> s;
	int n = s.size();
	int c[30] = {0};
	
	for(int i = 0; i < n; i++){
		c[s[i] - 'a']++;
	}
	
	int dem = 0;
	for(int i = 0; i < 26; i++){
		if(c[i] != 0){
			dem++;
		}
	}
	
	sort(c, c + 26, greater<int>());
	
//	for(int i = 0; i < 26; i++){
//		cout << c[i] << " ";
//	}
//	
	int sum = 0;
	for(int i = 1; i < dem; i++){
		sum += c[i];
	}
	
	if(c[0] - 1 > sum){
		cout << "0";
	}
	else{
		cout << "1";
	}
	
	
	cout << "\n";
}

int main(){
    int T;
    scanf("%d", &T);
    while(T--){
    	process();
	}
	
}