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
	float x, y, z;
};

void nhap(SinhVien &ds){
	cin >> ds.MSV;
	cin.ignore();
	getline(cin, ds.name);
	cin >> ds.clas;
	cin >> ds.x >> ds.y >> ds.z;
}

bool cmp(SinhVien a, SinhVien b){
	return a.MSV < b.MSV;
}
void sap_xep(SinhVien *ds, int N){
	sort(ds, ds + N, cmp);
}

void in_ds(SinhVien *ds, int N){
	for(int i = 0; i < N; i++){
		cout << i + 1 << " ";
		cout << ds[i].MSV << " ";
		cout << ds[i].name << " ";
		cout << ds[i].clas << " ";
		printf("%.1f %.1f %.1f\n", ds[i].x, ds[i].y, ds[i].z);
	}
	
}

int main(){
	int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for(int i = 0; i < n; i++) {
    	nhap(ds[i]);
	}
	sap_xep(ds, n);
    in_ds(ds,n);
    return 0;
}