#include <bits/stdc++.h>
using namespace std;

long long power(long long x, long long y, long long p)
{
	long long res = 1;
	while (y > 0)
	{
		if (y & 1)
			res = (res * x) % p;
		y = y >> 1;
		x = (x * x) % p;
	}
	return res;
}

long long mod(long long n, long long p)
{
	return power(n, p - 2, p);
}

long long nCr(long long n, long long r, long long p)
{
	if (n < r)
		return 0;
	if (r == 0)
		return 1;
	long long a[n + 1];
	a[0] = 1;
	for (int i = 1; i <= n; i++)
		a[i] = (a[i - 1] * i) % p;
	return (a[n] * mod(a[r], p) % p * mod(a[n - r], p) % p) % p;
}

void process(){
	int n, m, k;
	cin >> n >> m >> k;
	long long a1[n], a2[m], a3[k];
	for (int i = 0; i < n; i++)
		cin >> a1[i];
	for (int i = 0; i < m; i++)
		cin >> a2[i];
	for (int i = 0; i < k; i++)
		cin >> a3[i];
	int i = 0, j = 0, h = 0;
	vector<long long> a;
	while (i < n && j < m && h < k)
	{
		if (a1[i] == a2[j] && a2[j] == a3[h])
		{
			a.push_back(a1[i]);
			i++;
			j++;
			h++;
		}
		else if (a1[i] < a2[j])
			i++;
		else if (a2[j] < a3[h])
			j++;
		else
			h++;
	}
	if (a.size() == 0)
		cout << -1;
	else
	{
		for (int i = 0; i < a.size(); i++)
			cout << a[i] << " ";
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