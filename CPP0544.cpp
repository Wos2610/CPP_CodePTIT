#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

#define M 1000006
#define PI 3.141592653589793238

struct Triangle{
	double a, b, c, S, R;
};

double tinh(double a, double b, double c, double d){
	double res = sqrt((c - a)*(c - a) + (d - b)*(d - b));
	return res;
}

int isRe(double a, double b, double c){
	if(a + b > c && a + c > b && b + c > a){
		return 1;
	}
	return 0;
}

int main(){
	int T;
	cin >> T;
	while(T--){
		struct Triangle t;
		double d[6] = {0};
		for(int i = 0; i < 6; i++){
			cin >> d[i];
		}
		t.a = tinh(d[0], d[1], d[2], d[3]);
		t.b = tinh(d[2], d[3], d[4], d[5]);
		t.c = tinh(d[0], d[1], d[4], d[5]);
//		cout << t.a << " " << t.b << " " << t.c << " ";
		if(!isRe(t.a, t.b, t.c)){
			cout << "INVALID";
		}
		else{
			t.S = 0.25 * sqrt((t.a + t.b + t.c) * (t.a + t.b - t.c) * (t.b + t.c - t.a) * (t.a + t.c - t.b));
			t.R = (t.a * t.b * t.c)/(4.0 * t.S);
			double res = PI * t.R * t.R;
			printf("%.3lf", res);
		}
		cout << "\n";
	}
}