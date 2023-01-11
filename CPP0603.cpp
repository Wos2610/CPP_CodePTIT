#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

#define M 1000006

class SinhVien{
private:
	string MSV;
	string name;
	string clas;
	string date;
	float mark;
public:
    SinhVien(){};

    friend istream & operator >> (istream &in, SinhVien &A){
        getline(cin, A.name);
        cin >> A.clas >> A.date >> A.mark;

        if(A.date[2] != '/'){
            A.date = "0" + A.date;
        }
        if(A.date[5] != '/'){
            A.date.insert(3, "0");
        }
        return in;
    }

    friend ostream & operator << (ostream &out, const SinhVien &A){

        cout << "B20DCCN001 ";

        vector<string> save;
        string temp = "";
        if(A.name[0] != ' '){
            temp = A.name[0];
        }
        for(int i = 1; i < A.name.size(); i++){
            if(A.name[i] == ' ' && A.name[i - 1] != ' '){
                save.push_back(temp);
                temp = "";
            }
            if((A.name[i] >= 'A' && A.name[i] <= 'Z') || (A.name[i] >= 'a' && A.name[i] <= 'z')){
                temp = temp + A.name[i];
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

        cout << A.clas << " " << A.date << " ";
        printf("%.2f", A.mark);
        cout << "\n";

        return out;
    }
};


int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}
