#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

#define M 1000006

struct data{
	string ten,mon,ma,tt,mm;
};

bool cmp(data a,data b){
	if(a.tt==b.tt) return a.ma<b.ma;
	return a.tt<b.tt;
}

string xuLyMon(string s){
	string res = "";
	res += s[0];
	for(int i = 0; i < s.size(); i++){
		if(s[i] == ' '){
			res += (char)(s[i+1]-32);
		}
	}
	return res;
}

int main(){
    int n;
    cin>>n;
    struct data a[n];
    cin.ignore();
    for(int i=0;i<n;i++){
    	getline(cin,a[i].ten);
    	getline(cin,a[i].mon);
    	if(i<9) a[i].ma="GV0";
    	else a[i].ma="GV";
    	a[i].ma+=to_string(i+1);
    	int m=a[i].ten.size(),k;
    	a[i].tt="";
    	a[i].mm="";
		a[i].mm = xuLyMon(a[i].mon);
    	for(int j=m-1;j>=0;j--){
    		if(a[i].ten[j]==' '){
    			k=j;
    			break;
			}
		}
		for(int j=k+1;j<m;j++) a[i].tt+=a[i].ten[j];
	}
	
	int q;
	cin >> q;
	cin.ignore();
	string x;
	for(int i = 1; i <= q; i++){
		getline(cin, x);
		cout << "DANH SACH GIANG VIEN BO MON " << xuLyMon(x) << ":\n";
		for(int i = 0; i < n; i++){
			if(a[i].mon == x){
				cout << a[i].ma << " " << a[i].ten << " " << a[i].mm<<"\n";
			}
		}
	}

}