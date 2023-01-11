#include <bits/stdc++.h>
using namespace std;

void process(){
	int n, k, s = 0, b = 0;
	cin >> n >> k;
	int a[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		if (a[i] <= k)
			s++;
	}
	for (int i = 0; i < s; i++)
		if (a[i] > k)
			b++;
	int ss = b;
	for (int i = 0, j = s; j < n; i++, j++)
	{
		if (a[i] > k)
			b--;
		if (a[j] > k)
			b++;
		ss = min(ss, b);
	}
	cout << ss;
	cout << "\n";
}

int main(){ 
	int T;
	cin >> T;
	while(T--){
		process();
	}
}