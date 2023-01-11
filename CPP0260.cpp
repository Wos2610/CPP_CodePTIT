#include<iostream>
#include<string>
#include<math.h>
#include<vector>
#include<queue>
using namespace std;

#define M 10000006
#define MOD 1000000007

void process(){
	int n;
	cin >> n;
	int a[n + 6][n + 6];
	int x;
	priority_queue<int, vector<int>, greater<int>> pq;
	
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cin >> x;
			pq.push(x);
		}
	}
	
	int r0= 1, c0 = 1;
	int r = n, c = n;
	
	while(r0 <= (n + 1)/2 && c0 <= (n + 1)/2){
		for(int j = c0; j <= c; j++){
			a[r0][j] = pq.top();
			pq.pop();
		}
		
		for(int i = r0 + 1; i <= r; i++){
			a[i][c] = pq.top();
			pq.pop();
		}
		
		for(int j = c - 1; j >= c0; j--){
			a[r][j] = pq.top();
			pq.pop();
		}
		
		for(int i = r - 1; i >= r0 + 1; i--){
			a[i][c0] = pq.top();
			pq.pop();
		}
		r0++;
		c0++;
		r--;
		c--;
	}
	
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cout << a[i][j] << " ";
		}
		cout << "\n";
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