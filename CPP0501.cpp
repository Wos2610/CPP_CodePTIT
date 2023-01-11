#include<iostream>
#include<iomanip>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

#define M 1000006

struct Point{
	double x;
	double y;
};

Point A, B;

void input(Point &A){
	cin >> A.x >> A.y;
}

double distance(Point A, Point B){
	double res = sqrt((B.x - A.x) * (B.x - A.x) + (B.y - A.y) * (B.y - A.y));
	return res;
}

int main(){
    struct Point A, B;
    
    int t;
    cin>>t;
    while(t--){
        input(A); input(B);
        cout << fixed << setprecision(4) << distance(A,B) << endl;
    }
    return 0;
}