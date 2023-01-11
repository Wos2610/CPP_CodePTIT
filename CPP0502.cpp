#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

#define M 1000006

struct ThiSinh{
	string name;
	string date;
	float x;
	float y;
	float z;
	float sum;
};

void nhap(ThiSinh &A){
	getline(cin, A.name);
	cin >> A.date;
	cin >> A.x >> A.y >> A.z;
	A.sum = A.x + A.y + A.z;
}

void in(ThiSinh A){
	cout << A.name << " " << A.date << " " ;
	printf("%.1f", A.sum);
}

int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}