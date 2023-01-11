#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

#define M 1000006
static int ind = 1;
struct NhanVien{
	string MNV;
	string name;
	string gender;
	string date;
	string ngay;
	string thang;
	string nam;
	string add;
	string ms;
	string day;
};

void nhap(NhanVien &A){
	string temp = "";
	temp = to_string(ind);
	while(temp.size() != 5){
		temp = "0" + temp;
	}
	A.MNV = temp;
	ind++;
	cin.ignore();
	getline(cin, A.name);
	cin >> A.gender;
	cin >> A.date;
	if(A.date[2] != '/'){
		A.date = '0' + A.date;
	}
	if(A.date[5] != '/'){
		A.date.insert(3, "0");
	}
//	A.thang =  A.date[0] + A.date[1];
	A.thang = A.date[0];
	A.thang += A.date[1];
//	cout << A.thang << "\n";
	A.ngay = A.date[3] ;
	A.ngay += A.date[4];
	A.nam = A.date[6];
	A.nam += A.date[7];
	A.nam += A.date[8];
	A.nam += A.date[9];
	cin.ignore();
	getline(cin, A.add);
	cin >> A.ms;
	cin >> A.day;
	if(A.day[2] != '/'){
		A.day = '0' + A.day;
	}
	if(A.day[5] != '/'){
		A.day.insert(3, "0");
	}
}

bool cmp(NhanVien a, NhanVien b){
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
	
void sapxep(NhanVien ds[], int N){
	sort(ds, ds + N, cmp);
}
void inds(NhanVien ds[], int N){
	for(int i = 0; i < N; i++){
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
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}