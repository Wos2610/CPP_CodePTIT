#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

#define M 1000006

struct Product{
	int ma;
	string name;
	string type;
	double buyPrice;
	double sellPrice;
	double profit;
};

void nhap(Product ds[], int N){
	for(int i = 0; i < N; i++){
		ds[i].ma = i + 1;
		cin.ignore();
		getline(cin, ds[i].name);
		getline(cin, ds[i].type);
		cin >> ds[i].buyPrice;
		cin >> ds[i].sellPrice;
		ds[i].profit = ds[i].sellPrice - ds[i].buyPrice ;
	}
	
}

bool cmp(Product a, Product b){
	return a.profit > b.profit;
}
void sapxep(Product ds[], int N){
	sort(ds, ds + N, cmp);
}

void in(Product ds[], int N){
	for(int i = 0; i < N; i++){
		cout << ds[i].ma << " ";
		cout << ds[i].name << " ";
		cout << ds[i].type << " ";
		printf("%.2f\n", ds[i].profit);
	}
	
}

int main(){
    struct Product ds[10000];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}