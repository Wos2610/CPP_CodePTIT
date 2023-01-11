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
	cin >> n;
	int a[n + 6] = {0};
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	
	int count = 0;
	int l = 1;
	int r = n;
	while(l < r){
		if(a[l] == a[r]){
			l++;
			r--;
		}
		else if(a[l] < a[r]){
			l++;
			a[l] += a[l - 1];
			count++;
		}
		else{
			r--;
			a[r] += a[r + 1];
			count++;
		}
	}
	
	cout << count << "\n";
}

int main(){
    int T;
    scanf("%d", &T);
    while(T--){
    	process();
	}
	
}