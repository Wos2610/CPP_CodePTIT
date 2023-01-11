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
	int a[n + 6] = {0};
	
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	
	int k = n - 1;
	while(a[k] <= a[k + 1]){
		k--;
	}
	
	for(int i = n; i > k; i--){
		if(a[i] < a[k]){
			swap(a[i], a[k]);
			break;
		}
	}
	
	reverse(a + 1 + k, a + 1 + n);
	
	for(int i = 1; i <= n; i++){
		cout << a[i] << " ";
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