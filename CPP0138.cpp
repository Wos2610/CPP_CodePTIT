#include<iostream>
#include<string>
#include<vector>
using namespace std;

#define M 1000006

int mark[M];
vector<int> save;

void sieve(){
	mark[0] = mark[1] = 1;
	for(int i = 2; i * i <= M; i++){
		if(mark[i] == 0){
			for(int j = i * i; j <= M; j += i){
				mark[j] = 1;
			}
		}
		
	}
}

void process(){
	int n;
	cin >> n;
	int m = save.size();
	for(int i = 0; i < m; i++){
		int k = n - save[i];
		if(k < 2){
			break;
		}
		if(!mark[k]){
			cout << save[i] << " " << k;
			break;
		}
	}
	cout << "\n";
}

int main(){
	int T;
	cin >> T;
	sieve();
	for(int i = 2; i <= M; i++){
		if(mark[i] == 0){
			save.push_back(i);	
		}
	}
	while(T--){
		process();
	}
}