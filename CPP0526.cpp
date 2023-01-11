#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

#define M 1000006

struct Date{
	string name;
	string ngay;
	string thang;
	string nam;
};

bool cmp(Date a, Date b){
	if(a.nam == b.nam){
		if(a.thang == b.thang){
			return a.ngay < b.ngay;
		}
		else{
			return a.thang < b.thang;
		}
	}
	
	return a.nam < b.nam;
}

int main(){
    int n;
    cin >> n;
    struct Date A[106];
    string x;
    for(int i = 0; i < n; i++){
    	cin >> A[i].name;
		cin >> x;
		A[i].ngay = x[0];
		A[i].ngay += x[1];
		A[i].thang = x[3] ;
		A[i].thang += x[4];
		A[i].nam = x[6];
		A[i].nam += x[7];
		A[i].nam += x[8];
		A[i].nam += x[9];
	}
	
	sort(A, A + n, cmp);
	
	cout << A[n - 1].name << "\n";
	cout << A[0].name;
}