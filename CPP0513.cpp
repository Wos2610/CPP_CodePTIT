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
	string date;
	float x;
};

void nhap(SinhVien ds[], int N){
	for(int i = 0; i < N; i++){
		cin.ignore();
		getline(cin, ds[i].name);
		cin >> ds[i].clas;
		cin >> ds[i].date;
		cin >> ds[i].x ;
	}
	
}

void in(SinhVien ds[], int N){
	for(int i = 0; i < N; i++){
		string temp = "";
		temp = to_string(i + 1);
		while(temp.size() != 3){
			temp = "0" + temp;
		}
		ds[i].MSV = temp;
		cout << "B20DCCN" << ds[i].MSV << " ";
		cout << ds[i].name << " ";
		cout << ds[i].clas << " ";
		if(ds[i].date[2] != '/'){
			ds[i].date = '0' + ds[i].date;
		}
		if(ds[i].date[5] != '/'){
			ds[i].date.insert(3, "0");
		}
		cout << ds[i].date << " ";
		printf("%.2f\n", ds[i].x);
	}
	
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}