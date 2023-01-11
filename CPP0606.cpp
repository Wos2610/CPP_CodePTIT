#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

#define M 1000006

class NhanVien{
	private:
		string MNV;
		string name;
		string gender;
		string date;
		string add;
		string ms;
		string day;
		
	public:
		NhanVien(){
			MNV = "00001";
			name = "";
			gender = "";
			date = "";
			add = "";
			ms = "";
			day = "";
		}
		
		void nhap(){
			getline(cin, name);
			cin >> gender;
			cin >> date;
			cin.ignore();
			getline(cin, add);
			cin >> ms;
			cin >> day;
		}
		
		void xuat(){
			cout << MNV << " ";
			cout << name << " ";
			cout << gender << " ";
			cout << date << " ";
			cout << add << " ";
			cout << ms << " ";
			cout << day;
		}	
};

int main(){
    NhanVien a;
    a.nhap();
    a.xuat();
    return 0;
}