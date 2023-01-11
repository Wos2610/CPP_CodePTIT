#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

#define M 1000006

void process(){
	int n;
	cin >> n;
	int m = 8*n*n;
	int a1[m] = {0};
	int a2[m] = {0};
	int b = 0, c = 1, k = 1, s = 2;
	a1[0] = b = m + 2*n;
	
	while(k<m){
	    for(int i = 0; i < s; i++){
	        b = a1[k++] = (b-4*n*c);
	        if(k >= m) break;
	    }
	    if(k >= m) break;
	    for(int i=0;i<s;i++){
	        b=a1[k++]=b+c;
	        if(k>=m) break;
	    }
	    c *= -1;
	    s += 2;
	}
	for(int i = 0; i < m; i++) a2[i] = 2 * m - a1[i] + 1;
	for(int i = 0; i < m; i++) cout << a1[i] << " ";
	cout << "\n";
	for(int i = 0; i < m; i++) cout << a2[i] << " ";
	cout << "\n";
}

int main(){
	int T;
	cin >> T;

	while(T--){
		process();
	}
}