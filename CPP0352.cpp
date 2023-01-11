#include<iostream>
#include<string>
#include<math.h>
#include<vector>
#include<queue>
#include<string>
#include<map>
using namespace std;

#define M 10000006
#define MOD 1000000007

map<string, int> m;

vector<string> tach(vector<string> save, string s){
    string temp = "";
    if(s[0] != ' '){
        temp = s[0];
    }
    for(int i = 1; i < s.size(); i++){
        if(s[i] == ' ' && s[i - 1] != ' '){
            save.push_back(temp);
            temp = "";
        }
        if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')){
            temp += s[i];
        }
    }
    if(temp != ""){
        save.push_back(temp);
    }
    return save;
}

void process(){
    string s;
	getline(cin, s);
	for(int i = 0; i < s.size(); i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            s[i] += 32;
        }
	}

	vector<string> save;
	save = tach(save, s);

	string res = "";
	res += save[save.size() - 1];

	for(int i = 0; i < save.size() - 1; i++){
        res += save[i][0];
	}

	m[res]++;
	cout << res;
	if(m[res] > 1){
        cout << m[res];
	}
	cout << "@ptit.edu.vn";
	cout << "\n";
}

int main(){
	int n;
	cin >> n;
    cin.ignore();
	for(int i = 0; i < n; i++){
        process();
	}
}
