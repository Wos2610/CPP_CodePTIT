#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

#define M 1000006

int n;
void process(){
	int n;
	cin >> n;
	int a1[n + 6]= {0};
	int a2[n + 6]= {0};
	
	int s1[n + 6]= {0};
	int s2[n + 6]= {0};
	
	for(int i = 1; i <= n; i++){
		cin >> a1[i];
		s1[i] = s1[i - 1] + a1[i];
//		cout << s1[i] << " ";
	}
//	cout << "\n";

	for(int i = 1; i <= n; i++){
		cin >> a2[i];
		s2[i] = s2[i - 1] + a2[i];
//		cout << s2[i] << " ";
	}
//	cout << "\n";
	
	int max = -1;
	int temp1 = 0, temp2 = 0;
	
	for(int i = 1; i < n; i++){
		for(int j = i + 1; j <= n; j++){
			temp1 = s1[j] - s1[i - 1];
			temp2 = s2[j] - s2[i - 1];
//			cout << temp1 << " " << temp2 << "\n";
			if(temp1 == temp2 && j - i + 1 > max){
				max = j - i + 1;
			}
		}
	}
	
	cout << max << "\n";
	
}

int main(){
    int T;
    scanf("%d", &T);
    while(T--){
    	process();
	}
	
}