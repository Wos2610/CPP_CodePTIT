#include<iostream>
#include<string>
#include<math.h>

using namespace std;

int check(string s){
	int n = s.size();
	for(int i = 0; i < n - 1; i++){
		int a = s[i] - '0';
		int b = s[i + 1] - '0';
		if(b != a - 1 && b != a + 1){
			return 0;
		}
	}
	return 1;
}
void process(){
	double x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	double res = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1)*(y2 - y1));
	printf("%0.4lf", res);
	cout << "\n";
}

int main(){
	int T;
	cin >> T;
	while(T--){
		process();
	}
}