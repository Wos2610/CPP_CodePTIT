#include <bits/stdc++.h>
using namespace std;

void process(){
	string a;
	cin >> a;
	int n = a.size(), ok = 0;
	for (int i = n - 2; i >= 0; i--)
	{
		if (a[i] > a[i + 1])
		{
			ok = 1;
			int s = 0, k;
			for (int j = i + 1; j < n; j++)
			{
				if (a[j] < a[i])
				{
					if (a[j] > s)
					{
						s = a[j];
						k = j;
					}
				}
			}
			swap(a[i], a[k]);
			break;
		}
	}
	if (ok == 0)
		cout << -1;
	else
		cout << a;
	cout << "\n";
}

int main(){ 
	int T;
	cin >> T;
	while(T--){
		process();
	}
}