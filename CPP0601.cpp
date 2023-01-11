#include<iostream>
#include<math.h>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;

class SinhVien{
	public:
	string MSV = "B20DCCN001";
	string name;
	string clas;
	string date;
	float x;
	void nhap(){
        getline(cin, this->name);
        cin >> this->clas;
        cin >> this->date;
        cin >> this->x ;
    }
	void xuat(){
        cout << this->MSV << " " << this->name << " " << this->clas << " " << this->date << " " ;
        printf("%.2f", this->x);
    };
	
};


int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
}