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
			cout << "B20DCCN" << A.MSV << " ";
			//
			string temp = "";
			vector<string> save;
			if(A.name[0] != ' '){
				temp = A.name[0];
			}
			for(int i = 1; i < A.name.size(); i++){
				if(A.name[i] == ' ' && A.name[i - 1] != ' '){
					save.push_back(temp);
					temp = "";
				}
				else if((A.name[i] >= 'A' && A.name[i] <= 'Z') || (A.name[i] >= 'a' && A.name[i] <= 'z')){
					temp += A.name[i];
				}
			}
			if(temp != ""){
				save.push_back(temp);
			}
			
			for(int i = 0; i < save.size(); i++){
				if(save[i][0] >= 'a' && save[i][0] <= 'z'){
					save[i][0] -= 32;
				}
				cout << save[i][0];
				for(int j = 1; j < save[i].size(); j++){
					if(save[i][j] >= 'A' && save[i][j] <= 'Z'){
						save[i][j] += 32;
					}
					cout << save[i][j];
				}
				cout << " ";
			}
			
			cout << A.clas << " " << A.date << " " ;
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
			scanf("\n");
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
		
		float getX(){
			return x;
		}
};

bool cmp(SinhVien a, SinhVien b){
	return a.getX() > b.getX();
}
void sapxep(SinhVien ds[], int N){
	sort(ds, ds + N, cmp);
}

int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds, N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}