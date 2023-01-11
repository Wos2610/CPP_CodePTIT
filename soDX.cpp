#include<iostream>
using namespace std;

int doiXung(int n){
	int m = n;
	int dao = 0;
	while(n > 0){
		dao = dao * 10 + n % 10;
		n /= 10;
	}
	if(dao == m){
		return 1;
	}
	else{
		return 0;
	}
}
int main(){
	int T;
	cin >> T;
	while(T > 0){
		int n;
		cin >> n;
		if(doiXung(n) == 1){
			cout << "YES";
		}
		else{ 
			cout << "NO";
		}
		cout <<"\n";
		T--;
	}
	return 0;
}