#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

#define M 1000006

struct SinhVien{
	string MSV = "N20DCCN001";
	string name;
	string clas;
	string date;
	float x;
};

void nhapThongTinSV(SinhVien &A){
	getline(cin, A.name);
	cin >> A.clas;
	cin >> A.date;
	cin >> A.x ;
	
	if(A.date[2] != '/'){
		A.date = '0' + A.date;
	}
	if(A.date[5] != '/'){
		A.date.insert(3, "0");
	}
}

void inThongTinSV(SinhVien A){
	cout << A.MSV << " " << A.name << " " << A.clas << " " << A.date << " " ;
	printf("%.2f", A.x);
}

int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}