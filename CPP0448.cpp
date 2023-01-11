#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

#define M 1000006

int a[M];
int n, x;

int BS(int x){
	int l = 0;
	int r = n - 1;
	while(l <= r){
		int mid = (l + r)/2;
		if(a[mid] < x){
			l = mid + 1;
		}
		else if(a[mid] > x){
			r = mid - 1;
		}
		else{
			return mid;
		}
	}
	return -1;
}

void process(){
	cin >> n >> x ;
	
	map<int, int> m;
	
	for(int i = 0; i < n; i++){
		cin >> a[i];
		m[a[i]]++;
	}
	
	sort(a, a + n);
	
	if(BS(x) == -1){
		cout << "-1";
	}
	else{
		cout << m[x];
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