#include<iostream>
#include<string>

using namespace std;

string s1 = "ABBADCCABDCCABD";
string s2 = "ACCABCDDBBCDDBB";


void process(){
	int m;
	cin >> m;
	string s = "";
	char c;
	for(int i = 0; i < 15; i++){
		cin >> c;
		s.push_back(c);
	}
	
	float res = 0;
	int dem = 0;
	if(m == 101){
		for(int i = 0; i < 15; i++){
			if(s[i] != s1[i]){
				dem++;
			}
		}
	}
	else{
		for(int i = 0; i < 15; i++){
			if(s[i] != s2[i]){
				dem++;
			}
		}
	}
	
	res = 10.00 - (float)dem * 10/15;
	printf("%.2f\n", res);
}

int main(){
	int T;
//	T = 1;
	cin >> T;
	while(T--){
		process();
	}
}