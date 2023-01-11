#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

#define M 1000006
int a[M];
void process(){
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a, a + n);
	int i = 0;
	while(i < (n + 1)/2){
		cout << a[n - i - 1] << " ";
		if(i == n/2){
			break;
		}
		cout << a[i] << " ";
		i++;
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