#include<iostream>
#include<string>

using namespace std;

void process(){
	int n;
	cin >> n;
	int index = 0;
	int save[10006] = {0};
	int c[10006] = {0};
	for(int i = 2; i * i <= n; i++){
		if(n % i == 0){
			while(n % i == 0){
				save[index] = i;
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
		cout << save[i] << " " << c[i] << " ";
	}
	
	cout << "\n";
}

int main(){
	int T;
	cin >> T;
	while(T--){
		process();
	}
}