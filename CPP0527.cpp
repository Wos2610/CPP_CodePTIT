#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

#define M 1000006

struct Date{
	string h;
	string m;
	string s;
};

bool cmp(Date a, Date b){
	if(a.h == b.h){
		if(a.m == b.m){
			return a.s < b.s;
		}
		else{
			return a.m < b.m;
		}
	}
	
	return a.h < b.h;
}

int main(){
    int n;
    cin >> n;
    struct Date A[5006];
    for(int i = 0; i < n; i++){
		cin >> A[i].h;
		cin >> A[i].m;
		cin >> A[i].s;
	}
	
	sort(A, A + n, cmp);
	
	for(int i = 0; i < n; i++){
		cout << A[i].h << " " << A[i].m << " " << A[i].s << "\n";
	}
}