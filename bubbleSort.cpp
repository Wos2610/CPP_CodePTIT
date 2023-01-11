#include<iostream>
#include<algorithm>
using namespace std;

void bubbleSort(int a[], int n){
	for(int i = 0; i < n; i++){
		for(int j = n - 1; j > i; j--){
			if(a[j] < a[j - 1]){
				swap(a[j], a[j - 1]);
			}
		}
	}
}

int main(){
	int n;
	cin >> n;
	int *a = new int[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}	
	bubbleSort(a, n);
	for(int i = 0 ; i < n; i++){
		cout << a[i] << endl;
	}
	return 0;										
}