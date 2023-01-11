#include<bits/stdc++.h>
using namespace std;

#define M 10000006
#define MOD 1000000007

vector<string> tach(vector<string> save, string s){
    string temp = " ";
    if(s[0] != ' '){
        temp = s[0];
    }

    for(int i = 1; i < s.size(); i++){
        if(s[i] == ' ' && s[i - 1] != ' '){
            save.push_back(temp);
            temp = "";
        }
        else if((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z')){
            temp += s[i];
        }
    }

    if(temp != ""){
        save.push_back(temp);
    }
    return save;
}

void process(){
	string s1, s2;
	getline(cin, s1);
	getline(cin, s2);

	vector<string> save1;
	vector<string> save2;

	save1 = tach(save1, s1);
	save2 = tach(save2, s2);

	map<string, int> m1, m2;

	for(int i = 0; i < save2.size(); i++){
        m2[save2[i]]++;
	}

	vector<string> save;
	for(int i = 0; i < save1.size(); i++){
        if(m2[save1[i]] == 0){
            save.push_back(save1[i]);
        }
	}

	sort(save.begin(), save.end());

	for(int i = 0; i < save.size(); i++){
        if(m1[save[i]] == 0){
             cout << save[i] << " ";
             m1[save[i]] = 1;
        }
	}
	cout << "\n";
}

int main(){
	int T;
	cin >> T;
	cin.ignore();
	while(T--){
		process();
	}
}
