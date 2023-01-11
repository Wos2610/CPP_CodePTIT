#include<iostream>
#include<string>

using namespace std;

string s1 = "ABBADCCABDCCABD";
string s2 = "ACCABCDDBBCDDBB";

int a[] = {10, 100, 1000, 10000, 100000, 1000000};
int b[] = {99, 999, 9999, 99999, 999999, 9999999};

int check(int n){
	int c = 0;
	int l = 0;
	while(n > 0){
		int cs = n % 10;
		n /= 10;
		if(cs % 2 == 0){
			c++;
		}
		else{
			l++;
		}
	}
	if(c == l){
		return 1;
	}
	return 0;
}

void process(){
	int m;
	cin >> m;
	
	int beg = a[m - 2];
	int end = b[m - 2];
	
	int dem = 0;
	for(int i = beg; i <= end; i++){
		if(check(i)){
			cout << i << " ";
			dem++;
			if(dem % 10 == 0){
				cout << "\n";
			}
		}
	}

}

int main(){
	int T;
	T = 1;
	while(T--){
		process();
	}
}