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
	int n;
	cin >> n;
	int a[n + 6]= {0};
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a, a + n, greater<int>());
	
	int l = 0;
	int r = n - 1;
	while(l <= r){
		if(l == r){
			cout << a[l];
		}
		else{
			cout << a[l] << " " << a[r];
		}
		
		if(l < r){
			cout << " ";
		}
		l++;
		r--;
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