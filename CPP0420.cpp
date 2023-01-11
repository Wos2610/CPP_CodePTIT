#include<iostream>
#include<string>
#include<math.h>
#include<vector>
#include<queue>
#include<string>
#include<map>
#include<algorithm>
#include<stdbool.h>
using namespace std;

#define M 10000006
#define MOD 1000000007

struct Number{
	int n;
	int d;
	int stt;
};

bool cmp(Number a, Number b){
	if(a.d == b.d){
		return a.stt < b.stt;
	}
	return a.d < b.d;
}
Number f[100006];

void process(){
	int m, x;
	cin >> m >> x;
	
	for(int i = 0; i < m; i++){
		cin >> f[i].n;
		f[i].d = abs(f[i].n - x);
		f[i].stt = i;
	}
	
	sort(f, f + m, cmp);
	
	for(int i = 0; i < m; i++){
		cout << f[i].n << " ";
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