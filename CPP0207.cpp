#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;

#define M 1000006

int a[M];
int mark[M];
queue<int> q;
void process(){
	int n, d;
	cin >> n >> d;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		q.push(a[i]);
	}
	d = d % n;
	while(d > 0){
		int temp = q.front();
		q.pop();
		q.push(temp);
		d--;
	}
	for(int i = 0; i < n; i++){
		cout << q.front() << " ";
		q.pop();
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