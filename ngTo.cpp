#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	if(n < 2){
		printf("NO");
		return 0;
	}
	else{
		for(int i = 2; i * i <= n; i++){
			if(n % i == 0){
				printf("NO");
				return 0;
			}
		}
		printf("YES");
		return 0;
	}
}
