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
	string nganh;
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
	ds.nganh = "";
	for(int i = 3; i < 7; i++){
		ds.nganh += x[i];
	}
	getline(cin, x);
	ds.name = xuLy(x);
	getline(cin, x);
	ds.clas = xuLy(x);
	getline(cin, x);
	ds.email = xuLy(x);
}

void in_ds(SinhVien ds){
	cout << ds.MSV << " ";
	cout << ds.name << " ";
	cout << ds.clas << " ";
	cout << ds.email << "\n";
}

string a0[] = {"Ke toan", "Cong nghe thong tin", "An toan thong tin", "Vien thong", "Dien tu"};
string b0[] = {"DCKT", "DCCN", "DCAT", "DCVT", "DCDT"};

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
	cin.ignore();
	string x;
	
	for(int i = 0; i < q; i++){
		getline(cin, x);
		
		string temp = "";
		int mark = 0;
		for(int i = 0; i < 5; i++){
			if(x == a0[i]){
				temp = b0[i];
				if(i == 1 || i == 2){
					mark = 1;
				}
				break;
			}
		}
		for(int i = 0; i < x.size(); i++){
			if(x[i] >= 'a' && x[i] <= 'z'){
				x[i] -= 32;
			}
		}
		cout << "DANH SACH SINH VIEN NGANH " << x << ":\n";
		
		for(int i = 0; i < n; i++){
			if(mark == 1){
				if(ds[i].nganh == temp && ds[i].clas[0] != 'E'){
					in_ds(ds[i]);
				}
			}
			else{
				if(ds[i].nganh == temp){
					in_ds(ds[i]);
				}
			}
		}
	}
    return 0;
}