#include<iostream>
#include<string>
#include<vector>
#include<map>

using namespace std;

#define M 1000006

void process(){
	int n, l, r;
	cin >> n;
	int a[n + 6] = {0};
	
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	cin >> l >> r;
	
	int dem = l;
	for(int i = l; i <= r; i++){
		if(i != 0){
			if(a[i] >= a[i - 1]){
				dem++;
			}
			else{
				break;
			}
		}
		else{
			dem++;
		}
	}
	
	int beg = dem;
	
	for(int i = beg; i < r; i++){
		if(a[i] >= a[i + 1]){
			dem++;
		}
		else{
			break;
		}
	}
	
	if(dem != r){
		cout << "No";
	}
	else{
		cout << "Yes";
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