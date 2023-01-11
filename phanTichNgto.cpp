#include<iostream>
using namespace std;
 
int count[1000000] = {0};
int mark[1000000] = {0};
 
int main(){
	int n;
	cin >> n;
	int index = 0;
	for(int i = 2; i < n; i++){
		while(n % i == 0){
			mark[index] = 1;
			count[index]++;
			n /= i;
			if(count[index] == 1){
				cout << i << " ";
			}
		}
		if(mark[index] == 1){
			cout << count[index] << endl;
			index++;
		}
	}
	if(n > 1){
		cout << n << " 1";
	}
	return 0;
} 