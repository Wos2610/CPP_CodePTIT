//#include<iostream>
//#include<math.h>
//#include<string>
//#include<vector>
//#include<algorithm>
//#include<map>
//using namespace std;
//
//#define M 1000006
//
//struct GiangVien{
//	string MGV;
//	string name;
//	string ten;
//	string mon;
//};
//
//void xuLyTen(GiangVien* a){
//	string s = a->name;
//	int n = s.size();
//	string temp = "";
//	for(int i = n - 1; i >= 0; i--){
//		if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')){
//			temp += s[i];
//		}
//		else if(s[i] == ' '){
//			break;
//		}
//	}
//	
//	reverse(temp.begin(), temp.end());
////	cout << temp << " ";
//	a->ten = temp;
//}
//
//void xuLyMon(GiangVien a){
//	string s = a.mon;
//	int n = s.size();
//	vector<string> save;
//	string temp = "";
//	temp = s[0];
//	for(int i = 0; i < n - 1; i++){
//		if(s[i] == ' ' && s[i + 1] != ' '){
//			temp += (s[i + 1] - 32);
//		}
//	}
//	
//	cout << temp;
//	
//	cout << "\n";
//}
//
//bool cmp(GiangVien a, GiangVien b){
//	if(a.ten == b.ten){
//		return a.MGV < b.MGV;
//	}
//	return a.ten < b.ten;
//}
//
//void nhap(GiangVien &ds){
//	getline(cin, ds.name);
//	xuLyTen(&ds);
//	getline(cin, ds.mon);
//}
//
//void in_ds(GiangVien ds){
//	cout << ds.MGV << " ";
//	cout << ds.name << " ";
//	xuLyMon(ds);
//}
//
//
//int main(){
//	int n = 0;
//	cin >> n;
//	struct GiangVien ds[n + 6];
//	cin.ignore();
//	for(int i = 1; i <= n; i++){
//		ds[i].MGV = "GV";
//		if(i < 10){
//			ds[i].MGV += "0";
//		}
//		ds[i].MGV += to_string(i);
//		nhap(ds[i]);
//	}
//	
//	sort(ds, ds + n, cmp);
//	
//	for(int i = 1; i <= n; i++){
//		in_ds(ds[i]);
//	}
//	
//    return 0;
//}

#include <bits/stdc++.h>
using namespace std;
struct data{
	string ten,mon,ma,tt,mm;
};
bool cmp(data a,data b){
	if(a.tt==b.tt) return a.ma<b.ma;
	return a.tt<b.tt;
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
		a[i].mm+=a[i].mon[0];
    	for(int j=0;j<a[i].mon.size();j++){
    		if(a[i].mon[j]==' ') a[i].mm+=(char)(a[i].mon[j+1]-32);
		}
    	for(int j=m-1;j>=0;j--){
    		if(a[i].ten[j]==' '){
    			k=j;
    			break;
			}
		}
		for(int j=k+1;j<m;j++) a[i].tt+=a[i].ten[j];
	}
	sort(a,a+n,cmp);
	for(int i=0;i<n;i++) cout<<a[i].ma<<" "<<a[i].ten<<" "<<a[i].mm<<endl;
}