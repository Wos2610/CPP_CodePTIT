#include<iostream>
#include<math.h>
#include<vector>
 
using namespace std;
 
vector<long long> save;
 
int isPrime(long long n){
    if(n < 2){
        return 0;
    }
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}
 
 
int main(){
    int T;
    scanf("%d", &T);
    long long temp;
    for(int i = 2; i < 20; i++){
        if(isPrime(pow(2,i) - 1)){
            temp = pow(2, i - 1)*(pow(2,i) - 1);
            save.emplace_back(temp);
        }
    }
    while(T--){
        long long n;
        scanf("%lld", &n);
        int mark = 0;
        for(int i = 0; i < save.size(); i++){
            if(n == save[i]){
                mark = 1;
                break;
            }
        }
        if(mark == 1){
            printf("1\n");
        }
        else{
            printf("0\n");
        }
    }
    return 0;
} 