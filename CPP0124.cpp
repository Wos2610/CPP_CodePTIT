#include<iostream>
#include<string>

using namespace std;

void process(){
	int n;
	cin >> n;
	int save[100006] = {0};
	int c[100006] = {0};
	int index = 0;
	for(int i = 2; i * i <= n; i++){
		if(n % i == 0){
			save[index] = i;
			while(n % i == 0){
				c[index]++;
				n /= i;
			}
			index++;
		}
		if(n == 1){
			break;
		}
	}
	if(n > 1){
		save[index] = n;
		c[index] = 1;
		index++;
	}
	for(int i = 0; i < index; i++){
		cout << save[i] << " " << c[i] << "\n";
	}
}

int main(){
	int T;
	T = 1;
	while(T--){
		process();
	}
}