#include <bits/stdc++.h>
using namespace std;

#define M 1000006


int main(){
    ifstream input;
    ofstream output;
    input.open("PTIT.in");
    output.open("PTIT.out");
    while(!input.eof()){
    	string a;
    	getline(input, a);
    	output << a;
    	output << "\n";
	}
	input.close();
	output.close();
}