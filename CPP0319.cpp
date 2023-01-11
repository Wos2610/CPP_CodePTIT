#include<bits/stdc++.h>

using namespace std;

vector<int> maxx;
vector<int> minn;

void tinhMax(int m, int s){
	int k = 9;
	int q = 0;
	while(k > 0){
		q = s / k;
		if(q <= m){
			m -= q;
			s -= k * q;
		}
		while(q > 0){
			maxx.push_back(k);
			q--;
		}
		if(s == 0 && m != 0){
			while(m != 0){
				maxx.push_back(0);
				m--;
			}
			return;
		}
		if(s == 0 && m == 0){
			return;
		}
		k--;
	}
}

void tinhMin(int m, int s){
	int k = 0;
	while(s != 0 && m != 0){
		while(s - k <= (m - 1)*9 ){
			if(s - k >= k || s - k == 0){
				minn.push_back(k);
				s -= k;
				m--;
			}
			else{
				break;
			}
		}
		k++;
	}
	if(minn[0] == 0){
		minn[0] = 1;
		int i = 1;
		while(minn[i] == 0){
			i++;
		}
		minn[i]--;
	}
}

int main(){
	int m, s;
	cin >> m >> s;
	if(s < 1 || s > 9*m){
		cout << "-1 -1";
		return 0;
	}
	
	tinhMax(m, s);
	tinhMin(m, s);
	
	for(int i = 0; i < m; i++){
		cout << minn[i];
	}
	cout << " ";
	for(int i = 0; i < m; i++){
		cout << maxx[i];
	}

}