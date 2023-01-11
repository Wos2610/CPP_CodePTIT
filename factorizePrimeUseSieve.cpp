#include<iostream>
#include<vector>

using namespace std;

#define M 10000000
vector<int> minprime(10000006, 0);
void sieve() {
    for (int i = 2; i * i <= M; i++) {
        if (minprime[i] == 0) {
            for (int j = i * i; j <= M; j += i) {
                if (minprime[j] == 0) {
                    minprime[j] = i;
                }
            }
        }
    }

    for (int i = 2; i <= M; i++) {
        if (minprime[i] == 0) {
            minprime[i] = i;
        }
    }
}

void factorize(vector<int> primeSave, long long n) {

    for (int i = 0; i < primeSave.size(); i++) {
        if (n % primeSave[i] == 0) {
            int count = 0;
            while (n % primeSave[i] == 0) {
                count++;
                n /= primeSave[i];
            }
            printf("%d %d\n", primeSave[i], count);
        }
        if (n == 1) {
            break;
        }
    }
    if (n != 1) {
        printf("%lld 1\n", n);
    }
}

int main() {
    int T ;
    scanf("%d", &T);

    sieve();

    vector<int> primeSave;
    for (int i = 2; i <= M; i++) {
        if (minprime[i] == i) {
            primeSave.emplace_back(i);
        }
    }

    while (T--) {
        long long n;
        scanf("%lld", &n);
        factorize(primeSave, n);
        printf("\n");
    }
}

