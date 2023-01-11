#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

#define M 1000006

int main(){
	string s;
	int mark = 1;

	while(cin >> s){
        for(int i = 0; i < s.size(); i++){
            if(s[i] >= 'A' && s[i] <= 'Z'){
                s[i] += 32;
            }
        }

        if(mark == 1){
            s[0] -= 32;
            mark = 0;
        }

        if(s[s.size() - 1] == '.' || s[s.size() - 1] == '?' || s[s.size() - 1] == '!'){
            mark = 1;

            for(int i = 0; i < s.size() - 1; i++){
                cout << s[i];
            }
            cout << "\n";
        }
        else{
            cout << s << " ";
        }
	}
}
