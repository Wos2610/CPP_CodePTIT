#include<iostream>
#include<string>
#include<math.h>
#include<vector>
#include<queue>
#include<string>
#include<map>
#include<algorithm>
using namespace std;

#define M 10000006
#define MOD 1000000007

void process(){
	int n, m;
	cin >> n >> m;
	vector<int> a(n + 6, 0);
	vector<int> b(m + 6, 0);
	priority_queue<int, vector<int>, greater<int>> pq1;
	priority_queue<int, vector<int>, greater<int>> pq2;
	
	map<int, int> mark;
	
	for(int i = 0; i < n; i++){
		cin >> a[i];
		pq1.push(a[i]);
		mark[a[i]]++;
	}
	
	for(int i = 0; i < m; i++){
		cin >> b[i];
		if(mark[b[i]] == 1){
			pq2.push(b[i]);
		}
		else{
			pq1.push(b[i]);
		}
	}
	
	while(pq1.size() != 0){
		cout << pq1.top() << " ";
		pq1.pop();
	}
	cout << "\n";
	while(pq2.size() != 0){
		cout << pq2.top() << " ";
		pq2.pop();
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