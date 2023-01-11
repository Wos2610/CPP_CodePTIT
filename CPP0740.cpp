#include <bits/stdc++.h>
using namespace std;

void process(){
	int n;
	cin >> n;
	long long a[n], s = -1e18;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < n; i++)
	{
		long long k = 1;
		for (int j = i; j < n; j++)
		{
			k *= a[j];
			if (k > s)
				s = k;
		}
	}
	cout << s;
	cout << "\n";
}

int main(){ 
	int T;
	cin >> T;
	while(T--){
		process();
	}
}