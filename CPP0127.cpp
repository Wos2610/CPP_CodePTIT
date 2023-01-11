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
	int x = 0;
	for(int i = 0; i < m; i++){
		if(mark[n - save[i]] == 0){
			x = 1;
			cout << save[i] << " " << n - save[i];
			break;
		}
		if(save[i] >= n/2){
			break;
		}
	}
	if(x == 0){
		cout << "-1";
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