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
	sort(a, a + n);
	
	vector<int> b;
	for(int i = 0; i < n/2; i++){
		b.push_back(a[i]);
		b.push_back(a[i + (n + 1)/2]);
	}
	
	if(n % 2 != 0){
		b.push_back(a[n/2]);
	}
	
	for(int i = 0; i < b.size(); i++){
		cout << b[i] << " ";
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