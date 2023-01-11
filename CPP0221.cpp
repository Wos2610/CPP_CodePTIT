#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

#define M 1000006

int n;
void process(){
	int n, m;
	cin >> n >> m;
	int a[n + 6][m + 6] = {0};
	
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			cin >> a[i][j];
		}
	}
	int cb = 1, ce = m, rb = 1, re = n;
	vector<int> save[n];
	int index = 0;
	while(cb <= ce && rb <= re){
	 	vector<int> save;
		for(int j = cb; j <= ce; j++){
			save.push_back(a[rb][j]);
		}
		for(int i = rb + 1; i <= re; i++){
			save.push_back(a[i][ce]);
		}
		for(int j = ce - 1; j >= cb; j--){
			save.push_back(a[re][j]);
		}
		for(int i = re - 1; i >= rb + 1; i--){
			save.push_back(a[i][cb]);
		}
		int temp = save.size();
		save.insert(save.begin(), save[temp - 1]);
		save.pop_back();
		
		int k = 0;
		for(int j = cb; j <= ce; j++){
			a[rb][j] = save[k];
			k++;
		}
		for(int i = rb + 1; i <= re; i++){
			a[i][ce] = save[k];
			k++;
		}
		for(int j = ce - 1; j >= cb; j--){
			a[re][j] = save[k];
			k++;
		}
		for(int i = re - 1; i >= rb + 1; i--){
			a[i][cb] = save[k];
			k++;
		}
		
		index++;
		rb++;
		cb++;
		re--;
		ce--;
	}
	
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			cout << a[i][j] << " ";
	 	}
	}             
	cout << "\n";
}

int main(){
    int T;
    scanf("%d", &T);
    while(T--){
    	process();
	}
	
}