#include<iostream>
#include<string.h> 
using namespace std;
long long n[1000006] = {0};
long long m[1000006] = {0};
long long a[1000006] = {0};
int main(){
	string str;
	cin >> str;
	int l = str.size();
	str = ' ' + str;
	int i;
	for(i = 1; i <= l; i++){
		if(str[i] == 'N'){
			n[i] = n[i-1] + 1;
		}
		else{
			n[i] = n[i-1];
		}
	}
	for(i = l; i >= 1; i--){
		if(str[i] == 'A'){
			a[i] = a[i+1] + 1;
		}
		else{ 
			a[i] = a[i+1];
		}
		if(str[i] == 'M'){
			m[i] = m[i+1] + 1;
		}
		else{
			m[i] = m[i+1];
		}
	}
	long long count1 = 0;
	long long count2 = 0;
	for(i = 1; i <= l; i++){
		if(str[i] == 'A'){
			count1 += n[i] * m[i];
		}
		if(str[i] == 'M'){
			count2 += n[i] * a[i];
		}
	}
	cout << count1 << ' ' << count2;
	return 0;
}