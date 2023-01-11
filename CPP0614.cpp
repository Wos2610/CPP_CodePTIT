#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

#define M 1000006
static int ind = 1;
class NhanVien{
	private:
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
	public:
		NhanVien(){};
		friend ostream & operator << (ostream &out, const NhanVien &A){
			cout << A.MNV << " ";
			cout << A.name << " ";
			cout << A.gender << " ";
			cout << A.date << " ";
			cout << A.add << " ";
			cout << A.ms << " ";
			cout << A.day << "\n";
			return out;
		};
		
		friend istream & operator >> (istream &in, NhanVien &A){
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
			A.thang = A.date[0];
			A.thang += A.date[1];
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
			return in;
		}
};


int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}