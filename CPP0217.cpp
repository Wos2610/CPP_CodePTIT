#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<queue>
using namespace std;

#define M 1000006

priority_queue<int, vector<int>, greater<int>> pq;

void process(){
	int n, k;
	cin >> n >> k;
	int a[n + 6][n + 6] = {0};
	
	int x;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> x;
			pq.push(x);
		}
	}
	
//	while(pq.size() > 0){
//		cout << pq.top() << " ";
//		pq.pop();
//	}
	
	while(k > 1){
		pq.pop();
		k--;
	}
	
	cout << pq.top();
	
	cout << "\n";
}

int main(){
	int T;
	cin >> T;
	while(T--){
		while(pq.size() != 0){
			pq.pop();
		}
		process();
	}
}