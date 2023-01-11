#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

#define M 1000006

struct NhanVien{
	string MNV ;
	string name;
	string gender;
	string date;
	string add;
	string ms;
	string day;
};

void nhap(NhanVien &A){
	cin.ignore();
	getline(cin, A.name);
	cin >> A.gender;
	cin >> A.date;
	cin.ignore();
	getline(cin, A.add);
	cin >> A.ms;
	cin >> A.day;
	
}

void inds(NhanVien ds[], int N){
	for(int i = 0; i < N; i++){
		string x = "";
		x = to_string(i + 1) ;
		while(x.size() != 5){
			x = "0" + x;
		}
		ds[i].MNV = x;
		cout << ds[i].MNV << " ";
		cout << ds[i].name << " ";
		cout << ds[i].gender << " ";
		cout << ds[i].date << " ";
		cout << ds[i].add << " ";
		cout << ds[i].ms << " ";
		cout << ds[i].day << "\n";
	}
	
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}