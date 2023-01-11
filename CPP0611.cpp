#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

#define M 1000006
int i = 1;
class SinhVien{
	private:
		string MSV;
		string name;
		string clas;
		string date;
		float x;
	public:
		SinhVien(){
		};
		friend ostream & operator << (ostream &out, const SinhVien &A){
			cout << "B20DCCN" << A.MSV << " " << A.name << " " << A.clas << " " << A.date << " " ;
			printf("%.2f\n", A.x);
			return out;
		};
		
		friend istream & operator >> (istream &in, SinhVien &A){
			string temp = "";
			temp = to_string(i);
			while(temp.size() != 3){
				temp = "0" + temp;
			}
			A.MSV = temp;
			i++;
			
			cin.ignore();
			getline(cin, A.name);
			cin >> A.clas;
			cin >> A.date;
			cin >> A.x ;
			
			if(A.date[2] != '/'){
				A.date = '0' + A.date;
			}
			if(A.date[5] != '/'){
				A.date.insert(3, "0");
			}
			return in;
		}
};


int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}