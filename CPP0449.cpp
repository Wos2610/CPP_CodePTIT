#include<bits/stdc++.h>
#define MOD 1000000007
using namespace std;

int binarySearch(int a[], int l, int r, int x){
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
	int n, x;
	cin >> n >> x;
	int a[n + 6] = {0};

	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	
	sort(a, a + n);
	int mark = -1;
	for(int i = 0; i < n; i++){
		if(binarySearch(a, 0, n - 1, a[i] + x) != -1){
			mark = 1;
			break;
		}
	}
	cout << mark;
	
	cout << "\n";
}

int main(){
	int T;
	cin >> T;
	while(T--){
		process();
	}

}