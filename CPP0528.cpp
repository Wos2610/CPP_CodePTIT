#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

#define M 1000006

static int i = 1;
struct SinhVien{
	int stt;
	string MSV;
	string name;
	string clas;
	string email;
	string company;
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
	ds.stt = i;
	i++;
	string x;
	getline(cin, x);
	ds.MSV = xuLy(x);
	getline(cin, x);
	ds.name = xuLy(x);
	getline(cin, x);
	ds.clas = xuLy(x);
	getline(cin, x);
	ds.email = xuLy(x);
	getline(cin, x);
	ds.company = xuLy(x);
}

bool cmp(SinhVien a, SinhVien b){
	return a.name < b.name;
}
void sap_xep(SinhVien ds[], int N){
	sort(ds, ds + N, cmp);
}

void in_ds(SinhVien ds[], int N){
	for(int i = 0; i < N; i++){
		cout << ds[i].stt << " ";
		cout << ds[i].MSV << " ";
		cout << ds[i].name << " ";
		cout << ds[i].clas << " ";
		cout << ds[i].email << " ";
		cout << ds[i].company << "\n";
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
	int q;
	cin >> q;
	string x;
	SinhVien save[n];
	for(int i = 0; i < q; i++){
		cin >> x;
		int index = 0;
		for(int j = 0; j < n; j++){
			if(ds[j].company == x){
				save[index] = ds[j];
				index++;
			}
		}
		sap_xep(save, index);
		in_ds(save, index);
	}
    return 0;
}