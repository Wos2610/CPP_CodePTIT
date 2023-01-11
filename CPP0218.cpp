#include <bits/stdc++.h>
using namespace std;

void process(){
	int n;
	cin >> n;
	int a[n], mim = 1e9;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		mim = min(a[i], mim);
	}
	int s = a[0] - mim, ss = 0;
	for (int i = 1; i < n; i++)
		s = __gcd(s, a[i] - mim);
	for (int i = 1; i <= sqrt(s); i++)
	{
		if (s % i == 0)
		{
			if (i != s / i)
				ss += 2;
			else
				ss++;
		}
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