#include<bits/stdc++.h>

using namespace std;

vector<string> can = {"Canh", "Tan", "Nham", "Quy", "Giap", "At", "Binh", "Dinh", "Mau", "Ky"};
vector<string> chi = {"Than", "Dau", "Tuat", "Hoi", "Ty", "Suu", "Dan", "Mao", "Thin", "Ty", "Ngo", "Mui"};

int main(){
    int n;
    cin >> n;
    int c = n % 10;
    int ch = n % 12;
    cout << can[c] << " " << chi[ch];
}