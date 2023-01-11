#include <bits/stdc++.h>
using namespace std;


int main(){
	string s;
	map<string, int> m1, m2, m3;

	ifstream input1, input2;
	input1.open("DATA1.in");
	while(input1 >> s){
        for(int i = 0; i < s.size(); i++){
            if(s[i] >= 'A' && s[i] <= 'Z'){
                s[i] += 32;
            }
        }
        m1[s]++;
        m3[s]++;
	}
	input1.close();

	input2.open("DATA2.in");
	while(input2 >> s){
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] >= 'A' && s[i] <= 'Z')
            {
                s[i] += 32;
            }
        }
        m2[s]++;
        m3[s]++;
	}
	input2.close();

    for(auto i : m3){
        cout << i.first << " ";
    }

    cout << "\n";

    for(auto i : m1){
        if(m2[i.first] > 0){
            cout << i.first << " ";
        }
    }
}
