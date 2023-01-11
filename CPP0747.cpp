#include <bits/stdc++.h>
using namespace std;

void process(){
    string s;
    cin >> s;

    string s1 = "100";

    int dem = 0;
    int pos = s.find(s1);
    while(pos != string::npos){
        dem++;
        s.erase(pos, 3);
        pos = s.find(s1);
    }
    if(dem != 0){
       cout << dem * 3;
    }
    cout << "\n";
}

int main(){
	int T;
	cin >> T;
	while (T--)
	{
		process();
	}
}
