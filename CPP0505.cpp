#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

#define M 1000006

struct NhanVien{
	string MNV = "00001";
	string name;
	string gender;
	string date;
	string add;
	string ms;
	string day;
};

void nhap(NhanVien &A){
	getline(cin, A.name);
	cin >> A.gender;
	cin >> A.date;
	cin.ignore();
	getline(cin, A.add);
	cin >> A.ms;
	cin >> A.day;
	
}

void in(NhanVien A){
	cout << A.MNV << " ";
	cout << A.name << " ";
	cout << A.gender << " ";
	cout << A.date << " ";
	cout << A.add << " ";
	cout << A.ms << " ";
	cout << A.day;
}

int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}