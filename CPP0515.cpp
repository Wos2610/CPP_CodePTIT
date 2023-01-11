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
		string temp = "";
		temp = to_string(i + 1);
		while(temp.size() != 3){
			temp = "0" + temp;
		}
		ds[i].MSV = temp;
		cin.ignore();
		getline(cin, ds[i].name);
		cin >> ds[i].clas;
		cin >> ds[i].date;
		cin >> ds[i].x ;
	}
	
}

void chuanHoaTen(string s){
	int n = s.size();
	string temp = "";
	vector<string> save;
	
	if(s[0] != ' '){
		temp = s[0];
	}
	for(int i = 1; i < n; i++){
		if(s[i] == ' ' && s[i - 1] != ' '){
			save.push_back(temp);
			temp = "";
		}
		else if((s[i] >= 'A' && s[i] <= 'z') ){
			temp += s[i];
		}
	}
	if(temp.size() != 0){
		save.push_back(temp);
	}
	
	for(int i = 0; i < save.size(); i++){
		if(save[i][0] >= 'a' && save[i][0] <= 'z'){
			save[i][0] -= 32;
		}
		for(int j = 1; j < save[i].size(); j++){
			if(save[i][j] >= 'A' && save[i][j] <= 'Z'){
				save[i][j] += 32;
			}
		}
	}
	
	for(int i = 0; i < save.size(); i++){
		cout << save[i] << " ";
	}
}

bool cmp(SinhVien a, SinhVien b){
	return a.x > b.x;
}
void sapxep(SinhVien ds[], int N){
	sort(ds, ds + N, cmp);
}


void in(SinhVien ds[], int N){
	for(int i = 0; i < N; i++){
		// MSV
		
		cout << "B20DCCN" << ds[i].MSV << " ";
		// Name
		
		chuanHoaTen(ds[i].name);
		
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
    sapxep(ds,N);
    in(ds, N);
    return 0;
}