#include <bits/stdc++.h>
using namespace std;

void process(){
    int n;
    cin >> n;
    long long a[n + 6] = {0};
    long long temp = 0;
    long long maxNum = -99999999;
    long long maxSum = -99999999;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        temp += a[i];
        if(temp < 0) temp = 0;
        maxSum = max(maxSum, temp);
        maxNum = max(maxNum, a[i]);
    }

    if(maxSum == 0){
        maxSum = maxNum;
    }
    cout << maxSum;
    cout << "\n";

}

int main(){
	int T;
	cin >> T;
	while(T--){
		process();
	}
}
