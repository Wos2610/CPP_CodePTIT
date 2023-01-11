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
	int l[n + 6] = {0};
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	
	for(int i = 0; i < n; i++){
		l[i] = 1;
		for(int j = 0; j < i; j++){
			if(a[j] < a[i]){
				l[i] = max(l[i], l[j] + 1);
			}
		}
	}
	
	sort(l, l + n);
	cout << l[n - 1];
	cout << "\n";
}

int main(){
    int T;
    scanf("%d", &T);
    while(T--){
    	process();
	}
	
}