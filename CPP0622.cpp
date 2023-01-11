#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

#define M 1000006

struct SinhVien{
	string MSV;
	string name;
	string clas;
	string email;
};

string xuLy(string s){
	int n = s.size();
	string save;
	int l = 0;
	int r = n - 1;
	while(s[l] == ' '){
		l++;
	}
	while(s[r] == ' '){
		r--;
	}
	for(int i = l; i <= r; i++){
		save.push_back(s[i]);
	}
	return save;
}

string x;
void nhap(SinhVien &ds){
	getline(cin, x);
	ds.MSV = xuLy(x);
	getline(cin, x);
	ds.name = xuLy(x);
	getline(cin, x);
	ds.clas = xuLy(x);
	getline(cin, x);
	ds.email = xuLy(x);
}

bool cmp(SinhVien a, SinhVien b){
	return a.MSV < b.MSV;
}
void sap_xep(SinhVien ds[], int N){
	sort(ds, ds + N, cmp);
}

void in_ds(SinhVien ds){
	cout << ds.MSV << " ";
	cout << ds.name << " ";
	cout << ds.clas << " ";
	cout << ds.email << "\n";
}

int main(){
	struct SinhVien ds[1006];
	int n = 0;
	cin >> n;
	cin.ignore();
	for(int i = 0; i < n; i++){
		nhap(ds[i]);
	}
	int q;
	cin >> q;
	string x;
	for(int i = 0; i < q; i++){
		cin >> x;
		cout << "DANH SACH SINH VIEN LOP " << x << ":\n";
		for(int i = 0; i < n; i++){
			if(ds[i].clas == x){
				in_ds(ds[i]);
			}
		}
	}
    return 0;
}