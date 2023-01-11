#include<bits/stdc++.h>

using namespace std;

class SinhVien {
public:
    string name;
    string date;
    string clas;
    float mark;
    string MSV;

    SinhVien(){};

    friend istream & operator >> (istream &in, SinhVien &a){
        getline(cin, a.name);
        cin >> a.clas >> a.date >> a.mark;

        if(a.date[3] != '/'){
            a.date = "0" + a.date;
        }
        if(a.date[5] != '/'){
            a.date.insert(3, "0");
        }

        return in;
    }

    friend ostream & operator << (ostream &out, const SinhVien &a){

        cout << a.MSV << " ";

        string temp = "";
        vector<string> save;
        string s = a.name;
        if(s[0] != ' '){
            temp = s[0];
        }
        for(int i = 1; i < s.size(); i++){
            if(s[i] == ' ' && s[i - 1] != ' '){
                save.push_back(temp);
                temp = "";
            }
            if(s[i] >= 'A' && s[i] <= 'Z'){
                s[i] += 32;
            }
            if(s[i] >= 'a' && s[i] <= 'z'){
                temp += s[i];
            }
        }

        if(temp != ""){
            save.push_back(temp);
        }

        for(int i = 0; i < save.size(); i++){
            if(save[i][0] >= 'a' && save[i][0] <= 'z'){
                save[i][0] -= 32;
            }
            cout << save[i] << " ";
        }
        cout << a.clas << " " << a.date << " ";
        printf("%.2f\n", a.mark);
        return out;
    }
};

bool cmp(SinhVien a, SinhVien b){
    return a.mark > b.mark;
}

int main(){
    int n;
    cin >> n;

    SinhVien a[n + 1];

    for(int i = 1; i <= n; i++){
        if(i < 10){
            a[i].MSV = "B20DCCN00" + to_string(i);
        }
        else{
            a[i].MSV = "B20DCCN0" + to_string(i);
        }
        cin.ignore();
        cin >> a[i];
    }

    sort(a + 1, a + 1 + n, cmp);

    for(int i = 1; i <= n; i++){
        cout << a[i];
    }
}
