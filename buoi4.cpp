#include<iostream>
#include<string>

using namespace std;

string rev(string str){
	string ans;
	int n = str.length();
	ans.resize(n);
	int index = 0;
	int i;
	for(i = n - 1; i >= 0; i--){
		ans[index] = str[i];
		index++;
	}
	return ans;
}
int main(){
	string str;
	cin >> str;
	cout << rev(str);
	return 0;
	
}