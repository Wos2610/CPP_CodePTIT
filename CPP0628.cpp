#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

#define M 1000006

struct Company{
	string ma;
	string name;
	int n;
};


bool cmp(Company a, Company b){
	if(a.n == b.n){
		return a.ma < b.ma;
	}
	return a.n > b.n;
}

int main(){
    int n;
    cin >> n;
    cin.ignore();
    struct Company c[n + 6];
    
    for(int i = 0; i < n; i++){
    	cin >> c[i].ma;
    	cin.ignore();
    	getline(cin, c[i].name);
    	cin >> c[i].n;
	}
	
	sort(c, c + n, cmp);
	
	for(int i = 0; i < n; i++){
    	cout << c[i].ma << " " << c[i].name << " " << c[i].n << "\n";
	}
	
	
	
}