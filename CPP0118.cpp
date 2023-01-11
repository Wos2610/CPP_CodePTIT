#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

#define M 1000006

int n;
int m[M];
vector<int> res;

void sieve(){
	m[1] = 1;
	for(int i = 2; i * i <= M; i++){
		if(m[i] == 0){
			for(int j = i * i ; j <= M; j+= i){
				m[j] = i;
			}
		}
	}
}

int check(int n){
	int m = res.size();
	int dem = 0;
	for(int i = 0; i < m; i++){
		if(n % res[i] == 0){
			int temp = 0;
			dem++;
			while(n % res[i] == 0){
				temp++;
				if(temp > 1){
					return 0;
				}
				n /= res[i];
			}
		}
		if(n == 1){
			break;
		}
	}
	if(dem != 3){
		return 0;
	}
	return 1;
}

void process(){
	cin >> n;
	cout << check(n);
	cout << "\n";
}

int main(){
	int T;
	cin >> T;
	sieve();
	for(int i = 2; i <= M; i++){
		if(m[i] == 0){
			res.push_back(i);
		}
	}
	while(T--){
		process();
	}
}
