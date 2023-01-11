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

void nhap(SinhVien &ds){
	string x;
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
	if(a.clas == b.clas){
		return a.MSV < b.MSV;
	}
	return a.clas < b.clas;
}
void sap_xep(SinhVien ds[], int N){
	sort(ds, ds + N, cmp);
}

void in_ds(SinhVien ds[], int N){
	for(int i = 0; i < N; i++){
		cout << ds[i].MSV << " ";
		cout << ds[i].name << " ";
		cout << ds[i].clas << " ";
		cout << ds[i].email << "\n";
	}
	
}

int main(){
	int n;
    cin >> n;
    cin.ignore();
    struct SinhVien ds[n + 6];
    for(int i = 0; i < n; i++) {
    	nhap(ds[i]);
	}
	sap_xep(ds, n);
	in_ds(ds, n);
    return 0;
}