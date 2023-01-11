#include<iostream>
#include<string>

using namespace std;

int check(int n){
	if(n == 0 || n == 1){
		return 0;
	}
	for(int i = 2; i * i <= n; i++){
		if(n % i == 0){
			return 0;
		}
	}
	return 1;
}
void process(){
	int n;
	cin >> n;
	if(check(n)){
		cout << "YES";
	}
	else{
		cout << "NO";
	}
	cout << "\n";
}

int main(){
	int T;
	T = 1;
	while(T--){
		process();
	}
}