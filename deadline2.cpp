#include<iostream>
#include<string>
using namespace std;
// 012345678901
// 12345 312 312
void checkAppear(string author, string para){
	string temp = " ";
	bool check = 1;
//	para += " ";
	int i;
	for(i = 0; i < para.length(); i++){
		if(para[i] == ' '){
			if(temp == author){
				check = 0;
				para.erase(i - author.size(), author.size());
			}
			temp = "";
		}
		else{
			temp += para[i];
		}
	}
	if(check){
		para.erase(para.end(),1);
	}
	cout << para;
	cout << "\n";
}
int main(){
	int T;
	cin >> T;
	cin.ignore();
	while(T--){ 
		string author;
		string para;
		getline(cin,author);
		getline(cin, para);
		checkAppear(author, para);

	}
}